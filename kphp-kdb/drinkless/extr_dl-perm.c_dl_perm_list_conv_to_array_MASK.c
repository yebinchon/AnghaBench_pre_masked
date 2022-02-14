
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int a; int b; struct TYPE_4__* r; } ;
typedef TYPE_1__ perm_list ;
struct TYPE_5__ {int len; TYPE_1__* v; } ;
typedef TYPE_2__ dl_perm_list ;



int FUNC_0 (dl_perm_list *VAR_0, int *VAR_1, int VAR_2) {
  perm_list *VAR_3 = VAR_0->v, *VAR_4 = VAR_3->r;

  int VAR_5 = 0;

  while (VAR_4 != VAR_3) {
    int VAR_6;
    for (VAR_6 = VAR_4->a; VAR_6 < VAR_4->b; VAR_6++) {
      if (VAR_2) {
        *VAR_1++ = VAR_6;
        VAR_2--;
        VAR_5++;
      }
    }
    VAR_4 = VAR_4->r;
  }
  return VAR_0->len;
}
