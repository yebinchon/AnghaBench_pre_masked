
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_hwmod {scalar_t__ _clk; struct clockdomain* clkdm; } ;
struct clockdomain {int dummy; } ;
struct clk_hw_omap {struct clockdomain* clkdm; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 struct clk_hw_omap* FUNC_2 (int ) ;

__attribute__((used)) static struct clockdomain *FUNC_3(struct omap_hwmod *VAR_0)
{
 struct clk_hw_omap *VAR_1;

 if (VAR_0->clkdm) {
  return VAR_0->clkdm;
 } else if (VAR_0->_clk) {
  if (!FUNC_1(FUNC_0(VAR_0->_clk)))
   return ((void*)0);
  VAR_1 = FUNC_2(FUNC_0(VAR_0->_clk));
  return VAR_1->clkdm;
 }
 return ((void*)0);
}
