
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdmi_pll_8996 {int dummy; } ;
struct hdmi_phy {int dummy; } ;
struct hdmi_8996_phy_pll_reg_cfg {int* tx_lx_tx_band; int* tx_lx_lane_mode; int com_svs_mode_clk_sel; int com_vco_tune_ctrl; int com_hsclk_sel; int com_lock_cmp_en; int com_pll_cctrl_mode0; int com_pll_rctrl_mode0; int com_cp_ctrl_mode0; int com_dec_start_mode0; int com_div_frac_start1_mode0; int com_div_frac_start2_mode0; int com_div_frac_start3_mode0; int com_integloop_gain0_mode0; int com_integloop_gain1_mode0; int com_lock_cmp1_mode0; int com_lock_cmp2_mode0; int com_lock_cmp3_mode0; int com_core_clk_en; int com_coreclk_div; int* tx_lx_tx_drv_lvl; int* tx_lx_tx_emp_post1_lvl; int* tx_lx_vmode_ctrl1; int* tx_lx_vmode_ctrl2; int* tx_lx_hp_pd_enables; int phy_mode; } ;
struct clk_hw {int dummy; } ;
typedef int cfg ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int FUNC_2 (struct hdmi_phy*,int ,int) ;
 int FUNC_3 (struct hdmi_pll_8996*,int ,int) ;
 int FUNC_4 (struct hdmi_pll_8996*,int,int ,int) ;
 struct hdmi_pll_8996* FUNC_5 (struct clk_hw*) ;
 int FUNC_6 (struct hdmi_8996_phy_pll_reg_cfg*,int,int) ;
 int FUNC_7 (unsigned long,unsigned long,struct hdmi_8996_phy_pll_reg_cfg*) ;
 struct hdmi_phy* FUNC_8 (struct hdmi_pll_8996*) ;
 int FUNC_9 (int) ;
 int FUNC_10 () ;

