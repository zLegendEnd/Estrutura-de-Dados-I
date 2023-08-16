#include <stdio.h>

void printv(int v[], int n)
  {
  for(int i = 0; i < n; i++)
    {
    printf("%d ", v[i]);
    }
  printf("\n");
  }

void insertionsort(int v[], int n)
  {
  int bol = 1;

  for(int i = 1; i < n; i++)
    {
    int ind = v[i];

    if(bol)
      {
      printv(v, n);
      }
    bol = 1;

    for(int j = i-1, count = 0;((j >= 0) && (ind < v[j])); j--)
      {
      v[j+1] = v[j];
      v[j] = ind;
      printv(v, n);
      bol = 0;
      }
    }
  }

int
main()
  {
  int n = 6;
  int v[6] = {31, 41, 59, 26, 41, 58};
  
  insertionsort(v, n); 

  return(0);
  }
