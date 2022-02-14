
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;


 int FUNC_0 (unsigned long*) ;
 scalar_t__ FUNC_1 (struct task_struct*) ;

void FUNC_2(struct task_struct *VAR_0, unsigned long *VAR_1)
{
 if (!VAR_1) {
  if (VAR_0)
   VAR_1 = (unsigned long *)FUNC_1(VAR_0);
  else



   VAR_1 = (unsigned long *)&VAR_1;

 }

 FUNC_0(VAR_1);
}
