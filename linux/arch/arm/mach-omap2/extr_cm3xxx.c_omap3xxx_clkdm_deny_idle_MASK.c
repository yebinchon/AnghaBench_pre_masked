
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* ptr; } ;
struct clockdomain {scalar_t__ usecount; int clktrctrl_mask; TYPE_2__ pwrdm; } ;
struct TYPE_3__ {int prcm_offs; } ;


 int FUNC_0 (struct clockdomain*) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct clockdomain *VAR_0)
{
 FUNC_1(VAR_0->pwrdm.ptr->prcm_offs,
     VAR_0->clktrctrl_mask);

 if (VAR_0->usecount > 0)
  FUNC_0(VAR_0);
}
