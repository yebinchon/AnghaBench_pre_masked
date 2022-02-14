
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ a; scalar_t__ b; struct TYPE_11__* r; } ;
typedef TYPE_2__ perm_list ;
struct TYPE_12__ {int len; TYPE_1__* v; } ;
typedef TYPE_3__ dl_perm_list ;
struct TYPE_10__ {int r; } ;


 int FUNC_0 (TYPE_2__*,TYPE_2__*) ;
 TYPE_2__* FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (TYPE_2__*) ;
 TYPE_2__* FUNC_3 (int ,int) ;

int FUNC_4 (dl_perm_list *VAR_0, int VAR_1, int VAR_2) {
  if (!(0 <= VAR_1 && VAR_1 < VAR_0->len)) {
    return -1;
  }
  if (!(0 <= VAR_2 && VAR_2 < VAR_0->len)) {
    return -1;
  }
  if (VAR_1 == VAR_2) {
    return 0;
  }

  perm_list *VAR_3 = FUNC_3 (VAR_0->v->r, VAR_1)->r, *VAR_4;
  if (VAR_3->a + 1 == VAR_3->b) {
    VAR_4 = VAR_3;
    FUNC_2 (VAR_3);
  } else {
    VAR_4 = FUNC_1 (VAR_3->a, VAR_3->a + 1);
    VAR_3->a++;
  }
  VAR_3 = FUNC_3 (VAR_0->v->r, VAR_2);

  FUNC_0 (VAR_3, VAR_4);
  return 0;
}
