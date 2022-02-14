
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct clk_hw {int dummy; } ;
struct clk_frac_pll {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct clk_frac_pll*) ;
 int FUNC_1 (scalar_t__) ;
 struct clk_frac_pll* FUNC_2 (struct clk_hw*) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct clk_hw *VAR_2)
{
 struct clk_frac_pll *VAR_3 = FUNC_2(VAR_2);
 u32 VAR_4;

 VAR_4 = FUNC_1(VAR_3->base + VAR_0);
 VAR_4 &= ~VAR_1;
 FUNC_3(VAR_4, VAR_3->base + VAR_0);

 return FUNC_0(VAR_3);
}
