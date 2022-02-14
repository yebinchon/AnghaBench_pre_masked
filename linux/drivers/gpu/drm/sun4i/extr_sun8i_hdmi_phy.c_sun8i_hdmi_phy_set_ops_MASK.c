
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sun8i_hdmi_phy_variant {int phy_cfg; int cur_ctr; int mpll_cfg; scalar_t__ is_custom_phy; } ;
struct sun8i_hdmi_phy {struct sun8i_hdmi_phy_variant* variant; } ;
struct dw_hdmi_plat_data {char* phy_name; int phy_config; int cur_ctr; int mpll_cfg; struct sun8i_hdmi_phy* phy_data; int * phy_ops; } ;


 int VAR_0 ;

void FUNC_0(struct sun8i_hdmi_phy *VAR_1,
       struct dw_hdmi_plat_data *VAR_2)
{
 struct sun8i_hdmi_phy_variant *VAR_3 = VAR_1->variant;

 if (VAR_3->is_custom_phy) {
  VAR_2->phy_ops = &VAR_0;
  VAR_2->phy_name = "sun8i_dw_hdmi_phy";
  VAR_2->phy_data = VAR_1;
 } else {
  VAR_2->mpll_cfg = VAR_3->mpll_cfg;
  VAR_2->cur_ctr = VAR_3->cur_ctr;
  VAR_2->phy_config = VAR_3->phy_cfg;
 }
}
