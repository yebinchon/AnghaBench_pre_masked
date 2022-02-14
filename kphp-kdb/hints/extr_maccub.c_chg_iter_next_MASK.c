
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int i; size_t stack_top; int * stack_state; int * x; } ;
typedef TYPE_1__ chg_iterator ;


 int FUNC_0 (TYPE_1__*) ;

void FUNC_1 (chg_iterator *VAR_0) {
  if (VAR_0->x == ((void*)0)) {
    return;
  } else if (VAR_0->i == -1) {
    VAR_0->stack_state[VAR_0->stack_top]++;
    FUNC_0 (VAR_0);
  } else {

    VAR_0->i++;
  }

}
