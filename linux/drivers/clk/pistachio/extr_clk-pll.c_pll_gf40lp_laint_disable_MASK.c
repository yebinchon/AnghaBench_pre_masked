
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pistachio_clk_pll {int dummy; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pistachio_clk_pll*,int ) ;
 int FUNC_1 (struct pistachio_clk_pll*,int ,int ) ;
 struct pistachio_clk_pll* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static void FUNC_3(struct clk_hw *VAR_2)
{
 struct pistachio_clk_pll *VAR_3 = FUNC_2(VAR_2);
 u32 VAR_4;

 VAR_4 = FUNC_0(VAR_3, VAR_0);
 VAR_4 |= VAR_1;
 FUNC_1(VAR_3, VAR_4, VAR_0);
}
