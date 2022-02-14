
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dw_mipi_dsi_rockchip {int lane_mbps; int phy_cfg_clk; int feedback_div; int input_div; int dev; } ;
struct TYPE_2__ {int hsfreqrange; int lpfctrl; int icpctrl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int FUNC_2 (int) ;
 int VAR_6 ;
 int FUNC_3 (int ) ;
 int VAR_7 ;
 int FUNC_4 (int ,char*,...) ;
 int VAR_8 ;
 int FUNC_5 (int ) ;
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
 int FUNC_6 (int ) ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_9 (int ) ;
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
 int FUNC_10 (int) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 TYPE_1__* VAR_46 ;
 int FUNC_13 (struct dw_mipi_dsi_rockchip*,int ,int) ;
 int FUNC_14 (int) ;
 int FUNC_15 (struct dw_mipi_dsi_rockchip*,int) ;
 int FUNC_16 (struct dw_mipi_dsi_rockchip*,int) ;

__attribute__((used)) static int FUNC_17(void *VAR_47)
{
 struct dw_mipi_dsi_rockchip *VAR_48 = VAR_47;
 int VAR_49, VAR_50, VAR_51;
 VAR_51 = (VAR_48->lane_mbps < 200) ? 0 : (VAR_48->lane_mbps + 100) / 200;

 VAR_50 = FUNC_14(VAR_48->lane_mbps);
 if (VAR_50 < 0) {
  FUNC_4(VAR_48->dev,
         "failed to get parameter for %dmbps clock\n",
         VAR_48->lane_mbps);
  return VAR_50;
 }

 VAR_49 = FUNC_12(VAR_48->phy_cfg_clk);
 if (VAR_49) {
  FUNC_4(VAR_48->dev, "Failed to enable phy_cfg_clk\n");
  return VAR_49;
 }

 FUNC_13(VAR_48, VAR_25,
         VAR_6 |
         FUNC_10(VAR_51) |
         VAR_45 |
         VAR_35);

 FUNC_13(VAR_48, VAR_26,
         FUNC_3(VAR_46[VAR_50].icpctrl));
 FUNC_13(VAR_48, VAR_32,
         VAR_7 | VAR_24 |
         FUNC_9(VAR_46[VAR_50].lpfctrl));

 FUNC_13(VAR_48, VAR_9,
         FUNC_5(VAR_46[VAR_50].hsfreqrange));

 FUNC_13(VAR_48, VAR_28,
         FUNC_6(VAR_48->input_div));
 FUNC_13(VAR_48, VAR_30,
         FUNC_8(VAR_48->feedback_div) |
         VAR_23);






 FUNC_13(VAR_48, VAR_27,
         VAR_31 | VAR_29);
 FUNC_13(VAR_48, VAR_30,
         FUNC_7(VAR_48->feedback_div) |
         VAR_8);
 FUNC_13(VAR_48, VAR_27,
         VAR_31 | VAR_29);

 FUNC_13(VAR_48, VAR_0,
         VAR_23 | FUNC_1(VAR_4));
 FUNC_13(VAR_48, VAR_0,
         VAR_8 | FUNC_0(VAR_1));

 FUNC_13(VAR_48, VAR_2,
         VAR_33 | VAR_21 |
         VAR_5 | VAR_3);

 FUNC_13(VAR_48, VAR_37,
         VAR_41 | VAR_38 |
         VAR_36 | VAR_39);
 FUNC_13(VAR_48, VAR_37,
         VAR_40 | VAR_22 |
         VAR_36 | VAR_34 |
         VAR_39);

 FUNC_13(VAR_48, VAR_14,
         VAR_44 | FUNC_15(VAR_48, 500));
 FUNC_13(VAR_48, VAR_13,
         VAR_42 | FUNC_16(VAR_48, 40));
 FUNC_13(VAR_48, VAR_11,
         VAR_43 | FUNC_15(VAR_48, 300));
 FUNC_13(VAR_48, VAR_15,
         VAR_42 | FUNC_16(VAR_48, 100));
 FUNC_13(VAR_48, VAR_10,
         FUNC_2(5) | FUNC_15(VAR_48, 100));
 FUNC_13(VAR_48, VAR_12,
         FUNC_2(5) | (FUNC_15(VAR_48, 60) + 7));

 FUNC_13(VAR_48, VAR_19,
         VAR_44 | FUNC_15(VAR_48, 500));
 FUNC_13(VAR_48, VAR_18,
         VAR_42 | (FUNC_16(VAR_48, 50) + 20));
 FUNC_13(VAR_48, VAR_17,
         VAR_43 | (FUNC_15(VAR_48, 140) + 2));
 FUNC_13(VAR_48, VAR_20,
         VAR_42 | (FUNC_16(VAR_48, 60) + 8));
 FUNC_13(VAR_48, VAR_16,
         FUNC_2(5) | FUNC_15(VAR_48, 100));

 FUNC_11(VAR_48->phy_cfg_clk);

 return VAR_49;
}
