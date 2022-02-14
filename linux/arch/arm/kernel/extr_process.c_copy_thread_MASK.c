
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {unsigned long ARM_sp; unsigned long r4; unsigned long r5; unsigned long pc; unsigned long sp; int ARM_r3; int ARM_cpsr; scalar_t__ ARM_r0; } ;
struct thread_info {int stack_canary; int * tp_value; struct pt_regs cpu_context; int cpu_domain; } ;
struct task_struct {int flags; int stack_canary; } ;
struct cpu_context_save {int dummy; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct task_struct*) ;
 struct pt_regs* FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (struct pt_regs*,int ,int) ;
 scalar_t__ VAR_4 ;
 struct pt_regs* FUNC_6 (struct task_struct*) ;
 struct thread_info* FUNC_7 (struct task_struct*) ;
 int FUNC_8 (int ,struct thread_info*) ;

int
FUNC_9(unsigned long VAR_5, unsigned long VAR_6,
     unsigned long VAR_7, struct task_struct *VAR_8)
{
 struct thread_info *VAR_9 = FUNC_7(VAR_8);
 struct pt_regs *VAR_10 = FUNC_6(VAR_8);

 FUNC_5(&VAR_9->cpu_context, 0, sizeof(struct cpu_context_save));
 if (FUNC_4(!(VAR_8->flags & VAR_1))) {
  *VAR_10 = *FUNC_1();
  VAR_10->ARM_r0 = 0;
  if (VAR_6)
   VAR_10->ARM_sp = VAR_6;
 } else {
  FUNC_5(VAR_10, 0, sizeof(struct pt_regs));
  VAR_9->cpu_context.r4 = VAR_7;
  VAR_9->cpu_context.r5 = VAR_6;
  VAR_10->ARM_cpsr = VAR_2;
 }
 VAR_9->cpu_context.pc = (unsigned long)VAR_4;
 VAR_9->cpu_context.sp = (unsigned long)VAR_10;

 FUNC_0(VAR_8);

 if (VAR_5 & VAR_0)
  VAR_9->tp_value[0] = VAR_10->ARM_r3;
 VAR_9->tp_value[1] = FUNC_3();

 FUNC_8(VAR_3, VAR_9);





 return 0;
}
