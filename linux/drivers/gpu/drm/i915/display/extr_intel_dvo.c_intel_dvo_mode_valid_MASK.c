
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {TYPE_1__* dev_ops; } ;
struct intel_dvo {TYPE_5__ dev; } ;
struct drm_display_mode {int clock; int flags; scalar_t__ hdisplay; scalar_t__ vdisplay; } ;
struct drm_connector {int dev; } ;
typedef enum drm_mode_status { ____Placeholder_drm_mode_status } drm_mode_status ;
struct TYPE_9__ {int max_dotclk_freq; } ;
struct TYPE_7__ {struct drm_display_mode* fixed_mode; } ;
struct TYPE_8__ {TYPE_2__ panel; } ;
struct TYPE_6__ {int (* mode_valid ) (TYPE_5__*,struct drm_display_mode*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct intel_dvo* FUNC_0 (struct drm_connector*) ;
 int FUNC_1 (TYPE_5__*,struct drm_display_mode*) ;
 TYPE_4__* FUNC_2 (int ) ;
 TYPE_3__* FUNC_3 (struct drm_connector*) ;

__attribute__((used)) static enum drm_mode_status
FUNC_4(struct drm_connector *VAR_4,
       struct drm_display_mode *VAR_5)
{
 struct intel_dvo *VAR_6 = FUNC_0(VAR_4);
 const struct drm_display_mode *VAR_7 =
  FUNC_3(VAR_4)->panel.fixed_mode;
 int VAR_8 = FUNC_2(VAR_4->dev)->max_dotclk_freq;
 int VAR_9 = VAR_5->clock;

 if (VAR_5->flags & VAR_0)
  return VAR_2;



 if (VAR_7) {
  if (VAR_5->hdisplay > VAR_7->hdisplay)
   return VAR_3;
  if (VAR_5->vdisplay > VAR_7->vdisplay)
   return VAR_3;

  VAR_9 = VAR_7->clock;
 }

 if (VAR_9 > VAR_8)
  return VAR_1;

 return VAR_6->dev.dev_ops->mode_valid(&VAR_6->dev, VAR_5);
}
