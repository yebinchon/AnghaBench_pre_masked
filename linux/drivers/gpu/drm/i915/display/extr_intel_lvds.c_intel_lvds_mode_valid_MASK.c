
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct drm_display_mode* fixed_mode; } ;
struct intel_connector {TYPE_1__ panel; } ;
struct drm_display_mode {int flags; scalar_t__ hdisplay; scalar_t__ vdisplay; int clock; } ;
struct drm_connector {int dev; } ;
typedef enum drm_mode_status { ____Placeholder_drm_mode_status } drm_mode_status ;
struct TYPE_4__ {int max_dotclk_freq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__* FUNC_0 (int ) ;
 struct intel_connector* FUNC_1 (struct drm_connector*) ;

__attribute__((used)) static enum drm_mode_status
FUNC_2(struct drm_connector *VAR_5,
        struct drm_display_mode *VAR_6)
{
 struct intel_connector *VAR_7 = FUNC_1(VAR_5);
 struct drm_display_mode *VAR_8 = VAR_7->panel.fixed_mode;
 int VAR_9 = FUNC_0(VAR_5->dev)->max_dotclk_freq;

 if (VAR_6->flags & VAR_0)
  return VAR_2;
 if (VAR_6->hdisplay > VAR_8->hdisplay)
  return VAR_4;
 if (VAR_6->vdisplay > VAR_8->vdisplay)
  return VAR_4;
 if (VAR_8->clock > VAR_9)
  return VAR_1;

 return VAR_3;
}
