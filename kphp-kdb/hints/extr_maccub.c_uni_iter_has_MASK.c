
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int n; int * it; } ;
typedef TYPE_1__ uni_iterator ;


 scalar_t__ FUNC_0 (int *,int) ;

int FUNC_1 (uni_iterator *VAR_0, int VAR_1) {
  int VAR_2;

  for (VAR_2 = 0; VAR_2 < VAR_0->n; VAR_2++) {
    if (FUNC_0 (&VAR_0->it[VAR_2], VAR_1)) {
      return 1;
    }
  }

  return 0;
}
