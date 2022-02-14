
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int pm_ctrl; int mask; } ;
struct TYPE_3__ {int pm_ctrl; int irq_enable; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;
 TYPE_1__ VAR_3 ;

void FUNC_1(void)
{
 FUNC_0(VAR_3.irq_enable,
     VAR_1,
     VAR_2.mask);

 FUNC_0(VAR_3.pm_ctrl,
     VAR_0,
     VAR_2.pm_ctrl);
}
