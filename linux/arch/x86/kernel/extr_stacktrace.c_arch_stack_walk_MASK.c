
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unwind_state {int dummy; } ;
struct task_struct {int dummy; } ;
struct pt_regs {unsigned long ip; } ;
typedef int (* stack_trace_consume_fn ) (void*,unsigned long,int) ;


 int FUNC_0 (struct unwind_state*) ;
 unsigned long FUNC_1 (struct unwind_state*) ;
 int FUNC_2 (struct unwind_state*) ;
 int FUNC_3 (struct unwind_state*,struct task_struct*,struct pt_regs*,int *) ;

void FUNC_4(stack_trace_consume_fn VAR_0, void *VAR_1,
       struct task_struct *VAR_2, struct pt_regs *VAR_3)
{
 struct unwind_state VAR_4;
 unsigned long VAR_5;

 if (VAR_3 && !VAR_0(VAR_1, VAR_3->ip, 0))
  return;

 for (FUNC_3(&VAR_4, VAR_2, VAR_3, ((void*)0)); !FUNC_0(&VAR_4);
      FUNC_2(&VAR_4)) {
  VAR_5 = FUNC_1(&VAR_4);
  if (!VAR_5 || !VAR_0(VAR_1, VAR_5, 0))
   break;
 }
}
