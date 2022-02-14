
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tegra_clk_pll_freq_table {long output_rate; } ;
struct tegra_clk_pll {TYPE_1__* params; } ;
struct clk_hw {int dummy; } ;
struct TYPE_2__ {int flags; long fixed_rate; scalar_t__ (* calc_rate ) (struct clk_hw*,struct tegra_clk_pll_freq_table*,unsigned long,unsigned long) ;} ;


 long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct clk_hw*,struct tegra_clk_pll_freq_table*,unsigned long,unsigned long) ;
 long FUNC_1 (struct clk_hw*) ;
 scalar_t__ FUNC_2 (struct clk_hw*,struct tegra_clk_pll_freq_table*,unsigned long,unsigned long) ;
 struct tegra_clk_pll* FUNC_3 (struct clk_hw*) ;

__attribute__((used)) static long FUNC_4(struct clk_hw *VAR_4, unsigned long VAR_5,
   unsigned long *VAR_6)
{
 struct tegra_clk_pll *VAR_7 = FUNC_3(VAR_4);
 struct tegra_clk_pll_freq_table VAR_8;

 if (VAR_7->params->flags & VAR_3) {

  if (VAR_7->params->flags & (VAR_1 | VAR_2))
   return FUNC_1(VAR_4);
  return VAR_7->params->fixed_rate;
 }

 if (FUNC_0(VAR_4, &VAR_8, VAR_5, *VAR_6) &&
     VAR_7->params->calc_rate(VAR_4, &VAR_8, VAR_5, *VAR_6))
  return -VAR_0;

 return VAR_8.output_rate;
}
