
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long FUNC_0 (struct task_struct*,int ) ;
 int FUNC_1 (struct task_struct*,int ,unsigned long) ;
 int FUNC_2 (struct task_struct*,int ) ;

void FUNC_3(struct task_struct *VAR_4)
{
 unsigned long VAR_5 = FUNC_0(VAR_4, VAR_0) & ~VAR_3;
 FUNC_1(VAR_4, VAR_0, VAR_5 | VAR_1);
 FUNC_2(VAR_4, VAR_2);
}
