
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct stack_pos {int member_1; int member_0; } ;
struct TYPE_3__ {int curr_frame; int stk_top; } ;
typedef TYPE_1__ jq_state ;



struct stack_pos FUNC_0(jq_state* VAR_0) {
  struct stack_pos VAR_1 = {VAR_0->stk_top, VAR_0->curr_frame};
  return VAR_1;
}
