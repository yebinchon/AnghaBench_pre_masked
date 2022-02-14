
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct task_struct*,int ) ;
 struct task_struct* VAR_2 ;
 unsigned long FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (struct task_struct*,int ) ;
 int FUNC_5 (unsigned long) ;

void FUNC_6(struct task_struct *VAR_3, bool VAR_4)
{
 unsigned long VAR_5;
 FUNC_2();
 VAR_5 = FUNC_1();
 if (VAR_4) {
  VAR_5 |= VAR_0;
  FUNC_4(VAR_3, VAR_1);
 } else {
  VAR_5 &= ~VAR_0;
  FUNC_0(VAR_3, VAR_1);
 }
 if (VAR_3 == VAR_2)
  FUNC_5(VAR_5);
 FUNC_3();
}
