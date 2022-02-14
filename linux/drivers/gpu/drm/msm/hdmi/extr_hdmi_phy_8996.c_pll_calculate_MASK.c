
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct hdmi_8996_post_divider {int vco_freq; int vco_ratio; int hsclk_divsel; int tx_band_sel; } ;
struct hdmi_8996_phy_pll_reg_cfg {int com_svs_mode_clk_sel; int com_hsclk_sel; int com_pll_cctrl_mode0; int com_pll_rctrl_mode0; int com_cp_ctrl_mode0; int com_dec_start_mode0; int com_div_frac_start1_mode0; int com_div_frac_start2_mode0; int com_div_frac_start3_mode0; int com_integloop_gain0_mode0; int com_integloop_gain1_mode0; int com_lock_cmp1_mode0; int com_lock_cmp2_mode0; int com_lock_cmp3_mode0; int com_lock_cmp_en; int com_core_clk_en; int phy_mode; int com_vco_tune_ctrl; int* tx_lx_lane_mode; int* tx_lx_hp_pd_enables; int* tx_lx_tx_band; int* tx_lx_tx_drv_lvl; int* tx_lx_tx_emp_post1_lvl; int* tx_lx_vmode_ctrl1; int* tx_lx_vmode_ctrl2; int com_coreclk_div; } ;


 int FUNC_0 (char*,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,unsigned long,int) ;
 int FUNC_4 (int,int,unsigned long,int) ;
 int FUNC_5 (int,unsigned long) ;
 int FUNC_6 (struct hdmi_8996_post_divider*,int) ;
 int FUNC_7 (int,int) ;

__attribute__((used)) static int FUNC_8(unsigned long VAR_5, unsigned long VAR_6,
    struct hdmi_8996_phy_pll_reg_cfg *VAR_7)
{
 struct hdmi_8996_post_divider VAR_8;
 u64 VAR_9;
 u64 VAR_10;
 u64 VAR_11;
 u64 VAR_12;
 u64 VAR_13;
 u32 VAR_14;
 u32 VAR_15;
 u32 VAR_16;
 u32 VAR_17;
 u32 VAR_18;
 u32 VAR_19;
 u32 VAR_20;
 int VAR_21, VAR_22;


 VAR_9 = ((u64)VAR_5) * 10;

 if (VAR_9 > VAR_2)
  VAR_10 = VAR_5 >> 2;
 else
  VAR_10 = VAR_5;

 VAR_22 = FUNC_6(&VAR_8, VAR_9);
 if (VAR_22)
  return VAR_22;

 VAR_11 = VAR_8.vco_freq;
 VAR_14 = 4 * VAR_6;
 FUNC_1(VAR_11, VAR_14);

 VAR_12 = VAR_8.vco_freq * (1 << 20);

 VAR_15 = FUNC_1(VAR_12, VAR_14);
 VAR_12 -= VAR_11 * (1 << 20);
 if (VAR_15 > (VAR_14 >> 1))
  VAR_12++;

 VAR_16 = FUNC_3(VAR_12, VAR_6, 0);
 VAR_17 = FUNC_7(VAR_12, 0);
 VAR_18 = FUNC_2(VAR_12, 0);
 VAR_19 = FUNC_4(VAR_12, VAR_9,
      VAR_6, 0);

 VAR_13 = VAR_8.vco_freq;
 FUNC_1(VAR_13, VAR_8.vco_ratio);

 VAR_20 = FUNC_5(VAR_13, VAR_6);

 FUNC_0("VCO freq: %llu", VAR_8.vco_freq);
 FUNC_0("fdata: %llu", VAR_13);
 FUNC_0("pix_clk: %lu", VAR_5);
 FUNC_0("tmds clk: %llu", VAR_10);
 FUNC_0("HSCLK_SEL: %d", VAR_8.hsclk_divsel);
 FUNC_0("DEC_START: %llu", VAR_11);
 FUNC_0("DIV_FRAC_START: %llu", VAR_12);
 FUNC_0("PLL_CPCTRL: %u", VAR_16);
 FUNC_0("PLL_RCTRL: %u", VAR_17);
 FUNC_0("PLL_CCTRL: %u", VAR_18);
 FUNC_0("INTEGLOOP_GAIN: %u", VAR_19);
 FUNC_0("TX_BAND: %d", VAR_8.tx_band_sel);
 FUNC_0("PLL_CMP: %u", VAR_20);


