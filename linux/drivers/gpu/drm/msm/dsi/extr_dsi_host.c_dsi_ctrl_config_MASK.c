
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct msm_dsi_phy_shared_timings {scalar_t__ clk_pre_inc_by_2; int clk_pre; int clk_post; } ;
struct msm_dsi_host {int mode_flags; int format; int lanes; int dlane_swap; int channel; struct msm_dsi_cfg_handler* cfg_hnd; } ;
struct msm_dsi_cfg_handler {scalar_t__ major; scalar_t__ minor; } ;
typedef enum mipi_dsi_pixel_format { ____Placeholder_mipi_dsi_pixel_format } mipi_dsi_pixel_format ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_1 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_7 (int ) ;
 int VAR_10 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_11 (int ) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 scalar_t__ VAR_28 ;
 scalar_t__ VAR_29 ;
 scalar_t__ VAR_30 ;
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
 int FUNC_15 (int) ;
 int FUNC_16 (int) ;
 int FUNC_17 (int) ;
 int FUNC_18 (struct msm_dsi_host*,int ,int) ;
 int FUNC_19 (struct msm_dsi_host*,int ,int) ;

__attribute__((used)) static void FUNC_20(struct msm_dsi_host *VAR_48, bool VAR_49,
   struct msm_dsi_phy_shared_timings *VAR_50)
{
 u32 VAR_51 = VAR_48->mode_flags;
 enum mipi_dsi_pixel_format VAR_52 = VAR_48->format;
 const struct msm_dsi_cfg_handler *VAR_53 = VAR_48->cfg_hnd;
 u32 VAR_54 = 0;

 if (!VAR_49) {
  FUNC_19(VAR_48, VAR_36, 0);
  return;
 }

 if (VAR_51 & VAR_23) {
  if (VAR_51 & VAR_27)
   VAR_54 |= VAR_18;
  if (VAR_51 & VAR_25)
   VAR_54 |= VAR_16;
  if (VAR_51 & VAR_24)
   VAR_54 |= VAR_15;
  if (VAR_51 & VAR_26)
   VAR_54 |= VAR_17;



  VAR_54 |= VAR_14 |
   VAR_13;
  VAR_54 |= FUNC_12(FUNC_16(VAR_51));
  VAR_54 |= FUNC_11(FUNC_17(VAR_52));
  VAR_54 |= FUNC_13(VAR_48->channel);
  FUNC_19(VAR_48, VAR_43, VAR_54);


  VAR_54 = FUNC_14(VAR_45);
  FUNC_19(VAR_48, VAR_44, 0);
 } else {

  VAR_54 = FUNC_4(VAR_45);
  VAR_54 |= FUNC_3(FUNC_15(VAR_52));
  FUNC_19(VAR_48, VAR_33, VAR_54);

  VAR_54 = FUNC_6(VAR_20) |
   FUNC_5(
     VAR_19);

  VAR_54 |= VAR_1;
  FUNC_19(VAR_48, VAR_34, VAR_54);
 }

 FUNC_19(VAR_48, VAR_35,
   VAR_2 |
   VAR_3);

 VAR_54 = 0;

 VAR_54 |= VAR_11;
 VAR_54 |= FUNC_9(VAR_46);
 VAR_54 |= FUNC_8(VAR_47);
 VAR_54 |= FUNC_10(VAR_48->channel);
 if ((VAR_53->major == VAR_30) &&
  (VAR_53->minor >= VAR_29))
  VAR_54 |= VAR_10;
 FUNC_19(VAR_48, VAR_41, VAR_54);

 VAR_54 = FUNC_1(VAR_50->clk_post) |
  FUNC_2(VAR_50->clk_pre);
 FUNC_19(VAR_48, VAR_31, VAR_54);

 if ((VAR_53->major == VAR_30) &&
     (VAR_53->minor > VAR_28) &&
     VAR_50->clk_pre_inc_by_2)
  FUNC_19(VAR_48, VAR_42,
     VAR_12);

 VAR_54 = 0;
 if (!(VAR_51 & VAR_22))
  VAR_54 |= VAR_7;
 FUNC_19(VAR_48, VAR_37, VAR_54);


 FUNC_19(VAR_48, VAR_38, 0x13ff3fe0);

 FUNC_18(VAR_48, VAR_8, 1);

 FUNC_19(VAR_48, VAR_32, VAR_0);

 VAR_54 = VAR_4;

 FUNC_0("lane number=%d", VAR_48->lanes);
 VAR_54 |= ((VAR_6 << VAR_48->lanes) - VAR_6);

 FUNC_19(VAR_48, VAR_40,
    FUNC_7(VAR_48->dlane_swap));

 if (!(VAR_51 & VAR_21))
  FUNC_19(VAR_48, VAR_39,
   VAR_9);

 VAR_54 |= VAR_5;

 FUNC_19(VAR_48, VAR_36, VAR_54);
}
