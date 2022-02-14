
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct pt_regs {int ipsw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct task_struct*,int ) ;
 struct pt_regs* FUNC_1 (struct task_struct*) ;

void FUNC_2(struct task_struct *VAR_2)
{
 struct pt_regs *VAR_3;
 VAR_3 = FUNC_1(VAR_2);
 VAR_3->ipsw &= ~VAR_0;
 FUNC_0(VAR_2, VAR_1);
}
