
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct omap_hwmod {int dummy; } ;
struct TYPE_3__ {int ptr; } ;
struct clockdomain {scalar_t__ usecount; int name; TYPE_1__ pwrdm; } ;
struct TYPE_4__ {int (* clkdm_clk_disable ) (struct clockdomain*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 TYPE_2__* VAR_2 ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct clockdomain*) ;

int FUNC_8(struct clockdomain *VAR_3, struct omap_hwmod *VAR_4)
{

 if (FUNC_1() || FUNC_2())
  return 0;






 if (!VAR_3 || !VAR_4 || !VAR_2 || !VAR_2->clkdm_clk_disable)
  return -VAR_0;

 FUNC_4(VAR_3->pwrdm.ptr);

 if (VAR_3->usecount == 0) {
  FUNC_6(VAR_3->pwrdm.ptr);
  FUNC_0(1);
  return -VAR_1;
 }

 VAR_3->usecount--;
 if (VAR_3->usecount > 0) {
  FUNC_6(VAR_3->pwrdm.ptr);
  return 0;
 }

 VAR_2->clkdm_clk_disable(VAR_3);
 FUNC_5(VAR_3->pwrdm.ptr);
 FUNC_6(VAR_3->pwrdm.ptr);

 FUNC_3("clockdomain: %s: disabled\n", VAR_3->name);

 return 0;
}
