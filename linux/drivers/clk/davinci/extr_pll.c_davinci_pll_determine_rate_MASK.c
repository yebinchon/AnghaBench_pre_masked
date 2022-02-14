
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;
struct davinci_pll_clk {unsigned long pllm_min; unsigned long pllm_max; } ;
struct clk_rate_request {unsigned long best_parent_rate; unsigned long rate; unsigned long min_rate; unsigned long max_rate; struct clk_hw* best_parent_hw; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct clk_hw*) ;
 unsigned long FUNC_1 (struct clk_hw*,unsigned long) ;
 unsigned long FUNC_2 (unsigned long,unsigned long) ;
 struct davinci_pll_clk* FUNC_3 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_4(struct clk_hw *VAR_2,
          struct clk_rate_request *VAR_3)
{
 struct davinci_pll_clk *VAR_4 = FUNC_3(VAR_2);
 struct clk_hw *VAR_5 = VAR_3->best_parent_hw;
 unsigned long VAR_6 = VAR_3->best_parent_rate;
 unsigned long VAR_7 = VAR_3->rate;
 unsigned long VAR_8, VAR_9;
 u32 VAR_10;


 if (VAR_7 < VAR_3->min_rate)
  return -VAR_1;

 VAR_7 = FUNC_2(VAR_7, VAR_3->max_rate);
 VAR_10 = VAR_7 / VAR_6;
 VAR_8 = VAR_6 * VAR_10;


 if (!(FUNC_0(VAR_2) & VAR_0)) {
  if (VAR_8 < VAR_3->min_rate)
   return -VAR_1;

  if (VAR_10 < VAR_4->pllm_min || VAR_10 > VAR_4->pllm_max)
   return -VAR_1;

  VAR_3->rate = VAR_8;

  return 0;
 }


 VAR_8 = 0;

 for (VAR_10 = VAR_4->pllm_min; VAR_10 <= VAR_4->pllm_max; VAR_10++) {
  VAR_6 = FUNC_1(VAR_5, VAR_7 / VAR_10);
  VAR_9 = VAR_6 * VAR_10;
  if (VAR_9 < VAR_3->min_rate)
   continue;
  if (VAR_9 > VAR_7 || VAR_9 > VAR_3->max_rate)
   break;
  if (VAR_9 > VAR_8) {
   VAR_8 = VAR_9;
   VAR_3->rate = VAR_8;
   VAR_3->best_parent_rate = VAR_6;
   if (VAR_8 == VAR_7)
    break;
  }
 }

 return 0;
}
