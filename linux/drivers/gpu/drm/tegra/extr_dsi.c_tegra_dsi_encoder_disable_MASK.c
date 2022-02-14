
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tegra_output {scalar_t__ panel; } ;
struct tegra_dsi {int dev; } ;
struct tegra_dc {int dummy; } ;
struct drm_encoder {int crtc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 struct tegra_output* FUNC_3 (struct drm_encoder*) ;
 int FUNC_4 (struct tegra_dc*) ;
 int FUNC_5 (struct tegra_dc*,int ) ;
 int FUNC_6 (struct tegra_dc*,int ,int ) ;
 int FUNC_7 (struct tegra_dsi*) ;
 int FUNC_8 (struct tegra_dsi*) ;
 int FUNC_9 (struct tegra_dsi*) ;
 int FUNC_10 (struct tegra_dsi*) ;
 int FUNC_11 (struct tegra_dsi*,int) ;
 struct tegra_dsi* FUNC_12 (struct tegra_output*) ;
 struct tegra_dc* FUNC_13 (int ) ;

__attribute__((used)) static void FUNC_14(struct drm_encoder *VAR_2)
{
 struct tegra_output *VAR_3 = FUNC_3(VAR_2);
 struct tegra_dc *VAR_4 = FUNC_13(VAR_2->crtc);
 struct tegra_dsi *VAR_5 = FUNC_12(VAR_3);
 u32 VAR_6;
 int VAR_7;

 if (VAR_3->panel)
  FUNC_1(VAR_3->panel);

 FUNC_10(VAR_5);





 if (VAR_4) {
  VAR_6 = FUNC_5(VAR_4, VAR_0);
  VAR_6 &= ~VAR_1;
  FUNC_6(VAR_4, VAR_6, VAR_0);

  FUNC_4(VAR_4);
 }

 VAR_7 = FUNC_11(VAR_5, 100);
 if (VAR_7 < 0)
  FUNC_0(VAR_5->dev, "failed to idle DSI: %d\n", VAR_7);

 FUNC_8(VAR_5);

 if (VAR_3->panel)
  FUNC_2(VAR_3->panel);

 FUNC_7(VAR_5);

 FUNC_9(VAR_5);
}
