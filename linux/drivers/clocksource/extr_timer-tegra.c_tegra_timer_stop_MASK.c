
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int irq; int (* set_state_shutdown ) (TYPE_1__*) ;} ;
struct timer_of {TYPE_1__ clkevt; } ;


 int FUNC_0 (int ) ;
 struct timer_of* FUNC_1 (int *,unsigned int) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_3(unsigned int VAR_1)
{
 struct timer_of *VAR_2 = FUNC_1(&VAR_0, VAR_1);

 VAR_2->clkevt.set_state_shutdown(&VAR_2->clkevt);
 FUNC_0(VAR_2->clkevt.irq);

 return 0;
}
