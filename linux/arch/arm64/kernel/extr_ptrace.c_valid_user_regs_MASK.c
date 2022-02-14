
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct user_pt_regs {int pstate; } ;
struct task_struct {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct task_struct*) ;
 int FUNC_2 (struct task_struct*,int ) ;
 int FUNC_3 (struct user_pt_regs*) ;
 int FUNC_4 (struct user_pt_regs*) ;

int FUNC_5(struct user_pt_regs *VAR_2, struct task_struct *VAR_3)
{
 if (!FUNC_2(VAR_3, VAR_1))
  VAR_2->pstate &= ~VAR_0;

 if (FUNC_0(FUNC_1(VAR_3)))
  return FUNC_3(VAR_2);
 else
  return FUNC_4(VAR_2);
}