 if (VAR_9 > VAR_1)
  VAR_7->com_svs_mode_clk_sel = 1;
 else
  VAR_7->com_svs_mode_clk_sel = 2;

 VAR_7->com_hsclk_sel = (0x20 | VAR_8.hsclk_divsel);
 VAR_7->com_pll_cctrl_mode0 = VAR_18;
 VAR_7->com_pll_rctrl_mode0 = VAR_17;
 VAR_7->com_cp_ctrl_mode0 = VAR_16;
 VAR_7->com_dec_start_mode0 = VAR_11;
 VAR_7->com_div_frac_start1_mode0 = (VAR_12 & 0xff);
 VAR_7->com_div_frac_start2_mode0 = ((VAR_12 & 0xff00) >> 8);
 VAR_7->com_div_frac_start3_mode0 = ((VAR_12 & 0xf0000) >> 16);
 VAR_7->com_integloop_gain0_mode0 = (VAR_19 & 0xff);
 VAR_7->com_integloop_gain1_mode0 = ((VAR_19 & 0xf00) >> 8);
 VAR_7->com_lock_cmp1_mode0 = (VAR_20 & 0xff);
 VAR_7->com_lock_cmp2_mode0 = ((VAR_20 & 0xff00) >> 8);
 VAR_7->com_lock_cmp3_mode0 = ((VAR_20 & 0x30000) >> 16);
 VAR_7->com_lock_cmp_en = 0x0;
 VAR_7->com_core_clk_en = 0x2c;
 VAR_7->com_coreclk_div = VAR_0;
 VAR_7->phy_mode = (VAR_9 > VAR_2) ? 0x10 : 0x0;
 VAR_7->com_vco_tune_ctrl = 0x0;

 VAR_7->tx_lx_lane_mode[0] =
  VAR_7->tx_lx_lane_mode[2] = 0x43;

 VAR_7->tx_lx_hp_pd_enables[0] =
  VAR_7->tx_lx_hp_pd_enables[1] =
  VAR_7->tx_lx_hp_pd_enables[2] = 0x0c;
 VAR_7->tx_lx_hp_pd_enables[3] = 0x3;

 for (VAR_21 = 0; VAR_21 < VAR_4; VAR_21++)
  VAR_7->tx_lx_tx_band[VAR_21] = VAR_8.tx_band_sel + 4;

 if (VAR_9 > VAR_2) {
  VAR_7->tx_lx_tx_drv_lvl[0] =
   VAR_7->tx_lx_tx_drv_lvl[1] =
   VAR_7->tx_lx_tx_drv_lvl[2] = 0x25;
  VAR_7->tx_lx_tx_drv_lvl[3] = 0x22;

  VAR_7->tx_lx_tx_emp_post1_lvl[0] =
   VAR_7->tx_lx_tx_emp_post1_lvl[1] =
   VAR_7->tx_lx_tx_emp_post1_lvl[2] = 0x23;
  VAR_7->tx_lx_tx_emp_post1_lvl[3] = 0x27;

  VAR_7->tx_lx_vmode_ctrl1[0] =
   VAR_7->tx_lx_vmode_ctrl1[1] =
   VAR_7->tx_lx_vmode_ctrl1[2] =
   VAR_7->tx_lx_vmode_ctrl1[3] = 0x00;

  VAR_7->tx_lx_vmode_ctrl2[0] =
   VAR_7->tx_lx_vmode_ctrl2[1] =
   VAR_7->tx_lx_vmode_ctrl2[2] = 0x0D;

  VAR_7->tx_lx_vmode_ctrl2[3] = 0x00;
 } else if (VAR_9 > VAR_3) {
  for (VAR_21 = 0; VAR_21 < VAR_4; VAR_21++) {
   VAR_7->tx_lx_tx_drv_lvl[VAR_21] = 0x25;
   VAR_7->tx_lx_tx_emp_post1_lvl[VAR_21] = 0x23;
   VAR_7->tx_lx_vmode_ctrl1[VAR_21] = 0x00;
  }

  VAR_7->tx_lx_vmode_ctrl2[0] =
   VAR_7->tx_lx_vmode_ctrl2[1] =
   VAR_7->tx_lx_vmode_ctrl2[2] = 0x0D;
  VAR_7->tx_lx_vmode_ctrl2[3] = 0x00;
 } else {
  for (VAR_21 = 0; VAR_21 < VAR_4; VAR_21++) {
   VAR_7->tx_lx_tx_drv_lvl[VAR_21] = 0x20;
   VAR_7->tx_lx_tx_emp_post1_lvl[VAR_21] = 0x20;
   VAR_7->tx_lx_vmode_ctrl1[VAR_21] = 0x00;
   VAR_7->tx_lx_vmode_ctrl2[VAR_21] = 0x0E;
  }
 }

