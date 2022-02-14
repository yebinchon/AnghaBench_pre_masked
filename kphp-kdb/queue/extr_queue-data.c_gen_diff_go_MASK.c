
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* treap_node_ptr ;
struct TYPE_6__ {scalar_t__ x; scalar_t__ y; } ;
struct TYPE_5__ {scalar_t__ x; scalar_t__ val; struct TYPE_5__* r; struct TYPE_5__* l; } ;


 TYPE_3__* VAR_0 ;
 TYPE_3__* VAR_1 ;
 int FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (scalar_t__) ;

void FUNC_2 (treap_node_ptr VAR_2) {
  if (VAR_2 == ((void*)0)) {
    return;
  }
  FUNC_2 (VAR_2->l);

  while (VAR_0 != VAR_1 && VAR_0->x > VAR_2->x) {
    FUNC_0 (VAR_0->x, VAR_0->y);
    VAR_0++;
  }
  if (VAR_0 == VAR_1 || VAR_0->x != VAR_2->x) {
    FUNC_1 (VAR_2->x);
  } else {
    if (VAR_0->y != VAR_2->val) {
      FUNC_0 (VAR_0->x, VAR_0->y);
    }
    VAR_0++;
  }

  FUNC_2 (VAR_2->r);
}
