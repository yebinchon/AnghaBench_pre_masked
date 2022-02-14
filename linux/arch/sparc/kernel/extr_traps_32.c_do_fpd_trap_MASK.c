
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fsr; int * float_regs; int fpqdepth; int * fpqueue; } ;
struct task_struct {TYPE_1__ thread; } ;
struct pt_regs {int psr; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 struct task_struct* VAR_3 ;
 int FUNC_0 (char*,struct pt_regs*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *,int *,int *) ;
 int FUNC_3 () ;
 int * VAR_4 ;
 int VAR_5 ;
 struct task_struct* VAR_6 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 () ;

void FUNC_8(struct pt_regs *VAR_7, unsigned long VAR_8, unsigned long VAR_9,
   unsigned long VAR_10)
{

 if(VAR_10 & VAR_1)
  FUNC_0("Kernel gets FloatingPenguinUnit disabled trap", VAR_7);

 FUNC_4(FUNC_3() | VAR_0);
 VAR_7->psr |= VAR_0;

 if(VAR_6 == VAR_3)
  return;
 if(VAR_6) {

  struct task_struct *VAR_11 = VAR_6;
  FUNC_2(&VAR_11->thread.float_regs[0], &VAR_11->thread.fsr,
         &VAR_11->thread.fpqueue[0], &VAR_11->thread.fpqdepth);
 }
 VAR_6 = VAR_3;
 if(FUNC_7()) {
  FUNC_1(&VAR_3->thread.float_regs[0], &VAR_3->thread.fsr);
 } else {

  FUNC_1(&VAR_4[0], &VAR_5);
  FUNC_6();
 }
}
