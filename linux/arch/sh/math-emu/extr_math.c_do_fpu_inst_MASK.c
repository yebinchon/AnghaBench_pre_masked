
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* xstate; } ;
struct task_struct {TYPE_2__ thread; } ;
struct sh_fpu_soft_struct {int dummy; } ;
struct pt_regs {int dummy; } ;
struct TYPE_6__ {int status; } ;
struct TYPE_4__ {struct sh_fpu_soft_struct softfpu; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct task_struct* VAR_2 ;
 int FUNC_0 (unsigned short,struct sh_fpu_soft_struct*,struct pt_regs*) ;
 int FUNC_1 (struct sh_fpu_soft_struct*) ;
 int FUNC_2 (int ,int,struct pt_regs*,int ) ;
 TYPE_3__* FUNC_3 (struct task_struct*) ;

int FUNC_4(unsigned short VAR_3, struct pt_regs *VAR_4)
{
 struct task_struct *VAR_5 = VAR_2;
 struct sh_fpu_soft_struct *VAR_6 = &(VAR_5->thread.xstate->softfpu);

 FUNC_2(VAR_0, 1, VAR_4, 0);

 if (!(FUNC_3(VAR_5)->status & VAR_1)) {

  FUNC_1(VAR_6);
  FUNC_3(VAR_5)->status |= VAR_1;
 }

 return FUNC_0(VAR_3, VAR_6, VAR_4);
}