 FUNC_0("com_svs_mode_clk_sel = 0x%x", VAR_7->com_svs_mode_clk_sel);
 FUNC_0("com_hsclk_sel = 0x%x", VAR_7->com_hsclk_sel);
 FUNC_0("com_lock_cmp_en = 0x%x", VAR_7->com_lock_cmp_en);
 FUNC_0("com_pll_cctrl_mode0 = 0x%x", VAR_7->com_pll_cctrl_mode0);
 FUNC_0("com_pll_rctrl_mode0 = 0x%x", VAR_7->com_pll_rctrl_mode0);
 FUNC_0("com_cp_ctrl_mode0 = 0x%x", VAR_7->com_cp_ctrl_mode0);
 FUNC_0("com_dec_start_mode0 = 0x%x", VAR_7->com_dec_start_mode0);
 FUNC_0("com_div_frac_start1_mode0 = 0x%x", VAR_7->com_div_frac_start1_mode0);
 FUNC_0("com_div_frac_start2_mode0 = 0x%x", VAR_7->com_div_frac_start2_mode0);
 FUNC_0("com_div_frac_start3_mode0 = 0x%x", VAR_7->com_div_frac_start3_mode0);
 FUNC_0("com_integloop_gain0_mode0 = 0x%x", VAR_7->com_integloop_gain0_mode0);
 FUNC_0("com_integloop_gain1_mode0 = 0x%x", VAR_7->com_integloop_gain1_mode0);
 FUNC_0("com_lock_cmp1_mode0 = 0x%x", VAR_7->com_lock_cmp1_mode0);
 FUNC_0("com_lock_cmp2_mode0 = 0x%x", VAR_7->com_lock_cmp2_mode0);
 FUNC_0("com_lock_cmp3_mode0 = 0x%x", VAR_7->com_lock_cmp3_mode0);
 FUNC_0("com_core_clk_en = 0x%x", VAR_7->com_core_clk_en);
 FUNC_0("com_coreclk_div = 0x%x", VAR_7->com_coreclk_div);
 FUNC_0("phy_mode = 0x%x", VAR_7->phy_mode);

 FUNC_0("tx_l0_lane_mode = 0x%x", VAR_7->tx_lx_lane_mode[0]);
 FUNC_0("tx_l2_lane_mode = 0x%x", VAR_7->tx_lx_lane_mode[2]);

 for (VAR_21 = 0; VAR_21 < VAR_4; VAR_21++) {
  FUNC_0("tx_l%d_tx_band = 0x%x", VAR_21, VAR_7->tx_lx_tx_band[VAR_21]);
  FUNC_0("tx_l%d_tx_drv_lvl = 0x%x", VAR_21, VAR_7->tx_lx_tx_drv_lvl[VAR_21]);
  FUNC_0("tx_l%d_tx_emp_post1_lvl = 0x%x", VAR_21,
      VAR_7->tx_lx_tx_emp_post1_lvl[VAR_21]);
  FUNC_0("tx_l%d_vmode_ctrl1 = 0x%x", VAR_21, VAR_7->tx_lx_vmode_ctrl1[VAR_21]);
  FUNC_0("tx_l%d_vmode_ctrl2 = 0x%x", VAR_21, VAR_7->tx_lx_vmode_ctrl2[VAR_21]);
 }

 return 0;
}
