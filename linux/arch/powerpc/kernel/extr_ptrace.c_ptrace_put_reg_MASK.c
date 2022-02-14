
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * regs; } ;
struct task_struct {TYPE_1__ thread; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (struct task_struct*,unsigned long) ;
 int FUNC_2 (struct task_struct*,unsigned long) ;
 int FUNC_3 (struct task_struct*,unsigned long) ;

int FUNC_4(struct task_struct *VAR_5, int VAR_6, unsigned long VAR_7)
{
 if (VAR_5->thread.regs == ((void*)0))
  return -VAR_0;

 if (VAR_6 == VAR_3)
  return FUNC_2(VAR_5, VAR_7);
 if (VAR_6 == VAR_4)
  return FUNC_3(VAR_5, VAR_7);
 if (VAR_6 == VAR_1)
  return FUNC_1(VAR_5, VAR_7);

 if (VAR_6 <= VAR_2) {
  VAR_6 = FUNC_0(VAR_6, VAR_2 + 1);
  ((unsigned long *)VAR_5->thread.regs)[VAR_6] = VAR_7;
  return 0;
 }
 return -VAR_0;
}
