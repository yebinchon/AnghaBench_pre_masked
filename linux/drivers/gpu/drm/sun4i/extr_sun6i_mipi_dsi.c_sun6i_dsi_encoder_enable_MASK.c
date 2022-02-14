
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct phy_configure_opts_mipi_dphy {int dummy; } ;
union phy_configure_opts {struct phy_configure_opts_mipi_dphy mipi_dphy; int member_0; } ;
typedef int u16 ;
struct sun6i_dsi {int panel; int dphy; int regs; int dev; struct mipi_dsi_device* device; } ;
struct mipi_dsi_device {int lanes; int format; } ;
struct drm_encoder {TYPE_2__* crtc; } ;
struct drm_display_mode {int clock; } ;
struct TYPE_4__ {TYPE_1__* state; } ;
struct TYPE_3__ {struct drm_display_mode adjusted_mode; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 struct sun6i_dsi* FUNC_5 (struct drm_encoder*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,union phy_configure_opts*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int,int ,int ,struct phy_configure_opts_mipi_dphy*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,int ,int) ;
 int FUNC_14 (struct sun6i_dsi*,struct drm_display_mode*) ;
 int FUNC_15 (struct sun6i_dsi*,struct drm_display_mode*) ;
 int FUNC_16 (struct sun6i_dsi*,struct drm_display_mode*) ;
 int FUNC_17 (struct sun6i_dsi*,struct drm_display_mode*) ;
 int FUNC_18 (struct sun6i_dsi*,struct drm_display_mode*) ;
 int FUNC_19 (struct sun6i_dsi*,int ) ;
 int FUNC_20 (int) ;

__attribute__((used)) static void FUNC_21(struct drm_encoder *VAR_7)
{
 struct drm_display_mode *VAR_8 = &VAR_7->crtc->state->adjusted_mode;
 struct sun6i_dsi *VAR_9 = FUNC_5(VAR_7);
 struct mipi_dsi_device *VAR_10 = VAR_9->device;
 union phy_configure_opts VAR_11 = { 0 };
 struct phy_configure_opts_mipi_dphy *VAR_12 = &VAR_11.mipi_dphy;
 u16 VAR_13;

 FUNC_0("Enabling DSI output\n");

 FUNC_12(VAR_9->dev);

 VAR_13 = FUNC_14(VAR_9, VAR_8);
 FUNC_13(VAR_9->regs, VAR_3,
       FUNC_2(VAR_13) |
       VAR_4 |
       VAR_6 |
       VAR_5);

 FUNC_15(VAR_9, VAR_8);
 FUNC_17(VAR_9, VAR_8);
 FUNC_16(VAR_9, VAR_8);
 FUNC_18(VAR_9, VAR_8);

 FUNC_8(VAR_9->dphy);

 FUNC_9(VAR_8->clock * 1000,
      FUNC_6(VAR_10->format),
      VAR_10->lanes, VAR_12);

 FUNC_11(VAR_9->dphy, VAR_2);
 FUNC_7(VAR_9->dphy, &VAR_11);
 FUNC_10(VAR_9->dphy);

 if (!FUNC_1(VAR_9->panel))
  FUNC_4(VAR_9->panel);
 if (!FUNC_1(VAR_9->panel))
  FUNC_3(VAR_9->panel);

 FUNC_19(VAR_9, VAR_0);

 FUNC_20(1000);

 FUNC_19(VAR_9, VAR_1);
}
