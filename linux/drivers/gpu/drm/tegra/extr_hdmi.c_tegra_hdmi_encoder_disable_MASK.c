
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tegra_output {int dummy; } ;
struct tegra_hdmi {int dev; scalar_t__ stereo; int dvi; } ;
struct tegra_dc {int dummy; } ;
struct drm_encoder {int crtc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct tegra_output* FUNC_0 (struct drm_encoder*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct tegra_dc*) ;
 int FUNC_3 (struct tegra_dc*,int ) ;
 int FUNC_4 (struct tegra_dc*,int ,int ) ;
 int FUNC_5 (struct tegra_hdmi*) ;
 int FUNC_6 (struct tegra_hdmi*) ;
 int FUNC_7 (struct tegra_hdmi*) ;
 int FUNC_8 (struct tegra_hdmi*) ;
 int FUNC_9 (struct tegra_hdmi*,int ,int ) ;
 struct tegra_hdmi* FUNC_10 (struct tegra_output*) ;
 struct tegra_dc* FUNC_11 (int ) ;

__attribute__((used)) static void FUNC_12(struct drm_encoder *VAR_4)
{
 struct tegra_output *VAR_5 = FUNC_0(VAR_4);
 struct tegra_dc *VAR_6 = FUNC_11(VAR_4->crtc);
 struct tegra_hdmi *VAR_7 = FUNC_10(VAR_5);
 u32 VAR_8;





 if (VAR_6) {
  VAR_8 = FUNC_3(VAR_6, VAR_0);
  VAR_8 &= ~VAR_1;
  FUNC_4(VAR_6, VAR_8, VAR_0);

  FUNC_2(VAR_6);
 }

 if (!VAR_7->dvi) {
  if (VAR_7->stereo)
   FUNC_8(VAR_7);

  FUNC_6(VAR_7);
  FUNC_7(VAR_7);
  FUNC_5(VAR_7);
 }

 FUNC_9(VAR_7, 0, VAR_2);
 FUNC_9(VAR_7, 0, VAR_3);

 FUNC_1(VAR_7->dev);
}
