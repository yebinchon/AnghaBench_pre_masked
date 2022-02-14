
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mdfld_dsi_config {struct drm_display_mode* mode; struct drm_device* dev; } ;
struct drm_display_mode {int htotal; int hdisplay; int hsync_end; int hsync_start; int vtotal; int vdisplay; int vsync_end; int vsync_start; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_1(struct mdfld_dsi_config *VAR_7, int VAR_8)
{
 struct drm_device *VAR_9 = VAR_7->dev;
 struct drm_display_mode *VAR_10 = VAR_7->mode;

 FUNC_0(VAR_2, ((VAR_10->htotal - 1) << 16) | (VAR_10->hdisplay - 1));
 FUNC_0(VAR_0, ((VAR_10->htotal - 1) << 16) | (VAR_10->hdisplay - 1));
 FUNC_0(VAR_1,
  ((VAR_10->hsync_end - 1) << 16) | (VAR_10->hsync_start - 1));

 FUNC_0(VAR_6, ((VAR_10->vtotal - 1) << 16) | (VAR_10->vdisplay - 1));
 FUNC_0(VAR_4, ((VAR_10->vtotal - 1) << 16) | (VAR_10->vdisplay - 1));
 FUNC_0(VAR_5,
  ((VAR_10->vsync_end - 1) << 16) | (VAR_10->vsync_start - 1));

 FUNC_0(VAR_3,
  ((VAR_10->hdisplay - 1) << 16) | (VAR_10->vdisplay - 1));
}
