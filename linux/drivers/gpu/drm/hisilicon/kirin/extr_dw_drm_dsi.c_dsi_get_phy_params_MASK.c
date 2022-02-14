
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mipi_phy_params {int clk_t_lpx; int clk_t_hs_prepare; int clk_t_hs_zero; int clk_t_hs_trial; int clk_t_wakeup; int data_t_wakeup; int data_t_lpx; int data_t_hs_prepare; int data_t_hs_zero; int data_t_hs_trial; int data_t_ta_go; int data_t_ta_get; int pll_enbwt; int clklp2hs_time; int clkhs2lp_time; int lp2hs_time; int hs2lp_time; int clk_to_data_delay; int data_to_clk_delay; int lane_byte_clk_kHz; int clk_division; } ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,struct mipi_phy_params*) ;
 int FUNC_3 (struct mipi_phy_params*,int ,int) ;

__attribute__((used)) static void FUNC_4(u32 VAR_2,
          struct mipi_phy_params *VAR_3)
{
 u32 VAR_4 = VAR_1;
 u32 VAR_5;
 u32 VAR_6;

 FUNC_3(VAR_3, 0, sizeof(*VAR_3));

 VAR_5 = FUNC_2(VAR_2, VAR_3);
 if (!VAR_5)
  return;

 VAR_6 = 1000000 / VAR_5;

 VAR_3->clk_t_lpx = FUNC_1(50, 8 * VAR_6);
 VAR_3->clk_t_hs_prepare = FUNC_1(133, 16 * VAR_6) - 1;

 VAR_3->clk_t_hs_zero = FUNC_1(262, 8 * VAR_6);
 VAR_3->clk_t_hs_trial = 2 * (FUNC_1(60, 8 * VAR_6) - 1);
 VAR_3->clk_t_wakeup = FUNC_1(1000000, (VAR_4 / 1000) - 1);
 if (VAR_3->clk_t_wakeup > 0xff)
  VAR_3->clk_t_wakeup = 0xff;
 VAR_3->data_t_wakeup = VAR_3->clk_t_wakeup;
 VAR_3->data_t_lpx = VAR_3->clk_t_lpx;
 VAR_3->data_t_hs_prepare = FUNC_1(125 + 10 * VAR_6, 16 * VAR_6) - 1;
 VAR_3->data_t_hs_zero = FUNC_1(105 + 6 * VAR_6, 8 * VAR_6);
 VAR_3->data_t_hs_trial = 2 * (FUNC_1(60 + 4 * VAR_6, 8 * VAR_6) - 1);
 VAR_3->data_t_ta_go = 3;
 VAR_3->data_t_ta_get = 4;

 VAR_3->pll_enbwt = 1;
 VAR_3->clklp2hs_time = FUNC_1(407, 8 * VAR_6) + 12;
 VAR_3->clkhs2lp_time = FUNC_1(105 + 12 * VAR_6, 8 * VAR_6);
 VAR_3->lp2hs_time = FUNC_1(240 + 12 * VAR_6, 8 * VAR_6) + 1;
 VAR_3->hs2lp_time = VAR_3->clkhs2lp_time;
 VAR_3->clk_to_data_delay = 1 + VAR_3->clklp2hs_time;
 VAR_3->data_to_clk_delay = FUNC_1(60 + 52 * VAR_6, 8 * VAR_6) +
    VAR_3->clkhs2lp_time;

 VAR_3->lane_byte_clk_kHz = VAR_5 / 8;
 VAR_3->clk_division =
  FUNC_0(VAR_3->lane_byte_clk_kHz, VAR_0);
}
