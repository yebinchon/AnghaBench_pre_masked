
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long ksp; struct pt_regs* kregs; } ;
struct task_struct {int flags; TYPE_1__ thread; } ;
struct switch_stack {unsigned long r16; unsigned long r17; unsigned long ra; int r23; } ;
struct pt_regs {unsigned long sp; int r8; scalar_t__ r7; scalar_t__ r2; int estatus; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct pt_regs* FUNC_0 () ;
 int FUNC_1 (struct switch_stack*,int ,int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 struct pt_regs* FUNC_2 (struct task_struct*) ;
 scalar_t__ FUNC_3 (int) ;

int FUNC_4(unsigned long VAR_5,
  unsigned long VAR_6, unsigned long VAR_7, struct task_struct *VAR_8)
{
 struct pt_regs *VAR_9 = FUNC_2(VAR_8);
 struct pt_regs *VAR_10;
 struct switch_stack *VAR_11;
 struct switch_stack *VAR_12 =
  ((struct switch_stack *)VAR_9) - 1;

 if (FUNC_3(VAR_8->flags & VAR_1)) {
  FUNC_1(VAR_12, 0,
   sizeof(struct switch_stack) + sizeof(struct pt_regs));

  VAR_12->r16 = VAR_6;
  VAR_12->r17 = VAR_7;
  VAR_12->ra = (unsigned long) VAR_4;
  VAR_9->estatus = VAR_2;
  VAR_9->sp = (unsigned long) VAR_12;

  VAR_8->thread.ksp = (unsigned long) VAR_12;
  VAR_8->thread.kregs = VAR_9;
  return 0;
 }

 VAR_10 = FUNC_0();
 *VAR_9 = *VAR_10;
 VAR_9->r2 = 0;
 VAR_9->r7 = 0;

 VAR_11 = ((struct switch_stack *) VAR_10) - 1;
 *VAR_12 = *VAR_11;
 VAR_12->ra = (unsigned long)VAR_3;
 VAR_8->thread.kregs = VAR_9;
 VAR_8->thread.ksp = (unsigned long) VAR_12;

 if (VAR_6)
  VAR_9->sp = VAR_6;


 if (VAR_5 & VAR_0)
  VAR_12->r23 = VAR_10->r8;

 return 0;
}
