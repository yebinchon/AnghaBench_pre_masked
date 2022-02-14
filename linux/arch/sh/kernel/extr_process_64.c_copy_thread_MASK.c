
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long sp; unsigned long pc; struct pt_regs* uregs; } ;
struct task_struct {int flags; TYPE_1__ thread; } ;
struct pt_regs {int sr; unsigned long* regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int * VAR_3 ;
 struct pt_regs* FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int * VAR_4 ;
 int FUNC_3 (struct pt_regs*,int ,int) ;
 unsigned long FUNC_4 (unsigned long) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (struct task_struct*) ;
 scalar_t__ FUNC_7 (int) ;

int FUNC_8(unsigned long VAR_7, unsigned long VAR_8,
  unsigned long VAR_9, struct task_struct *VAR_10)
{
 struct pt_regs *VAR_11;
 VAR_11 = (struct pt_regs *)(VAR_2 + FUNC_6(VAR_10)) - 1;
 VAR_10->thread.sp = (unsigned long) VAR_11;

 if (FUNC_7(VAR_10->flags & VAR_0)) {
  FUNC_3(VAR_11, 0, sizeof(struct pt_regs));
  VAR_11->regs[2] = (unsigned long)VAR_9;
  VAR_11->regs[3] = (unsigned long)VAR_8;
  VAR_11->sr = (1 << 30);
  VAR_11->sr |= VAR_1;
  VAR_10->thread.pc = (unsigned long) VAR_6;
  return 0;
 }
 *VAR_11 = *FUNC_0();







 if (VAR_8)
  VAR_11->regs[15] = FUNC_4(VAR_8);
 VAR_10->thread.uregs = VAR_11;

 VAR_11->regs[9] = 0;
 VAR_11->sr |= VAR_1;

 VAR_10->thread.pc = (unsigned long) VAR_5;

 return 0;
}
