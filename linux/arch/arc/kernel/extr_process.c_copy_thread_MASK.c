
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned long ksp; } ;
struct task_struct {unsigned long flags; TYPE_1__ thread; } ;
struct pt_regs {unsigned long sp; int user_r25; int r3; scalar_t__ r0; } ;
struct callee_regs {unsigned long r13; unsigned long r14; int r25; } ;
struct TYPE_4__ {int thr_ptr; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 struct task_struct* VAR_2 ;
 struct pt_regs* FUNC_0 () ;
 int FUNC_1 (struct pt_regs*,int ,int) ;
 scalar_t__ VAR_3 ;
 struct pt_regs* FUNC_2 (struct task_struct*) ;
 TYPE_2__* FUNC_3 (struct task_struct*) ;
 scalar_t__ FUNC_4 (unsigned long) ;

int FUNC_5(unsigned long VAR_4,
  unsigned long VAR_5, unsigned long VAR_6,
  struct task_struct *VAR_7)
{
 struct pt_regs *VAR_8;
 unsigned long *VAR_9;
 struct callee_regs *VAR_10;
 struct callee_regs *VAR_11;
 struct pt_regs *VAR_12 = FUNC_0();


 VAR_8 = FUNC_2(VAR_7);
 VAR_9 = (unsigned long *)VAR_8 - 2;
 VAR_10 = ((struct callee_regs *)VAR_9) - 1;
 VAR_7->thread.ksp = (unsigned long)VAR_10;


 VAR_9[0] = 0;
 VAR_9[1] = (unsigned long)VAR_3;

 if (FUNC_4(VAR_7->flags & VAR_1)) {
  FUNC_1(VAR_8, 0, sizeof(struct pt_regs));

  VAR_10->r13 = VAR_6;
  VAR_10->r14 = VAR_5;

  return 0;
 }




 VAR_9[0] = 0;
 VAR_9[1] = (unsigned long)VAR_3;


 *VAR_8 = *VAR_12;

 if (VAR_5)
  VAR_8->sp = VAR_5;

 VAR_8->r0 = 0;

 VAR_11 = ((struct callee_regs *)VAR_12) - 1;
 *VAR_10 = *VAR_11;

 if (FUNC_4(VAR_4 & VAR_0)) {




  FUNC_3(VAR_7)->thr_ptr = VAR_12->r3;
 } else {

  FUNC_3(VAR_7)->thr_ptr =
  FUNC_3(VAR_2)->thr_ptr;
 }
 VAR_10->r25 = FUNC_3(VAR_7)->thr_ptr;
 return 0;
}
