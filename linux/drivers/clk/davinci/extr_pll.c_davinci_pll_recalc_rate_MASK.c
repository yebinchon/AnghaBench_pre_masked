
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct davinci_pll_clk {int pllm_mask; scalar_t__ base; } ;
struct clk_hw {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 struct davinci_pll_clk* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_2(struct clk_hw *VAR_1,
          unsigned long VAR_2)
{
 struct davinci_pll_clk *VAR_3 = FUNC_1(VAR_1);
 unsigned long VAR_4 = VAR_2;
 u32 VAR_5;

 VAR_5 = FUNC_0(VAR_3->base + VAR_0) & VAR_3->pllm_mask;
 VAR_4 *= VAR_5 + 1;

 return VAR_4;
}
