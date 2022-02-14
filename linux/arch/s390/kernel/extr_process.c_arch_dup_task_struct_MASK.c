
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int fprs; int regs; } ;
struct TYPE_4__ {TYPE_1__ fpu; } ;
struct task_struct {TYPE_2__ thread; } ;


 int VAR_0 ;
 int FUNC_0 (struct task_struct*,struct task_struct*,int ) ;
 int FUNC_1 () ;

int FUNC_2(struct task_struct *VAR_1, struct task_struct *VAR_2)
{





 FUNC_1();

 FUNC_0(VAR_1, VAR_2, VAR_0);
 VAR_1->thread.fpu.regs = VAR_1->thread.fpu.fprs;
 return 0;
}
