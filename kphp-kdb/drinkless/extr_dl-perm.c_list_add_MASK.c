
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* l; struct TYPE_4__* r; } ;
typedef TYPE_1__ perm_list ;



void FUNC_0 (perm_list *VAR_0, perm_list *VAR_1) {
  perm_list *VAR_2 = VAR_0->r;
  VAR_0->r = VAR_1;
  VAR_1->l = VAR_0;
  VAR_1->r = VAR_2;
  VAR_2->l = VAR_1;
}
