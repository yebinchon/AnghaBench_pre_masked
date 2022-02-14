
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unwind_state {int stack_info; int stack_mask; struct task_struct* task; int sp; } ;
struct task_struct {int dummy; } ;
struct pt_regs {int dummy; } ;


 int FUNC_0 (unsigned long*,int) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long*,struct task_struct*,int *,int *) ;
 int FUNC_3 (struct unwind_state*,int ,int) ;
 int FUNC_4 (int *,unsigned long*,int) ;
 int FUNC_5 (struct unwind_state*) ;
 int FUNC_6 (struct unwind_state*) ;

void FUNC_7(struct unwind_state *VAR_0, struct task_struct *VAR_1,
      struct pt_regs *VAR_2, unsigned long *VAR_3)
{
 FUNC_3(VAR_0, 0, sizeof(*VAR_0));

 VAR_0->task = VAR_1;
 VAR_0->sp = FUNC_0(VAR_3, sizeof(long));

 FUNC_2(VAR_3, VAR_0->task, &VAR_0->stack_info,
         &VAR_0->stack_mask);






 if (!FUNC_5(VAR_0) &&
     (!FUNC_4(&VAR_0->stack_info, VAR_3, sizeof(long)) ||
     !FUNC_1(*VAR_3)))
  FUNC_6(VAR_0);
}
