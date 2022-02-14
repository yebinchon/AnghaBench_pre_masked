
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int td_pcb; } ;
struct stack {int dummy; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct thread*) ;
 scalar_t__ FUNC_2 (struct thread*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct thread*,struct stack*,int ) ;

void
FUNC_5(struct stack *VAR_0, struct thread *VAR_1)
{

 if (FUNC_2(VAR_1))
  FUNC_3("stack_save_td: swapped");
 if (FUNC_1(VAR_1))
  FUNC_3("stack_save_td: running");

 FUNC_4(VAR_1, VAR_0, FUNC_0(VAR_1->td_pcb));
}
