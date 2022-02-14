
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ a; scalar_t__ b; } ;
typedef TYPE_2__ perm_list ;
struct TYPE_10__ {int len; TYPE_1__* v; } ;
typedef TYPE_3__ dl_perm_list ;
struct TYPE_8__ {TYPE_2__* r; } ;


 int FUNC_0 (TYPE_3__*,int,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;

int FUNC_3 (dl_perm_list *VAR_0, int VAR_1) {
  if (!(0 <= VAR_1 && VAR_1 < VAR_0->len)) {
    return -1;
  }

  FUNC_0 (VAR_0, VAR_1, 0);
  perm_list *VAR_2 = VAR_0->v->r;
  if (VAR_2->a + 1 == VAR_2->b) {
    FUNC_1 (VAR_2);
    FUNC_2 (VAR_2);
  } else {
    VAR_2->a++;
  }
  VAR_0->len--;
  return 0;
}
