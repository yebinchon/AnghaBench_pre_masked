
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mdfld_dsi_connector {int dummy; } ;
struct mdfld_dsi_config {struct drm_display_mode* fixed_mode; } ;
struct drm_display_mode {int vdisplay; int hdisplay; } ;
struct drm_device {int dev; } ;
struct drm_connector {struct drm_device* dev; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*,int ,int ) ;
 struct drm_display_mode* FUNC_2 (struct drm_device*,struct drm_display_mode*) ;
 int FUNC_3 (struct drm_connector*,struct drm_display_mode*) ;
 struct mdfld_dsi_connector* FUNC_4 (struct drm_connector*) ;
 struct mdfld_dsi_config* FUNC_5 (struct mdfld_dsi_connector*) ;

__attribute__((used)) static int FUNC_6(struct drm_connector *VAR_0)
{
 struct mdfld_dsi_connector *VAR_1 =
    FUNC_4(VAR_0);
 struct mdfld_dsi_config *VAR_2 =
    FUNC_5(VAR_1);
 struct drm_display_mode *VAR_3 = VAR_2->fixed_mode;
 struct drm_display_mode *VAR_4 = ((void*)0);
 struct drm_device *VAR_5 = VAR_0->dev;

 if (VAR_3) {
  FUNC_1(VAR_5->dev, "fixed_mode %dx%d\n",
    VAR_3->hdisplay, VAR_3->vdisplay);
  VAR_4 = FUNC_2(VAR_5, VAR_3);
  FUNC_3(VAR_0, VAR_4);
  return 1;
 }
 FUNC_0("Didn't get any modes!\n");
 return 0;
}
