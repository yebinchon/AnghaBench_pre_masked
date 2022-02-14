
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {unsigned long sp; unsigned long pc; unsigned long r4; unsigned long r5; unsigned long UCreg_sp; int UCreg_03; int UCreg_16; scalar_t__ UCreg_00; } ;
struct thread_info {struct pt_regs cpu_context; } ;
struct task_struct {int flags; } ;
struct cpu_context_save {int dummy; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 struct pt_regs* FUNC_0 () ;
 int FUNC_1 (struct pt_regs*,int ,int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct pt_regs* FUNC_2 (struct task_struct*) ;
 struct thread_info* FUNC_3 (struct task_struct*) ;
 scalar_t__ FUNC_4 (int) ;

int
FUNC_5(unsigned long VAR_4, unsigned long VAR_5,
     unsigned long VAR_6, struct task_struct *VAR_7)
{
 struct thread_info *VAR_8 = FUNC_3(VAR_7);
 struct pt_regs *VAR_9 = FUNC_2(VAR_7);

 FUNC_1(&VAR_8->cpu_context, 0, sizeof(struct cpu_context_save));
 VAR_8->cpu_context.sp = (unsigned long)VAR_9;
 if (FUNC_4(VAR_7->flags & VAR_1)) {
  VAR_8->cpu_context.pc = (unsigned long)VAR_3;
  VAR_8->cpu_context.r4 = VAR_5;
  VAR_8->cpu_context.r5 = VAR_6;
  FUNC_1(VAR_9, 0, sizeof(struct pt_regs));
 } else {
  VAR_8->cpu_context.pc = (unsigned long)VAR_2;
  *VAR_9 = *FUNC_0();
  VAR_9->UCreg_00 = 0;
  if (VAR_5)
   VAR_9->UCreg_sp = VAR_5;

  if (VAR_4 & VAR_0)
   VAR_9->UCreg_16 = VAR_9->UCreg_03;
 }
 return 0;
}
