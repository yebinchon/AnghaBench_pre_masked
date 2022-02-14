
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int flags; } ;
struct pt_regs {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 (struct pt_regs*) ;
 int FUNC_2 (struct pt_regs*) ;
 int FUNC_3 (struct pt_regs*) ;
 struct pt_regs* FUNC_4 (struct task_struct*) ;
 scalar_t__ FUNC_5 (struct task_struct*,int ) ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ FUNC_7 (struct pt_regs*) ;

__attribute__((used)) static void FUNC_8(struct task_struct *VAR_3)
{
 struct pt_regs *VAR_4 = FUNC_4(VAR_3);





 if (FUNC_6(VAR_3->flags & VAR_1))
  return;


 if ((FUNC_0() == VAR_0) ||
     FUNC_5(VAR_3, VAR_2))
  return;

 if (FUNC_1(VAR_4))
  FUNC_2(VAR_4);
 else if (FUNC_7(VAR_4))
  FUNC_3(VAR_4);
}
