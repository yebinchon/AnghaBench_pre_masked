
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct pt_regs {unsigned long r00; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned long*,int ,int ) ;
 struct pt_regs* FUNC_1 (struct task_struct*) ;

void FUNC_2(unsigned long *VAR_1,
     struct task_struct *VAR_2)
{
 struct pt_regs *VAR_3;

 if (VAR_2 == ((void*)0))
  return;


 FUNC_0(VAR_1, 0, VAR_0);


 VAR_3 = FUNC_1(VAR_2);
 VAR_1[0] = VAR_3->r00;
}
