
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* regs; } ;
struct task_struct {TYPE_2__ thread; } ;
struct TYPE_3__ {unsigned long msr; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct task_struct*) ;
 int FUNC_2 (struct task_struct*) ;
 int FUNC_3 (struct task_struct*) ;
 int FUNC_4 (struct task_struct*) ;
 unsigned long VAR_4 ;
 int FUNC_5 (unsigned long) ;
 int FUNC_6 (unsigned long) ;

void FUNC_7(struct task_struct *VAR_5)
{
 unsigned long VAR_6;

 if (!VAR_5->thread.regs)
  return;

 FUNC_4(VAR_5);

 VAR_6 = VAR_5->thread.regs->msr;

 if ((VAR_6 & VAR_4) == 0)
  return;

 FUNC_6(VAR_4);

 FUNC_0((VAR_6 & VAR_3) && !((VAR_6 & VAR_0) && (VAR_6 & VAR_2)));
 FUNC_5(VAR_4);
}
