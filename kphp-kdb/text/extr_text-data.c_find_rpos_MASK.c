
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int N; int* A; int last_A; } ;
typedef TYPE_1__ listree_t ;


 int FUNC_0 (int) ;

int FUNC_1 (listree_t *VAR_0, int VAR_1) {
  int VAR_2 = -1, VAR_3 = VAR_0->N, VAR_4;

  if (!VAR_0->A && VAR_1 > VAR_0->last_A) {
    return 0;
  }

  if (!VAR_0->A && VAR_0->N) {
    return -2;
  }


  while (VAR_3 - VAR_2 > 1) {
    VAR_4 = (VAR_2 + VAR_3) / 2;
    if (VAR_1 <= VAR_0->A[VAR_4]) {
      VAR_3 = VAR_4;
    } else {
      VAR_2 = VAR_4;
    }
  }
  FUNC_0 (VAR_3 >= 0 && VAR_3 <= VAR_0->N);
  return VAR_0->N - VAR_3;
}
