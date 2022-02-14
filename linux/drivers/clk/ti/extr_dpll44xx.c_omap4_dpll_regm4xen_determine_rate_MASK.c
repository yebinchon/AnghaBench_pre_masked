
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dpll_data {int modes; int clk_ref; int clk_bypass; } ;
struct clk_rate_request {scalar_t__ rate; scalar_t__ best_parent_rate; int best_parent_hw; } ;
struct clk_hw_omap {struct dpll_data* dpll_data; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct clk_hw*,scalar_t__,scalar_t__*) ;
 struct clk_hw_omap* FUNC_2 (struct clk_hw*) ;

int FUNC_3(struct clk_hw *VAR_2,
           struct clk_rate_request *VAR_3)
{
 struct clk_hw_omap *VAR_4 = FUNC_2(VAR_2);
 struct dpll_data *VAR_5;

 if (!VAR_3->rate)
  return -VAR_1;

 VAR_5 = VAR_4->dpll_data;
 if (!VAR_5)
  return -VAR_1;

 if (FUNC_0(VAR_5->clk_bypass) == VAR_3->rate &&
     (VAR_5->modes & (1 << VAR_0))) {
  VAR_3->best_parent_hw = VAR_5->clk_bypass;
 } else {
  VAR_3->rate = FUNC_1(VAR_2, VAR_3->rate,
      &VAR_3->best_parent_rate);
  VAR_3->best_parent_hw = VAR_5->clk_ref;
 }

 VAR_3->best_parent_rate = VAR_3->rate;

 return 0;
}
