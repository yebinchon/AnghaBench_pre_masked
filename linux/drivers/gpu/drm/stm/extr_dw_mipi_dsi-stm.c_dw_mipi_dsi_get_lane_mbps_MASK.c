
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dw_mipi_dsi_stm {int lane_min_kbps; int lane_max_kbps; scalar_t__ hw_version; int pllref_clk; } ;
struct drm_display_mode {int clock; } ;


 int FUNC_0 (char*,unsigned int,unsigned int,unsigned int) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct dw_mipi_dsi_stm*,int ,int ) ;
 int FUNC_4 (int) ;
 unsigned int FUNC_5 (unsigned int,unsigned int,unsigned int,unsigned int) ;
 int FUNC_6 (struct dw_mipi_dsi_stm*,unsigned int,unsigned int,unsigned int*,unsigned int*,unsigned int*) ;
 int FUNC_7 (struct dw_mipi_dsi_stm*,int ,int,int) ;
 int FUNC_8 (unsigned int) ;
 int FUNC_9 (int) ;

__attribute__((used)) static int
FUNC_10(void *VAR_12, const struct drm_display_mode *VAR_13,
     unsigned long VAR_14, u32 VAR_15, u32 VAR_16,
     unsigned int *VAR_17)
{
 struct dw_mipi_dsi_stm *VAR_18 = VAR_12;
 unsigned int VAR_19, VAR_20, VAR_21, VAR_22, VAR_23;
 int VAR_24, VAR_25;
 u32 VAR_26;


 VAR_18->lane_min_kbps = VAR_5;
 VAR_18->lane_max_kbps = VAR_4;
 if (VAR_18->hw_version == VAR_3) {
  VAR_18->lane_min_kbps *= 2;
  VAR_18->lane_max_kbps *= 2;
 }

 VAR_22 = (unsigned int)(FUNC_2(VAR_18->pllref_clk) / 1000);


 VAR_25 = FUNC_9(VAR_16);
 VAR_23 = VAR_13->clock * VAR_25 / VAR_15;

 VAR_23 = (VAR_23 * 12) / 10;
 if (VAR_23 > VAR_18->lane_max_kbps) {
  VAR_23 = VAR_18->lane_max_kbps;
  FUNC_1("Warning max phy mbps is used\n");
 }
 if (VAR_23 < VAR_18->lane_min_kbps) {
  VAR_23 = VAR_18->lane_min_kbps;
  FUNC_1("Warning min phy mbps is used\n");
 }


 VAR_19 = 0;
 VAR_20 = 0;
 VAR_21 = 0;
 VAR_24 = FUNC_6(VAR_18, VAR_22, VAR_23,
     &VAR_19, &VAR_20, &VAR_21);
 if (VAR_24)
  FUNC_1("Warning dsi_pll_get_params(): bad params\n");


 VAR_23 = FUNC_5(VAR_22, VAR_19, VAR_20, VAR_21);


 FUNC_7(VAR_18, VAR_2, VAR_10 | VAR_9 | VAR_11,
   (VAR_20 << 2) | (VAR_19 << 11) | ((FUNC_8(VAR_21) - 1) << 16));


 VAR_26 = 4000000 / VAR_23;
 FUNC_7(VAR_18, VAR_1, VAR_8, VAR_26);


 FUNC_3(VAR_18, VAR_0, VAR_7);


 FUNC_7(VAR_18, VAR_0, VAR_6,
   FUNC_4(VAR_16) << 1);

 *VAR_17 = VAR_23 / 1000;

 FUNC_0("pll_in %ukHz pll_out %ukHz lane_mbps %uMHz\n",
    VAR_22, VAR_23, *VAR_17);

 return 0;
}
