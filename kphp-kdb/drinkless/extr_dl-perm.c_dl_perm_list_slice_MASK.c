
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int a; int b; struct TYPE_4__* r; } ;
typedef TYPE_1__ perm_list ;
struct TYPE_5__ {scalar_t__ len; TYPE_1__* v; } ;
typedef TYPE_2__ dl_perm_list ;


 int FUNC_0 (scalar_t__,int ) ;

int FUNC_1 (dl_perm_list *VAR_0, int *VAR_1, int VAR_2, int VAR_3) {
  perm_list *VAR_4 = VAR_0->v, *VAR_5 = VAR_4->r;

  int VAR_6 = 0;

  while (VAR_5 != VAR_4) {
    int VAR_7;
    for (VAR_7 = VAR_5->a; VAR_7 < VAR_5->b; VAR_7++) {
      if (VAR_3 > 0) {
        VAR_3--;
      } else {
        if (VAR_2) {
          *VAR_1++ = VAR_7;
          VAR_2--;
          VAR_6++;
        }
      }
    }
    VAR_5 = VAR_5->r;
  }
  return FUNC_0 (VAR_0->len - VAR_3, 0);
}
