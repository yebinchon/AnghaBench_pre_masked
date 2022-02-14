
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mdfld_dsi_encoder {int dummy; } ;
struct mdfld_dsi_config {struct drm_display_mode* fixed_mode; } ;
struct drm_encoder {int dummy; } ;
struct drm_display_mode {int clock; int vtotal; int vsync_end; int vsync_start; int vdisplay; int htotal; int hsync_end; int hsync_start; int hdisplay; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_display_mode*,int ) ;
 struct mdfld_dsi_encoder* FUNC_1 (struct drm_encoder*) ;
 struct mdfld_dsi_config* FUNC_2 (struct mdfld_dsi_encoder*) ;

bool FUNC_3(struct drm_encoder *VAR_1,
         const struct drm_display_mode *VAR_2,
         struct drm_display_mode *VAR_3)
{
 struct mdfld_dsi_encoder *VAR_4 = FUNC_1(VAR_1);
 struct mdfld_dsi_config *VAR_5 =
    FUNC_2(VAR_4);
 struct drm_display_mode *VAR_6 = VAR_5->fixed_mode;

 if (VAR_6) {
  VAR_3->hdisplay = VAR_6->hdisplay;
  VAR_3->hsync_start = VAR_6->hsync_start;
  VAR_3->hsync_end = VAR_6->hsync_end;
  VAR_3->htotal = VAR_6->htotal;
  VAR_3->vdisplay = VAR_6->vdisplay;
  VAR_3->vsync_start = VAR_6->vsync_start;
  VAR_3->vsync_end = VAR_6->vsync_end;
  VAR_3->vtotal = VAR_6->vtotal;
  VAR_3->clock = VAR_6->clock;
  FUNC_0(VAR_3, VAR_0);
 }
 return 1;
}
