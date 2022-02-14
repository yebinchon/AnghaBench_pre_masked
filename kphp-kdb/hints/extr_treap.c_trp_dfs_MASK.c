
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* trp_node_ptr ;
struct TYPE_3__ {struct TYPE_3__* l; int x; struct TYPE_3__* r; } ;



int FUNC_0 (trp_node_ptr VAR_0, int *VAR_1) {
  int *VAR_2 = VAR_1;
  if (VAR_0 != ((void*)0)) {
    VAR_1 += FUNC_0 (VAR_0->r, VAR_1);
    *VAR_1++ = VAR_0->x;
    VAR_1 += FUNC_0 (VAR_0->l, VAR_1);
  }
  return VAR_1 - VAR_2;
}
