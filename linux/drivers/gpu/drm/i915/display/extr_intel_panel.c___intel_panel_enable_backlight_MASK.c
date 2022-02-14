
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ max; scalar_t__ level; scalar_t__ min; int enabled; TYPE_2__* device; int (* enable ) (struct intel_crtc_state const*,struct drm_connector_state const*) ;} ;
struct intel_panel {TYPE_3__ backlight; } ;
struct intel_crtc_state {int dummy; } ;
struct intel_connector {struct intel_panel panel; } ;
struct drm_connector_state {int connector; } ;
struct TYPE_4__ {int power; int max_brightness; int brightness; } ;
struct TYPE_5__ {TYPE_1__ props; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct intel_connector*,scalar_t__,int ) ;
 int FUNC_2 (struct intel_crtc_state const*,struct drm_connector_state const*) ;
 struct intel_connector* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(const struct intel_crtc_state *VAR_1,
        const struct drm_connector_state *VAR_2)
{
 struct intel_connector *VAR_3 = FUNC_3(VAR_2->connector);
 struct intel_panel *VAR_4 = &VAR_3->panel;

 FUNC_0(VAR_4->backlight.max == 0);

 if (VAR_4->backlight.level <= VAR_4->backlight.min) {
  VAR_4->backlight.level = VAR_4->backlight.max;
  if (VAR_4->backlight.device)
   VAR_4->backlight.device->props.brightness =
    FUNC_1(VAR_3,
       VAR_4->backlight.level,
       VAR_4->backlight.device->props.max_brightness);
 }

 VAR_4->backlight.enable(VAR_1, VAR_2);
 VAR_4->backlight.enabled = 1;
 if (VAR_4->backlight.device)
  VAR_4->backlight.device->props.power = VAR_0;
}
