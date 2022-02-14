
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct pt_regs {unsigned long flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (struct task_struct*,int ) ;
 scalar_t__ FUNC_1 (struct task_struct*,struct pt_regs*) ;
 int FUNC_2 (struct task_struct*,int ) ;
 struct pt_regs* FUNC_3 (struct task_struct*) ;
 int FUNC_4 (struct task_struct*,int ) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct task_struct *VAR_3)
{
 struct pt_regs *VAR_4 = FUNC_3(VAR_3);
 unsigned long VAR_5;
 if (FUNC_5(FUNC_4(VAR_3, VAR_1)))
  VAR_4->flags |= VAR_2;






 FUNC_2(VAR_3, VAR_1);

 VAR_5 = VAR_4->flags;


 VAR_4->flags |= VAR_2;
 if (FUNC_1(VAR_3, VAR_4)) {
  FUNC_0(VAR_3, VAR_0);
  return 0;
 }





 if (VAR_5 & VAR_2)
  return FUNC_4(VAR_3, VAR_0);

 FUNC_2(VAR_3, VAR_0);

 return 1;
}
