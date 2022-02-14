
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct pt_regs* uregs; } ;
struct task_struct {TYPE_1__ thread; } ;
struct pt_regs {int sr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct task_struct*,int ) ;

void FUNC_1(struct task_struct *VAR_2)
{
 struct pt_regs *VAR_3 = VAR_2->thread.uregs;

 VAR_3->sr &= ~VAR_0;

 FUNC_0(VAR_2, VAR_1);
}
