
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct drm_display_mode* fixed_mode; } ;
struct TYPE_5__ {TYPE_1__ panel; } ;
struct intel_sdvo_connector {TYPE_2__ base; } ;
struct intel_sdvo {int pixel_clock_min; int pixel_clock_max; } ;
struct drm_display_mode {int flags; int clock; scalar_t__ hdisplay; scalar_t__ vdisplay; } ;
struct drm_connector {int dev; } ;
typedef enum drm_mode_status { ____Placeholder_drm_mode_status } drm_mode_status ;
struct TYPE_6__ {int max_dotclk_freq; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct intel_sdvo_connector*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct intel_sdvo* FUNC_1 (struct drm_connector*) ;
 TYPE_3__* FUNC_2 (int ) ;
 struct intel_sdvo_connector* FUNC_3 (struct drm_connector*) ;

__attribute__((used)) static enum drm_mode_status
FUNC_4(struct drm_connector *VAR_6,
        struct drm_display_mode *VAR_7)
{
 struct intel_sdvo *VAR_8 = FUNC_1(VAR_6);
 struct intel_sdvo_connector *VAR_9 =
  FUNC_3(VAR_6);
 int VAR_10 = FUNC_2(VAR_6->dev)->max_dotclk_freq;

 if (VAR_7->flags & VAR_0)
  return VAR_3;

 if (VAR_8->pixel_clock_min > VAR_7->clock)
  return VAR_2;

 if (VAR_8->pixel_clock_max < VAR_7->clock)
  return VAR_1;

 if (VAR_7->clock > VAR_10)
  return VAR_1;

 if (FUNC_0(VAR_9)) {
  const struct drm_display_mode *VAR_11 =
   VAR_9->base.panel.fixed_mode;

  if (VAR_7->hdisplay > VAR_11->hdisplay)
   return VAR_5;

  if (VAR_7->vdisplay > VAR_11->vdisplay)
   return VAR_5;
 }

 return VAR_4;
}
