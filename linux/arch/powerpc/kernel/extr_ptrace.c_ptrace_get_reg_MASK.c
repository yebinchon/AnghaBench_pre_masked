
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct user_pt_regs {int dummy; } ;
struct TYPE_2__ {int * regs; } ;
struct task_struct {TYPE_1__ thread; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,unsigned int) ;
 int FUNC_1 (struct task_struct*,unsigned long*) ;
 unsigned long FUNC_2 (struct task_struct*) ;

int FUNC_3(struct task_struct *VAR_4, int VAR_5, unsigned long *VAR_6)
{
 unsigned int VAR_7;

 if ((VAR_4->thread.regs == ((void*)0)) || !VAR_6)
  return -VAR_0;

 if (VAR_5 == VAR_2) {
  *VAR_6 = FUNC_2(VAR_4);
  return 0;
 }

 if (VAR_5 == VAR_1)
  return FUNC_1(VAR_4, VAR_6);
 VAR_7 = sizeof(struct user_pt_regs) / sizeof(unsigned long);
 if (VAR_5 < VAR_7) {
  VAR_5 = FUNC_0(VAR_5, VAR_7);
  *VAR_6 = ((unsigned long *)VAR_4->thread.regs)[VAR_5];
  return 0;
 }

 return -VAR_0;
}
