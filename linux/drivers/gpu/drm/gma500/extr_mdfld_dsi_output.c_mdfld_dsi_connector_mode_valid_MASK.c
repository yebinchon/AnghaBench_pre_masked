
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mdfld_dsi_connector {int dummy; } ;
struct mdfld_dsi_config {struct drm_display_mode* fixed_mode; } ;
struct drm_display_mode {int flags; scalar_t__ hdisplay; scalar_t__ vdisplay; } ;
struct drm_connector {int dummy; } ;
typedef enum drm_mode_status { ____Placeholder_drm_mode_status } drm_mode_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct mdfld_dsi_connector* FUNC_0 (struct drm_connector*) ;
 struct mdfld_dsi_config* FUNC_1 (struct mdfld_dsi_connector*) ;

__attribute__((used)) static enum drm_mode_status FUNC_2(struct drm_connector *VAR_6,
      struct drm_display_mode *VAR_7)
{
 struct mdfld_dsi_connector *VAR_8 =
     FUNC_0(VAR_6);
 struct mdfld_dsi_config *VAR_9 =
     FUNC_1(VAR_8);
 struct drm_display_mode *VAR_10 = VAR_9->fixed_mode;

 if (VAR_7->flags & VAR_0)
  return VAR_2;

 if (VAR_7->flags & VAR_1)
  return VAR_3;






 if (VAR_10) {
  if (VAR_7->hdisplay != VAR_10->hdisplay)
   return VAR_5;

  if (VAR_7->vdisplay != VAR_10->vdisplay)
   return VAR_5;
 }

 return VAR_4;
}
