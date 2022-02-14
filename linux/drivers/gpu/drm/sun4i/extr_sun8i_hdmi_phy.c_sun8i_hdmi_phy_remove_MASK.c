
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sun8i_hdmi_phy {int clk_bus; int clk_mod; int clk_pll1; int clk_pll0; int rst_phy; int clk_phy; } ;
struct sun8i_dw_hdmi {struct sun8i_hdmi_phy* phy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

void FUNC_4(struct sun8i_dw_hdmi *VAR_0)
{
 struct sun8i_hdmi_phy *VAR_1 = VAR_0->phy;

 FUNC_0(VAR_1->clk_mod);
 FUNC_0(VAR_1->clk_bus);
 FUNC_0(VAR_1->clk_phy);

 FUNC_2(VAR_1->rst_phy);

 FUNC_3(VAR_1->rst_phy);

 FUNC_1(VAR_1->clk_pll0);
 FUNC_1(VAR_1->clk_pll1);
 FUNC_1(VAR_1->clk_mod);
 FUNC_1(VAR_1->clk_bus);
}
