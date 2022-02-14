
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {TYPE_1__* td_pcb; } ;
struct stack {int dummy; } ;
struct frame {int dummy; } ;
struct TYPE_2__ {scalar_t__ pcb_sp; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct thread*) ;
 scalar_t__ FUNC_1 (struct thread*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct stack*,struct frame*) ;

void
FUNC_4(struct stack *VAR_1, struct thread *VAR_2)
{

 if (FUNC_1(VAR_2))
  FUNC_2("stack_save_td: swapped");
 if (FUNC_0(VAR_2))
  FUNC_2("stack_save_td: running");

 FUNC_3(VAR_1, (struct frame *)(VAR_2->td_pcb->pcb_sp + VAR_0));
}
