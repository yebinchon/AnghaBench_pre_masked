
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct psb_intel_sdvo {scalar_t__ pixel_clock_min; scalar_t__ pixel_clock_max; TYPE_1__* sdvo_lvds_fixed_mode; scalar_t__ is_lvds; } ;
struct drm_display_mode {int flags; scalar_t__ clock; scalar_t__ hdisplay; scalar_t__ vdisplay; } ;
struct drm_connector {int dummy; } ;
typedef enum drm_mode_status { ____Placeholder_drm_mode_status } drm_mode_status ;
struct TYPE_2__ {scalar_t__ hdisplay; scalar_t__ vdisplay; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct psb_intel_sdvo* FUNC_0 (struct drm_connector*) ;

__attribute__((used)) static enum drm_mode_status FUNC_1(struct drm_connector *VAR_6,
     struct drm_display_mode *VAR_7)
{
 struct psb_intel_sdvo *VAR_8 = FUNC_0(VAR_6);

 if (VAR_7->flags & VAR_0)
  return VAR_3;

 if (VAR_8->pixel_clock_min > VAR_7->clock)
  return VAR_2;

 if (VAR_8->pixel_clock_max < VAR_7->clock)
  return VAR_1;

 if (VAR_8->is_lvds) {
  if (VAR_7->hdisplay > VAR_8->sdvo_lvds_fixed_mode->hdisplay)
   return VAR_5;

  if (VAR_7->vdisplay > VAR_8->sdvo_lvds_fixed_mode->vdisplay)
   return VAR_5;
 }

 return VAR_4;
}
