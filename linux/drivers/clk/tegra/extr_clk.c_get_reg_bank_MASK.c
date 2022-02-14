
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_clk_periph_regs {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 struct tegra_clk_periph_regs const* VAR_1 ;

const struct tegra_clk_periph_regs *FUNC_1(int VAR_2)
{
 int VAR_3 = VAR_2 / 32;

 if (VAR_3 < VAR_0)
  return &VAR_1[VAR_3];
 else {
  FUNC_0(1);
  return ((void*)0);
 }
}
