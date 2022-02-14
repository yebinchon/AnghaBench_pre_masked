
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16_t ;
struct forkpoint {scalar_t__ saved_data_stack; scalar_t__ saved_curr_frame; int path_len; int subexp_nest; int value_at_path; int * return_address; } ;
struct TYPE_5__ {scalar_t__ fork_top; scalar_t__ stk_top; scalar_t__ curr_frame; int stk; int subexp_nest; int value_at_path; int path; } ;
typedef TYPE_1__ jq_state ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 struct forkpoint* FUNC_5 (int *,scalar_t__) ;
 int FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (int *,scalar_t__,int) ;
 scalar_t__ FUNC_8 (int *,scalar_t__) ;

uint16_t* FUNC_9(jq_state *VAR_1){
  while (!FUNC_8(&VAR_1->stk, VAR_1->fork_top)) {
    if (FUNC_8(&VAR_1->stk, VAR_1->stk_top)) {
      FUNC_3(FUNC_6(VAR_1));
    } else if (FUNC_8(&VAR_1->stk, VAR_1->curr_frame)) {
      FUNC_1(VAR_1);
    } else {
      FUNC_0(0);
    }
  }

  if (VAR_1->fork_top == 0) {
    return 0;
  }

  struct forkpoint* VAR_2 = FUNC_5(&VAR_1->stk, VAR_1->fork_top);
  uint16_t* VAR_3 = VAR_2->return_address;
  VAR_1->stk_top = VAR_2->saved_data_stack;
  VAR_1->curr_frame = VAR_2->saved_curr_frame;
  int VAR_4 = VAR_2->path_len;
  if (FUNC_4(VAR_1->path) == VAR_0) {
    FUNC_0(VAR_4 >= 0);
    VAR_1->path = FUNC_2(VAR_1->path, 0, VAR_4);
  } else {
    VAR_2->path_len = 0;
  }
  FUNC_3(VAR_1->value_at_path);
  VAR_1->value_at_path = VAR_2->value_at_path;
  VAR_1->subexp_nest = VAR_2->subexp_nest;
  VAR_1->fork_top = FUNC_7(&VAR_1->stk, VAR_1->fork_top, sizeof(struct forkpoint));
  return VAR_3;
}
