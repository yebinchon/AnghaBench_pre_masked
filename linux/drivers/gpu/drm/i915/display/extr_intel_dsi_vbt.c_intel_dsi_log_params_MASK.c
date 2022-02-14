
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_dsi {char* pclk; char* pixel_overlap; char* lane_count; char* dphy_reg; scalar_t__ video_mode_format; char* burst_mode_ratio; char* rst_timer_val; int eotp_pkt; scalar_t__ dual_link; char* pixel_format; char* escape_clk_div; char* lp_rx_timeout; char* turn_arnd_val; char* init_count; char* hs_to_lp_count; char* lp_byte_clk; char* bw_timer; char* clk_lp_to_hs_count; char* clk_hs_to_lp_count; int video_frmt_cfg_bits; scalar_t__ operation_mode; int clock_stop; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 char* FUNC_1 (int) ;

void FUNC_2(struct intel_dsi *VAR_6)
{
 FUNC_0("Pclk %d\n", VAR_6->pclk);
 FUNC_0("Pixel overlap %d\n", VAR_6->pixel_overlap);
 FUNC_0("Lane count %d\n", VAR_6->lane_count);
 FUNC_0("DPHY param reg 0x%x\n", VAR_6->dphy_reg);
 FUNC_0("Video mode format %s\n",
        VAR_6->video_mode_format == VAR_5 ?
        "non-burst with sync pulse" :
        VAR_6->video_mode_format == VAR_4 ?
        "non-burst with sync events" :
        VAR_6->video_mode_format == VAR_3 ?
        "burst" : "<unknown>");
 FUNC_0("Burst mode ratio %d\n", VAR_6->burst_mode_ratio);
 FUNC_0("Reset timer %d\n", VAR_6->rst_timer_val);
 FUNC_0("Eot %s\n", FUNC_1(VAR_6->eotp_pkt));
 FUNC_0("Clockstop %s\n", FUNC_1(!VAR_6->clock_stop));
 FUNC_0("Mode %s\n", VAR_6->operation_mode ? "command" : "video");
 if (VAR_6->dual_link == VAR_1)
  FUNC_0("Dual link: DSI_DUAL_LINK_FRONT_BACK\n");
 else if (VAR_6->dual_link == VAR_2)
  FUNC_0("Dual link: DSI_DUAL_LINK_PIXEL_ALT\n");
 else
  FUNC_0("Dual link: NONE\n");
 FUNC_0("Pixel Format %d\n", VAR_6->pixel_format);
 FUNC_0("TLPX %d\n", VAR_6->escape_clk_div);
 FUNC_0("LP RX Timeout 0x%x\n", VAR_6->lp_rx_timeout);
 FUNC_0("Turnaround Timeout 0x%x\n", VAR_6->turn_arnd_val);
 FUNC_0("Init Count 0x%x\n", VAR_6->init_count);
 FUNC_0("HS to LP Count 0x%x\n", VAR_6->hs_to_lp_count);
 FUNC_0("LP Byte Clock %d\n", VAR_6->lp_byte_clk);
 FUNC_0("DBI BW Timer 0x%x\n", VAR_6->bw_timer);
 FUNC_0("LP to HS Clock Count 0x%x\n", VAR_6->clk_lp_to_hs_count);
 FUNC_0("HS to LP Clock Count 0x%x\n", VAR_6->clk_hs_to_lp_count);
 FUNC_0("BTA %s\n",
   FUNC_1(!(VAR_6->video_frmt_cfg_bits & VAR_0)));
}
