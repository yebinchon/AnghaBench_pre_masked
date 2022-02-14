
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_dsi {int escape_clk_div; } ;



int FUNC_0(const struct intel_dsi *VAR_0)
{
 switch (VAR_0->escape_clk_div) {
 default:
 case 0:
  return 50;
 case 1:
  return 100;
 case 2:
  return 200;
 }
}
