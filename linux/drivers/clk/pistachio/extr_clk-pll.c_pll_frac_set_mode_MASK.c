
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
 int FUNC_1 (struct pistachio_clk_pll*,int,int ) ;
 struct pistachio_clk_pll* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static inline void FUNC_3(struct clk_hw *VAR_4, enum pll_mode VAR_5)
{
 struct pistachio_clk_pll *VAR_6 = FUNC_2(VAR_4);
 u32 VAR_7;

 VAR_7 = FUNC_0(VAR_6, VAR_0);
 if (VAR_5 == VAR_3)
  VAR_7 |= VAR_2 | VAR_1;
 else
  VAR_7 &= ~(VAR_2 | VAR_1);

 FUNC_1(VAR_6, VAR_7, VAR_0);
}
