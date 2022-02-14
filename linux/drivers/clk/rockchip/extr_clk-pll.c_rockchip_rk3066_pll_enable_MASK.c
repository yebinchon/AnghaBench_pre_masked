
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rockchip_clk_pll {scalar_t__ reg_base; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (int ,int ,int ) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (struct rockchip_clk_pll*) ;
 struct rockchip_clk_pll* FUNC_3 (struct clk_hw*) ;
 int FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct clk_hw *VAR_1)
{
 struct rockchip_clk_pll *VAR_2 = FUNC_3(VAR_1);

 FUNC_4(FUNC_0(0, VAR_0, 0),
        VAR_2->reg_base + FUNC_1(3));
 FUNC_2(VAR_2);

 return 0;
}
