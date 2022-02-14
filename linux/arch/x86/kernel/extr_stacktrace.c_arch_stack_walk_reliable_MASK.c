
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unwind_state {int dummy; } ;
struct task_struct {int flags; } ;
struct pt_regs {int dummy; } ;
typedef int (* stack_trace_consume_fn ) (void*,unsigned long,int) ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct unwind_state*) ;
 scalar_t__ FUNC_2 (struct unwind_state*) ;
 struct pt_regs* FUNC_3 (struct unwind_state*,int *) ;
 unsigned long FUNC_4 (struct unwind_state*) ;
 int FUNC_5 (struct unwind_state*) ;
 int FUNC_6 (struct unwind_state*,struct task_struct*,int *,int *) ;
 scalar_t__ FUNC_7 (struct pt_regs*) ;

int FUNC_8(stack_trace_consume_fn VAR_4,
        void *VAR_5, struct task_struct *VAR_6)
{
 struct unwind_state VAR_7;
 struct pt_regs *VAR_8;
 unsigned long VAR_9;

 for (FUNC_6(&VAR_7, VAR_6, ((void*)0), ((void*)0));
      !FUNC_1(&VAR_7) && !FUNC_2(&VAR_7);
      FUNC_5(&VAR_7)) {

  VAR_8 = FUNC_3(&VAR_7, ((void*)0));
  if (VAR_8) {

   if (FUNC_7(VAR_8))
    return 0;
   if (FUNC_0(VAR_0))
    return -VAR_1;
  }

  VAR_9 = FUNC_4(&VAR_7);






  if (!VAR_9)
   return -VAR_1;

  if (!VAR_4(VAR_5, VAR_9, 0))
   return -VAR_1;
 }


 if (FUNC_2(&VAR_7))
  return -VAR_1;


 if (!(VAR_6->flags & (VAR_3 | VAR_2)))
  return -VAR_1;

 return 0;
}
