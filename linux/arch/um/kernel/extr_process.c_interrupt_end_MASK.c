
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pt_regs {int dummy; } ;
struct TYPE_3__ {struct pt_regs regs; } ;
struct TYPE_4__ {TYPE_1__ thread; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 int FUNC_0 (struct pt_regs*) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct pt_regs*) ;

void FUNC_6(void)
{
 struct pt_regs *VAR_3 = &VAR_2->thread.regs;

 if (FUNC_1())
  FUNC_2();
 if (FUNC_4(VAR_1))
  FUNC_0(VAR_3);
 if (FUNC_3(VAR_0))
  FUNC_5(VAR_3);
}
