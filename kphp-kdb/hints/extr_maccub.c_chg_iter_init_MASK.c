
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int root; } ;
typedef TYPE_1__ treap ;
struct TYPE_6__ {scalar_t__* x; int i; scalar_t__* stack_state; int * stack_ptr; scalar_t__ stack_top; } ;
typedef TYPE_2__ chg_iterator ;
typedef scalar_t__* changes ;


 int FUNC_0 (TYPE_2__*) ;

void FUNC_1 (chg_iterator *VAR_0, changes VAR_1) {
  VAR_0->x = VAR_1;


  if ((long)VAR_1 < 0) {
    VAR_0->i = 0;
  } else

  if (VAR_1) {
    if (VAR_1[0] > 0) {
      VAR_0->i = 0;
    } else {
      VAR_0->i = -1;
      VAR_0->stack_top = 0;
      VAR_0->stack_ptr[0] = ((treap *)(VAR_1))->root;
      VAR_0->stack_state[0] = 0;

      FUNC_0 (VAR_0);
    }
  }
}
