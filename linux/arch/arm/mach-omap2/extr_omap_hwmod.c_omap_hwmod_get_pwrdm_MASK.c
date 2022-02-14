
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct powerdomain {int dummy; } ;
struct omap_hwmod_ocp_if {struct clk* _clk; } ;
struct omap_hwmod {struct clk* _clk; TYPE_3__* clkdm; } ;
struct TYPE_4__ {struct powerdomain* ptr; } ;
struct clockdomain {TYPE_1__ pwrdm; } ;
struct clk_hw_omap {struct clockdomain* clkdm; } ;
struct clk {int dummy; } ;
struct TYPE_5__ {struct powerdomain* ptr; } ;
struct TYPE_6__ {TYPE_2__ pwrdm; } ;


 int FUNC_0 (struct clk*) ;
 struct omap_hwmod_ocp_if* FUNC_1 (struct omap_hwmod*) ;
 struct clk_hw_omap* FUNC_2 (int ) ;

struct powerdomain *FUNC_3(struct omap_hwmod *VAR_0)
{
 struct clk *VAR_1;
 struct omap_hwmod_ocp_if *VAR_2;
 struct clockdomain *VAR_3;
 struct clk_hw_omap *VAR_4;

 if (!VAR_0)
  return ((void*)0);

 if (VAR_0->clkdm)
  return VAR_0->clkdm->pwrdm.ptr;

 if (VAR_0->_clk) {
  VAR_1 = VAR_0->_clk;
 } else {
  VAR_2 = FUNC_1(VAR_0);
  if (!VAR_2)
   return ((void*)0);
  VAR_1 = VAR_2->_clk;
 }

 VAR_4 = FUNC_2(FUNC_0(VAR_1));
 VAR_3 = VAR_4->clkdm;
 if (!VAR_3)
  return ((void*)0);

 return VAR_3->pwrdm.ptr;
}
