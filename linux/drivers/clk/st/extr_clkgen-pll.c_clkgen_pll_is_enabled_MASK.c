
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct clkgen_pll {int dummy; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (struct clkgen_pll*,int ) ;
 int VAR_0 ;
 struct clkgen_pll* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_2(struct clk_hw *VAR_1)
{
 struct clkgen_pll *VAR_2 = FUNC_1(VAR_1);
 u32 VAR_3 = FUNC_0(VAR_2, VAR_0);
 return !VAR_3;
}
