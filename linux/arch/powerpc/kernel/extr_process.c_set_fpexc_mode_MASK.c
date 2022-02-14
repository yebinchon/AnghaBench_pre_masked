
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int fpexc_mode; int spefscr_last; struct pt_regs* regs; } ;
struct task_struct {TYPE_1__ thread; } ;
struct pt_regs {int msr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 unsigned int FUNC_0 (unsigned int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

int FUNC_3(struct task_struct *VAR_9, unsigned int VAR_10)
{
 struct pt_regs *VAR_11 = VAR_9->thread.regs;





 if (VAR_10 & VAR_7) {
  return -VAR_1;

 }






 if (VAR_10 > VAR_6)
  return -VAR_1;
 VAR_9->thread.fpexc_mode = FUNC_0(VAR_10);
 if (VAR_11 != ((void*)0) && (VAR_11->msr & VAR_4) != 0)
  VAR_11->msr = (VAR_11->msr & ~(VAR_2|VAR_3))
   | VAR_9->thread.fpexc_mode;
 return 0;
}
