
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pt_regs {unsigned long compat_sp; unsigned long sp; unsigned long x19; unsigned long x20; unsigned long pc; int pmr_save; int pstate; scalar_t__* regs; } ;
struct TYPE_3__ {scalar_t__ tp_value; } ;
struct TYPE_4__ {struct pt_regs cpu_context; TYPE_1__ uw; } ;
struct task_struct {int flags; TYPE_2__ thread; } ;
struct cpu_context {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 (int ) ;
 struct pt_regs* FUNC_3 () ;
 int FUNC_4 (struct task_struct*) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (struct pt_regs*,int ,int) ;
 int FUNC_8 (struct task_struct*) ;
 int FUNC_9 (int ) ;
 scalar_t__ VAR_8 ;
 int FUNC_10 (struct pt_regs*) ;
 scalar_t__ FUNC_11 () ;
 struct pt_regs* FUNC_12 (struct task_struct*) ;
 int FUNC_13 (struct task_struct*) ;
 int * FUNC_14 (struct task_struct*) ;
 int VAR_9 ;

int FUNC_15(unsigned long VAR_10, unsigned long VAR_11,
  unsigned long VAR_12, struct task_struct *VAR_13)
{
 struct pt_regs *VAR_14 = FUNC_12(VAR_13);

 FUNC_7(&VAR_13->thread.cpu_context, 0, sizeof(struct cpu_context));
 FUNC_4(VAR_13);

 if (FUNC_6(!(VAR_13->flags & VAR_5))) {
  *VAR_14 = *FUNC_3();
  VAR_14->regs[0] = 0;





  *FUNC_14(VAR_13) = FUNC_9(VAR_9);

  if (VAR_11) {
   if (FUNC_5(FUNC_13(VAR_13)))
    VAR_14->compat_sp = VAR_11;
   else
    VAR_14->sp = VAR_11;
  }





  if (VAR_10 & VAR_2)
   VAR_13->thread.uw.tp_value = VAR_14->regs[3];
 } else {
  FUNC_7(VAR_14, 0, sizeof(struct pt_regs));
  VAR_14->pstate = VAR_6;
  if (FUNC_0(VAR_3) &&
      FUNC_2(VAR_0))
   VAR_14->pstate |= VAR_7;

  if (FUNC_1() == VAR_1)
   FUNC_10(VAR_14);

  if (FUNC_11())
   VAR_14->pmr_save = VAR_4;

  VAR_13->thread.cpu_context.x19 = VAR_11;
  VAR_13->thread.cpu_context.x20 = VAR_12;
 }
 VAR_13->thread.cpu_context.pc = (unsigned long)VAR_8;
 VAR_13->thread.cpu_context.sp = (unsigned long)VAR_14;

 FUNC_8(VAR_13);

 return 0;
}
