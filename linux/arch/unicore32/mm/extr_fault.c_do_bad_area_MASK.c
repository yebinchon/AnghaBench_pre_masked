
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {struct mm_struct* active_mm; } ;
struct pt_regs {int dummy; } ;
struct mm_struct {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mm_struct*,unsigned long,unsigned int,struct pt_regs*) ;
 int FUNC_1 (unsigned long,unsigned int,int ,int ,struct pt_regs*) ;
 struct task_struct* VAR_2 ;
 scalar_t__ FUNC_2 (struct pt_regs*) ;

void FUNC_3(unsigned long VAR_3, unsigned int VAR_4, struct pt_regs *VAR_5)
{
 struct task_struct *VAR_6 = VAR_2;
 struct mm_struct *VAR_7 = VAR_6->active_mm;





 if (FUNC_2(VAR_5))
  FUNC_1(VAR_3, VAR_4, VAR_1, VAR_0, VAR_5);
 else
  FUNC_0(VAR_7, VAR_3, VAR_4, VAR_5);
}
