
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


 int FUNC_0 (int ,char*,...) ;
 int VAR_0 ;

void FUNC_1 (dl_perm_list *VAR_1) {
  perm_list *VAR_2;
  for (VAR_2 = VAR_1->v->r; VAR_2 != VAR_1->v; VAR_2 = VAR_2->r) {
    FUNC_0 (VAR_0, "[%d,%d] ", VAR_2->a, VAR_2->b);
  }
  FUNC_0 (VAR_0, "\n");
}
