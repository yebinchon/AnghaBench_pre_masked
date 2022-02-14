
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int n; int* lcp; unsigned char* y; int* p; } ;
typedef TYPE_1__ suffix_array_t ;
typedef int dyn_mark_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int,int const) ;
 int* FUNC_3 (int) ;
 int* FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5 (suffix_array_t *VAR_0) {
  int VAR_1, VAR_2, VAR_3;
  const int VAR_4 = VAR_0->n;
  VAR_0->lcp = FUNC_3 (4 * (2 * VAR_4 + 1));
  unsigned char *VAR_5 = VAR_0->y;
  int *VAR_6 = VAR_0->p;
  int *VAR_7 = VAR_0->lcp;
  dyn_mark_t VAR_8;
  FUNC_0 (VAR_8);
  int *VAR_9 = FUNC_4 (4 * VAR_4);
  for (VAR_1 = 0; VAR_1 < VAR_4; VAR_1++) {
    VAR_9[VAR_6[VAR_1]] = VAR_1;
  }
  int VAR_10 = 0;
  for (VAR_2 = 0; VAR_2 < VAR_4; VAR_2++) {
    if (--VAR_10 < 0) {
      VAR_10 = 0;
    }
    VAR_1 = VAR_9[VAR_2];
    if (VAR_1 != 0) {
      VAR_3 = VAR_6[VAR_1-1];
      while (VAR_2 + VAR_10 < VAR_4 && VAR_3 + VAR_10 < VAR_4 && VAR_5[VAR_2+VAR_10] == VAR_5[VAR_3+VAR_10]) {
        VAR_10++;
      }
    } else {
      VAR_10 = 0;
    }
    VAR_7[VAR_1] = VAR_10;
  }
  VAR_7[VAR_4] = 0;
  FUNC_1 (VAR_8);
  for (VAR_1 = VAR_4 + VAR_4; VAR_1 > VAR_4; VAR_1--) {
    VAR_7[VAR_1] = -1;
  }
  FUNC_2 (VAR_0, -1, VAR_4);
}
