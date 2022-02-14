
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pt_regs {int dummy; } ;
struct TYPE_4__ {int spurious_irqs; } ;
struct TYPE_3__ {unsigned int (* get_irq ) () ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 TYPE_2__ VAR_0 ;
 int FUNC_5 () ;
 TYPE_1__ VAR_1 ;
 unsigned int FUNC_6 () ;
 int FUNC_7 (struct pt_regs*) ;
 int FUNC_8 (struct pt_regs*) ;
 scalar_t__ FUNC_9 (int) ;

void FUNC_10(struct pt_regs *VAR_2)
{
 unsigned int VAR_3;

 FUNC_3();

 FUNC_7(VAR_2);

 FUNC_1();






 VAR_3 = VAR_1.get_irq();


 FUNC_5();


 if (FUNC_9(!VAR_3))
  FUNC_0(VAR_0.spurious_irqs);
 else
  FUNC_2(VAR_3);

 FUNC_8(VAR_2);

 FUNC_4();
}
