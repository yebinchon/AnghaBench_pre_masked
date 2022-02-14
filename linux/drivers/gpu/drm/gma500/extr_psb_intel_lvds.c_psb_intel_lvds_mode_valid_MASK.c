
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct gma_encoder {scalar_t__ type; } ;
struct TYPE_4__ {struct drm_display_mode* panel_fixed_mode2; struct drm_display_mode* panel_fixed_mode; } ;
struct drm_psb_private {TYPE_2__ mode_dev; } ;
struct drm_display_mode {int flags; scalar_t__ hdisplay; scalar_t__ vdisplay; } ;
struct drm_connector {TYPE_1__* dev; } ;
typedef enum drm_mode_status { ____Placeholder_drm_mode_status } drm_mode_status ;
struct TYPE_3__ {struct drm_psb_private* dev_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct gma_encoder* FUNC_0 (struct drm_connector*) ;

enum drm_mode_status FUNC_1(struct drm_connector *VAR_7,
     struct drm_display_mode *VAR_8)
{
 struct drm_psb_private *VAR_9 = VAR_7->dev->dev_private;
 struct gma_encoder *VAR_10 = FUNC_0(VAR_7);
 struct drm_display_mode *VAR_11 =
     VAR_9->mode_dev.panel_fixed_mode;

 if (VAR_10->type == VAR_2)
  VAR_11 = VAR_9->mode_dev.panel_fixed_mode2;


 if (VAR_8->flags & VAR_0)
  return VAR_3;


 if (VAR_8->flags & VAR_1)
  return VAR_4;

 if (VAR_11) {
  if (VAR_8->hdisplay > VAR_11->hdisplay)
   return VAR_6;
  if (VAR_8->vdisplay > VAR_11->vdisplay)
   return VAR_6;
 }
 return VAR_5;
}
