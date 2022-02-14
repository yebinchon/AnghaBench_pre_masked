
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* r; } ;
typedef TYPE_1__ perm_list ;
struct TYPE_6__ {TYPE_1__* v; } ;
typedef TYPE_2__ dl_perm_list ;


 int FUNC_0 (TYPE_1__*) ;

void FUNC_1 (dl_perm_list *VAR_0) {
  perm_list *VAR_1 = VAR_0->v, *VAR_2 = VAR_1;
  do {
    perm_list *VAR_3 = VAR_2;
    VAR_2 = VAR_2->r;
    FUNC_0 (VAR_3);
  } while (VAR_2 != VAR_1);
}
