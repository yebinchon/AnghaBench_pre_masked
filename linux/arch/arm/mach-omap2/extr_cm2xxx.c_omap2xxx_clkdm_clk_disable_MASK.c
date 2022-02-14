
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* ptr; } ;
struct clockdomain {int flags; int clktrctrl_mask; TYPE_2__ pwrdm; } ;
struct TYPE_3__ {int prcm_offs; } ;


 int VAR_0 ;
 int FUNC_0 (struct clockdomain*) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct clockdomain *VAR_1)
{
 bool VAR_2 = 0;

 if (!VAR_1->clktrctrl_mask)
  return 0;

 VAR_2 = FUNC_1(VAR_1->pwrdm.ptr->prcm_offs,
           VAR_1->clktrctrl_mask);

 if (!VAR_2 && VAR_1->flags & VAR_0)
  FUNC_0(VAR_1);

 return 0;
}
