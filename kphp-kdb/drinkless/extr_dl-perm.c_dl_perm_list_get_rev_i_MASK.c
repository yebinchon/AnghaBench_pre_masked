
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int a; int b; struct TYPE_4__* r; } ;
typedef TYPE_1__ perm_list ;
struct TYPE_5__ {TYPE_1__* v; } ;
typedef TYPE_2__ dl_perm_list ;



int FUNC_0 (dl_perm_list *VAR_0, int VAR_1) {




  perm_list *VAR_2 = VAR_0->v;
  int VAR_3 = 0;
  while (VAR_1 < VAR_2->a || VAR_1 >= VAR_2->b) {
    VAR_3 += VAR_2->b - VAR_2->a;
    VAR_2 = VAR_2->r;
    if (VAR_2 == VAR_0->v) {
      return -1;
    }
  }

  return VAR_3 + VAR_1 - VAR_2->a;
}
