
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mdfld_dsi_encoder {int dummy; } ;
struct mdfld_dsi_dpi_output {int dummy; } ;
struct mdfld_dsi_config {struct drm_device* dev; } ;
struct drm_psb_private {int * dpi_panel_on; } ;
struct drm_device {int dev; struct drm_psb_private* dev_private; } ;


 struct mdfld_dsi_dpi_output* FUNC_0 (struct mdfld_dsi_encoder*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct drm_device*,int ,int) ;
 int FUNC_3 (struct drm_device*,int ,int) ;
 int FUNC_4 (struct mdfld_dsi_dpi_output*,int) ;
 struct mdfld_dsi_config* FUNC_5 (struct mdfld_dsi_encoder*) ;
 int FUNC_6 (struct drm_device*,int) ;
 int FUNC_7 (struct drm_device*) ;

__attribute__((used)) static void FUNC_8(struct mdfld_dsi_encoder *VAR_0,
        int VAR_1)
{
 struct mdfld_dsi_dpi_output *VAR_2 =
    FUNC_0(VAR_0);
 struct mdfld_dsi_config *VAR_3 =
    FUNC_5(VAR_0);
 struct drm_device *VAR_4 = VAR_3->dev;
 struct drm_psb_private *VAR_5 = VAR_4->dev_private;

 if (!VAR_5->dpi_panel_on[VAR_1]) {
  FUNC_1(VAR_4->dev, "DPI panel is already off\n");
  return;
 }
 FUNC_7(VAR_4);
 FUNC_6(VAR_4, 1);
 FUNC_3(VAR_4, 0, VAR_1);
 FUNC_4(VAR_2, VAR_1);
 FUNC_2(VAR_4, 0, VAR_1);
}
