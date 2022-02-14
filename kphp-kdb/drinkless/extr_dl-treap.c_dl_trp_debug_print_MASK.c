
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* dl_trp_node_ptr ;
struct TYPE_3__ {int x; struct TYPE_3__* r; struct TYPE_3__* l; } ;
typedef int FILE ;


 int FUNC_0 (int *,char*,int) ;

void FUNC_1 (dl_trp_node_ptr VAR_0, FILE *VAR_1) {
  if (VAR_0 == ((void*)0)) {
    return;
  }
  FUNC_1 (VAR_0->l, VAR_1);
  FUNC_0 (VAR_1, " %+d", VAR_0->x / 2 * (VAR_0->x & 1 ? +1 : -1));
  FUNC_1 (VAR_0->r, VAR_1);
}
