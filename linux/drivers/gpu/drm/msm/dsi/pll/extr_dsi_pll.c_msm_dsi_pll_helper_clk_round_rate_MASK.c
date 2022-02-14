
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_dsi_pll {unsigned long min_rate; unsigned long max_rate; } ;
struct clk_hw {int dummy; } ;


 struct msm_dsi_pll* FUNC_0 (struct clk_hw*) ;

long FUNC_1(struct clk_hw *VAR_0,
  unsigned long VAR_1, unsigned long *VAR_2)
{
 struct msm_dsi_pll *VAR_3 = FUNC_0(VAR_0);

 if (VAR_1 < VAR_3->min_rate)
  return VAR_3->min_rate;
 else if (VAR_1 > VAR_3->max_rate)
  return VAR_3->max_rate;
 else
  return VAR_1;
}
