
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct clk_pll_data {int pllm_lower_mask; int pllm_upper_mask; int pllm_upper_shift; int plld_mask; int clkod_mask; int clkod_shift; int postdiv; scalar_t__ pllod; scalar_t__ has_pllctrl; scalar_t__ pll_ctl0; scalar_t__ pllm; } ;
struct clk_pll {struct clk_pll_data* pll_data; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (scalar_t__) ;
 struct clk_pll* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_2(struct clk_hw *VAR_0,
     unsigned long VAR_1)
{
 struct clk_pll *VAR_2 = FUNC_1(VAR_0);
 struct clk_pll_data *VAR_3 = VAR_2->pll_data;
 unsigned long VAR_4 = VAR_1;
 u32 VAR_5 = 0, VAR_6, VAR_7, VAR_8;





 if (VAR_3->has_pllctrl) {
  VAR_8 = FUNC_0(VAR_3->pllm);
  VAR_5 = (VAR_8 & VAR_3->pllm_lower_mask);
 }


 VAR_8 = FUNC_0(VAR_3->pll_ctl0);
 VAR_5 |= ((VAR_8 & VAR_3->pllm_upper_mask)
   >> VAR_3->pllm_upper_shift);
 VAR_6 = (VAR_8 & VAR_3->plld_mask);

 if (!VAR_3->has_pllctrl)

  VAR_7 = ((VAR_8 & VAR_3->clkod_mask) >>
     VAR_3->clkod_shift) + 1;
 else if (VAR_3->pllod) {
  VAR_7 = FUNC_0(VAR_3->pllod);
  VAR_7 = ((VAR_7 & VAR_3->clkod_mask) >>
    VAR_3->clkod_shift) + 1;
 } else
  VAR_7 = VAR_3->postdiv;

 VAR_4 /= (VAR_6 + 1);
 VAR_4 = (VAR_4 * (VAR_5 + 1));
 VAR_4 /= VAR_7;

 return VAR_4;
}
