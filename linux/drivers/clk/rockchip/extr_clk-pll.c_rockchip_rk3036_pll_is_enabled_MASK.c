
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rockchip_clk_pll {scalar_t__ reg_base; } ;
struct clk_hw {int dummy; } ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 struct rockchip_clk_pll* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_3(struct clk_hw *VAR_1)
{
 struct rockchip_clk_pll *VAR_2 = FUNC_2(VAR_1);
 u32 VAR_3 = FUNC_1(VAR_2->reg_base + FUNC_0(1));

 return !(VAR_3 & VAR_0);
}
