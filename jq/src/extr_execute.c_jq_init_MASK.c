
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * nomem_handler_data; int * nomem_handler; void* value_at_path; void* path; int attrs; int err_cb_data; int err_cb; void* error_message; void* exit_code; scalar_t__ halted; void* error; scalar_t__ curr_frame; scalar_t__ fork_top; scalar_t__ stk_top; int stk; scalar_t__ next_label; scalar_t__ bc; } ;
typedef TYPE_1__ jq_state ;


 int VAR_0 ;
 void* FUNC_0 () ;
 TYPE_1__* FUNC_1 (int) ;
 void* FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int VAR_1 ;

jq_state *FUNC_5(void) {
  jq_state *VAR_2;
  VAR_2 = FUNC_1(sizeof(*VAR_2));
  if (VAR_2 == ((void*)0))
    return ((void*)0);

  VAR_2->bc = 0;
  VAR_2->next_label = 0;

  FUNC_4(&VAR_2->stk);
  VAR_2->stk_top = 0;
  VAR_2->fork_top = 0;
  VAR_2->curr_frame = 0;
  VAR_2->error = FUNC_2();

  VAR_2->halted = 0;
  VAR_2->exit_code = FUNC_0();
  VAR_2->error_message = FUNC_0();

  VAR_2->err_cb = VAR_0;
  VAR_2->err_cb_data = VAR_1;

  VAR_2->attrs = FUNC_3();
  VAR_2->path = FUNC_2();
  VAR_2->value_at_path = FUNC_2();

  VAR_2->nomem_handler = ((void*)0);
  VAR_2->nomem_handler_data = ((void*)0);
  return VAR_2;
}
