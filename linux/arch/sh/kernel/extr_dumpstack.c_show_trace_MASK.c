
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct pt_regs {int dummy; } ;


 struct task_struct* VAR_0 ;
 int FUNC_0 (struct task_struct*) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct task_struct*,struct pt_regs*,unsigned long*,int *,char*) ;
 scalar_t__ FUNC_3 (struct pt_regs*) ;

void FUNC_4(struct task_struct *VAR_2, unsigned long *VAR_3,
  struct pt_regs *VAR_4)
{
 if (VAR_4 && FUNC_3(VAR_4))
  return;

 FUNC_1("\nCall trace:\n");

 FUNC_2(VAR_2, VAR_4, VAR_3, &VAR_1, "");

 FUNC_1("\n");

 if (!VAR_2)
  VAR_2 = VAR_0;

 FUNC_0(VAR_2);
}
