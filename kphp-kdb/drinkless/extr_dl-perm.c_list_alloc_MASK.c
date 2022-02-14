
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int a; int b; struct TYPE_4__* r; struct TYPE_4__* l; } ;
typedef TYPE_1__ perm_list ;


 TYPE_1__* FUNC_0 (int) ;

perm_list* FUNC_1 (int VAR_0, int VAR_1) {
  perm_list *VAR_2 = FUNC_0 (sizeof (perm_list));
  VAR_2->l = VAR_2->r = VAR_2;
  VAR_2->a = VAR_0;
  VAR_2->b = VAR_1;
  return VAR_2;
}
