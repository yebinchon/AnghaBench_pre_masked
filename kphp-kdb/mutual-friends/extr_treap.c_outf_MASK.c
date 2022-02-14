
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* trp_node_ptr ;
struct TYPE_3__ {int x; struct TYPE_3__* r; struct TYPE_3__* l; } ;


 int FUNC_0 (int ,char*,int) ;
 int VAR_0 ;

void FUNC_1 (trp_node_ptr VAR_1) {
  if (VAR_1 == ((void*)0)) {
    return;
  }
  FUNC_1 (VAR_1->l);
  FUNC_0 (VAR_0, "%+d ", VAR_1->x / 2 * (VAR_1->x & 1 ? +1 : -1));
  FUNC_1 (VAR_1->r);
}
