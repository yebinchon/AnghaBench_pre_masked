
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int n; unsigned char* y; int* p; int* lcp; } ;
typedef TYPE_1__ suffix_array_t ;


 int FUNC_0 (int) ;

void FUNC_1 (suffix_array_t *VAR_0) {
  int VAR_1;
  for (VAR_1 = 0; VAR_1 + 1 < VAR_0->n; VAR_1++) {
    unsigned char *VAR_2 = VAR_0->y + VAR_0->p[VAR_1];
    unsigned char *VAR_3 = VAR_0->y + VAR_0->p[VAR_1+1];
    int VAR_4, VAR_5 = VAR_0->n - VAR_0->p[VAR_1+1];
    if (VAR_5 > VAR_0->n - VAR_0->p[VAR_1]) {
      VAR_5 = VAR_0->n - VAR_0->p[VAR_1];
    }
    for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++) {
      if (*VAR_2 != *VAR_3) { break; }
      VAR_2++;
      VAR_3++;
    }
    FUNC_0 (VAR_2 == VAR_0->y + VAR_0->n || *VAR_2 < *VAR_3);
    FUNC_0 (VAR_4 == VAR_0->lcp[VAR_1+1]);
  }
  FUNC_0 (VAR_0->lcp[0] == 0);
  FUNC_0 (VAR_0->lcp[VAR_0->n] == 0);
}
