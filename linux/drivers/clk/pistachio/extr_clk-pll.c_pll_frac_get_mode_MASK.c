
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pistachio_clk_pll {int dummy; } ;
struct clk_hw {int dummy; } ;
typedef enum pll_mode { ____Placeholder_pll_mode } pll_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct pistachio_clk_pll*,int ) ;
 struct pistachio_clk_pll* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static inline enum pll_mode FUNC_2(struct clk_hw *VAR_4)
{
 struct pistachio_clk_pll *VAR_5 = FUNC_1(VAR_4);
 u32 VAR_6;

 VAR_6 = FUNC_0(VAR_5, VAR_0) & VAR_1;
 return VAR_6 ? VAR_3 : VAR_2;
}
