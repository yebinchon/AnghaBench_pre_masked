
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct pt_regs {unsigned long flags; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (struct task_struct*,int ) ;
 struct pt_regs* FUNC_1 (struct task_struct*) ;
 scalar_t__ FUNC_2 (struct task_struct*,int ) ;

__attribute__((used)) static int FUNC_3(struct task_struct *VAR_3, unsigned long VAR_4)
{
 struct pt_regs *VAR_5 = FUNC_1(VAR_3);






 if (VAR_4 & VAR_2)
  FUNC_0(VAR_3, VAR_1);
 else if (FUNC_2(VAR_3, VAR_1))
  VAR_4 |= VAR_2;

 VAR_5->flags = (VAR_5->flags & ~VAR_0) | (VAR_4 & VAR_0);

 return 0;
}
