
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct unwind_state {int pc; int fp; int sp; } ;
struct thread {TYPE_1__* td_pcb; } ;
struct stack {int dummy; } ;
struct TYPE_2__ {int pcb_ra; int * pcb_s; int pcb_sp; } ;


 scalar_t__ FUNC_0 (struct thread*) ;
 scalar_t__ FUNC_1 (struct thread*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct stack*,struct unwind_state*) ;

void
FUNC_4(struct stack *VAR_0, struct thread *VAR_1)
{
 struct unwind_state VAR_2;

 if (FUNC_1(VAR_1))
  FUNC_2("stack_save_td: swapped");
 if (FUNC_0(VAR_1))
  FUNC_2("stack_save_td: running");

 VAR_2.sp = VAR_1->td_pcb->pcb_sp;
 VAR_2.fp = VAR_1->td_pcb->pcb_s[0];
 VAR_2.pc = VAR_1->td_pcb->pcb_ra;

 FUNC_3(VAR_0, &VAR_2);
}
