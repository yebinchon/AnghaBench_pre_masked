
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct drm_display_mode* panel_fixed_mode; } ;
struct drm_psb_private {TYPE_1__ mode_dev; } ;
struct drm_display_mode {int flags; scalar_t__ hdisplay; scalar_t__ vdisplay; } ;
struct drm_device {struct drm_psb_private* dev_private; } ;
struct drm_connector {struct drm_device* dev; } ;
typedef enum drm_mode_status { ____Placeholder_drm_mode_status } drm_mode_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static enum drm_mode_status FUNC_0(struct drm_connector *VAR_6,
         struct drm_display_mode *VAR_7)
{
 struct drm_device *VAR_8 = VAR_6->dev;
 struct drm_psb_private *VAR_9 = VAR_8->dev_private;
 struct drm_display_mode *VAR_10 =
     VAR_9->mode_dev.panel_fixed_mode;


 if (VAR_7->flags & VAR_0)
  return VAR_2;


 if (VAR_7->flags & VAR_1)
  return VAR_3;

 if (VAR_10) {
  if (VAR_7->hdisplay > VAR_10->hdisplay)
   return VAR_5;
  if (VAR_7->vdisplay > VAR_10->vdisplay)
   return VAR_5;
 }
 return VAR_4;
}
