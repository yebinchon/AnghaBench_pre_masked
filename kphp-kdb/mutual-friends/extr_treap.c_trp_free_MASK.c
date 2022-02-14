
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* trp_node_ptr ;
struct TYPE_4__ {struct TYPE_4__* l; struct TYPE_4__* r; } ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;

void FUNC_0 (trp_node_ptr VAR_2) {
  if (VAR_2 == ((void*)0)) {
    return;
  }
  FUNC_0 (VAR_2->l);
  FUNC_0 (VAR_2->r);
  VAR_2->r = ((void*)0);
  VAR_2->l = VAR_0;
  VAR_0 = VAR_2;

  VAR_1++;
}
