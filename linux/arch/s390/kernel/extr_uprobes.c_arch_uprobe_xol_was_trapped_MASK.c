
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct pt_regs {scalar_t__ int_code; } ;


 scalar_t__ VAR_0 ;
 struct pt_regs* FUNC_0 (struct task_struct*) ;

bool FUNC_1(struct task_struct *VAR_1)
{
 struct pt_regs *VAR_2 = FUNC_0(VAR_1);

 if (VAR_2->int_code != VAR_0)
  return 1;
 return 0;
}
