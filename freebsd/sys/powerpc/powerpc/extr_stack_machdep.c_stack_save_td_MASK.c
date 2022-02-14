
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vm_offset_t ;
struct thread {TYPE_1__* td_pcb; } ;
struct stack {int dummy; } ;
struct TYPE_2__ {int pcb_sp; } ;


 scalar_t__ FUNC_0 (struct thread*) ;
 scalar_t__ FUNC_1 (struct thread*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct stack*,int ) ;

void
FUNC_4(struct stack *VAR_0, struct thread *VAR_1)
{
 vm_offset_t VAR_2;

 if (FUNC_1(VAR_1))
  FUNC_2("stack_save_td: swapped");
 if (FUNC_0(VAR_1))
  FUNC_2("stack_save_td: running");

 VAR_2 = VAR_1->td_pcb->pcb_sp;
 FUNC_3(VAR_0, VAR_2);
}
