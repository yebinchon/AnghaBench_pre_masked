
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct stack_pos {int saved_curr_frame; int saved_data_stack; } ;
struct forkpoint {int * return_address; int subexp_nest; int value_at_path; int path_len; int saved_curr_frame; int saved_data_stack; } ;
struct TYPE_3__ {int curr_frame; int stk_top; int subexp_nest; int value_at_path; int path; int fork_top; int stk; } ;
typedef TYPE_1__ jq_state ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 struct forkpoint* FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ,int) ;

void FUNC_5(jq_state *VAR_1, uint16_t* VAR_2, struct stack_pos VAR_3){
  VAR_1->fork_top = FUNC_4(&VAR_1->stk, VAR_1->fork_top, sizeof(struct forkpoint));
  struct forkpoint* VAR_4 = FUNC_3(&VAR_1->stk, VAR_1->fork_top);
  VAR_4->saved_data_stack = VAR_1->stk_top;
  VAR_4->saved_curr_frame = VAR_1->curr_frame;
  VAR_4->path_len =
    FUNC_2(VAR_1->path) == VAR_0 ? FUNC_0(FUNC_1(VAR_1->path)) : 0;
  VAR_4->value_at_path = FUNC_1(VAR_1->value_at_path);
  VAR_4->subexp_nest = VAR_1->subexp_nest;
  VAR_4->return_address = VAR_2;
  VAR_1->stk_top = VAR_3.saved_data_stack;
  VAR_1->curr_frame = VAR_3.saved_curr_frame;
}