__attribute__((used)) static int FUNC_11(struct clk_hw *VAR_49, unsigned long VAR_50,
          unsigned long VAR_51)
{
 struct hdmi_pll_8996 *VAR_52 = FUNC_5(VAR_49);
 struct hdmi_phy *VAR_53 = FUNC_8(VAR_52);
 struct hdmi_8996_phy_pll_reg_cfg VAR_54;
 int VAR_55, VAR_56;

 FUNC_6(&VAR_54, 0x00, sizeof(VAR_54));

 VAR_56 = FUNC_7(VAR_50, VAR_51, &VAR_54);
 if (VAR_56) {
  FUNC_1("PLL calculation failed\n");
  return VAR_56;
 }


 FUNC_0("Disabling PHY");
 FUNC_2(VAR_53, VAR_2, 0x0);
 FUNC_9(500);


 FUNC_3(VAR_52, VAR_5, 0x04);

 FUNC_2(VAR_53, VAR_2, 0x1);
 FUNC_3(VAR_52, VAR_29, 0x20);
 FUNC_2(VAR_53, VAR_3, 0x0F);
 FUNC_2(VAR_53, VAR_4, 0x0F);

 for (VAR_55 = 0; VAR_55 < VAR_0; VAR_55++) {
  FUNC_4(VAR_52, VAR_55,
       VAR_36,
       0x03);
  FUNC_4(VAR_52, VAR_55,
       VAR_43,
       VAR_54.tx_lx_tx_band[VAR_55]);
  FUNC_4(VAR_52, VAR_55,
       VAR_40,
       0x03);
 }

 FUNC_4(VAR_52, 0, VAR_38,
      VAR_54.tx_lx_lane_mode[0]);
 FUNC_4(VAR_52, 2, VAR_38,
      VAR_54.tx_lx_lane_mode[2]);

 FUNC_3(VAR_52, VAR_31, 0x1E);
 FUNC_3(VAR_52, VAR_7, 0x07);
 FUNC_3(VAR_52, VAR_32, 0x37);
 FUNC_3(VAR_52, VAR_33, 0x02);
 FUNC_3(VAR_52, VAR_8, 0x0E);


 FUNC_3(VAR_52, VAR_30,
         VAR_54.com_svs_mode_clk_sel);

 FUNC_3(VAR_52, VAR_6, 0x0F);
 FUNC_3(VAR_52, VAR_26, 0x0F);
 FUNC_3(VAR_52, VAR_34,
         VAR_54.com_vco_tune_ctrl);

 FUNC_3(VAR_52, VAR_5, 0x06);

 FUNC_3(VAR_52, VAR_9, 0x30);
 FUNC_3(VAR_52, VAR_18,
         VAR_54.com_hsclk_sel);
 FUNC_3(VAR_52, VAR_24,
         VAR_54.com_lock_cmp_en);

 FUNC_3(VAR_52, VAR_25,
         VAR_54.com_pll_cctrl_mode0);
 FUNC_3(VAR_52, VAR_27,
         VAR_54.com_pll_rctrl_mode0);
 FUNC_3(VAR_52, VAR_13,
         VAR_54.com_cp_ctrl_mode0);
 FUNC_3(VAR_52, VAR_14,
         VAR_54.com_dec_start_mode0);
 FUNC_3(VAR_52, VAR_15,
         VAR_54.com_div_frac_start1_mode0);
 FUNC_3(VAR_52, VAR_16,
         VAR_54.com_div_frac_start2_mode0);
 FUNC_3(VAR_52, VAR_17,
         VAR_54.com_div_frac_start3_mode0);

 FUNC_3(VAR_52, VAR_19,
         VAR_54.com_integloop_gain0_mode0);
 FUNC_3(VAR_52, VAR_20,
         VAR_54.com_integloop_gain1_mode0);

 FUNC_3(VAR_52, VAR_21,
         VAR_54.com_lock_cmp1_mode0);
 FUNC_3(VAR_52, VAR_22,
         VAR_54.com_lock_cmp2_mode0);
 FUNC_3(VAR_52, VAR_23,
         VAR_54.com_lock_cmp3_mode0);

 FUNC_3(VAR_52, VAR_35, 0x00);
 FUNC_3(VAR_52, VAR_12,
         VAR_54.com_core_clk_en);
 FUNC_3(VAR_52, VAR_11,
         VAR_54.com_coreclk_div);
 FUNC_3(VAR_52, VAR_10, 0x02);

 FUNC_3(VAR_52, VAR_28, 0x15);


 for (VAR_55 = 0; VAR_55 < VAR_0; VAR_55++) {
  FUNC_4(VAR_52, VAR_55,
       VAR_44,
       VAR_54.tx_lx_tx_drv_lvl[VAR_55]);
  FUNC_4(VAR_52, VAR_55,
       VAR_46,
       VAR_54.tx_lx_tx_emp_post1_lvl[VAR_55]);
  FUNC_4(VAR_52, VAR_55,
       VAR_47,
       VAR_54.tx_lx_vmode_ctrl1[VAR_55]);
  FUNC_4(VAR_52, VAR_55,
       VAR_48,
       VAR_54.tx_lx_vmode_ctrl2[VAR_55]);
  FUNC_4(VAR_52, VAR_55,
       VAR_45,
       0x00);
  FUNC_4(VAR_52, VAR_55,
   VAR_41,
   0x00);
  FUNC_4(VAR_52, VAR_55,
   VAR_42,
   0x03);
  FUNC_4(VAR_52, VAR_55,
   VAR_39,
   0x40);
  FUNC_4(VAR_52, VAR_55,
       VAR_37,
       VAR_54.tx_lx_hp_pd_enables[VAR_55]);
 }

 FUNC_2(VAR_53, VAR_1, VAR_54.phy_mode);
 FUNC_2(VAR_53, VAR_2, 0x1F);





 FUNC_10();

 return 0;
}
