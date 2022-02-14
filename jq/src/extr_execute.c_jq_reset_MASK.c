
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ stk_top; scalar_t__ fork_top; scalar_t__ curr_frame; scalar_t__ subexp_nest; void* value_at_path; void* path; void* error_message; void* exit_code; scalar_t__ halted; void* error; int stk; } ;
typedef TYPE_1__ jq_state ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (void*) ;
 scalar_t__ FUNC_2 (void*) ;
 void* FUNC_3 () ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_6(jq_state *VAR_1) {
  while (FUNC_5(VAR_1)) {}

  FUNC_0(VAR_1->stk_top == 0);
  FUNC_0(VAR_1->fork_top == 0);
  FUNC_0(VAR_1->curr_frame == 0);
  FUNC_4(&VAR_1->stk);
  FUNC_1(VAR_1->error);
  VAR_1->error = FUNC_3();

  VAR_1->halted = 0;
  FUNC_1(VAR_1->exit_code);
  FUNC_1(VAR_1->error_message);
  if (FUNC_2(VAR_1->path) != VAR_0)
    FUNC_1(VAR_1->path);
  VAR_1->path = FUNC_3();
  FUNC_1(VAR_1->value_at_path);
  VAR_1->value_at_path = FUNC_3();
  VAR_1->subexp_nest = 0;
}
