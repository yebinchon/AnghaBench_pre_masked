
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread_info {int addr_limit; int status; } ;
struct TYPE_2__ {unsigned long sp; unsigned long pc; scalar_t__ fpu_counter; struct pt_regs* ptrace_bps; int dsp_status; } ;
struct task_struct {int flags; TYPE_1__ thread; } ;
struct pt_regs {unsigned long* regs; unsigned long gbr; int sr; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct task_struct* VAR_7 ;
 struct pt_regs* FUNC_0 () ;
 scalar_t__ FUNC_1 (struct task_struct*) ;
 int FUNC_2 (struct pt_regs*,int ,int) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 struct pt_regs* FUNC_3 (struct task_struct*) ;
 struct thread_info* FUNC_4 (struct task_struct*) ;
 scalar_t__ FUNC_5 (int) ;

int FUNC_6(unsigned long VAR_10, unsigned long VAR_11,
  unsigned long VAR_12, struct task_struct *VAR_13)
{
 struct thread_info *VAR_14 = FUNC_4(VAR_13);
 struct pt_regs *VAR_15;
 FUNC_2(VAR_13->thread.ptrace_bps, 0, sizeof(VAR_13->thread.ptrace_bps));

 VAR_15 = FUNC_3(VAR_13);
 VAR_13->thread.sp = (unsigned long) VAR_15;
 if (FUNC_5(VAR_13->flags & VAR_2)) {
  FUNC_2(VAR_15, 0, sizeof(struct pt_regs));
  VAR_13->thread.pc = (unsigned long) VAR_9;
  VAR_15->regs[4] = VAR_12;
  VAR_15->regs[5] = VAR_11;
  VAR_15->sr = VAR_4;



  VAR_14->addr_limit = VAR_1;
  VAR_14->status &= ~VAR_5;
  VAR_13->thread.fpu_counter = 0;
  return 0;
 }
 *VAR_15 = *FUNC_0();

 if (VAR_11)
  VAR_15->regs[15] = VAR_11;
 VAR_14->addr_limit = VAR_6;

 if (VAR_10 & VAR_0)
  VAR_15->gbr = VAR_15->regs[0];

 VAR_15->regs[0] = 0;
 VAR_13->thread.pc = (unsigned long) VAR_8;
 return 0;
}
