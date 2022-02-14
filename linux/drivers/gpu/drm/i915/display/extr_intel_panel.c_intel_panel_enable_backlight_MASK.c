
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int present; } ;
struct intel_panel {TYPE_2__ backlight; } ;
struct TYPE_5__ {int crtc; } ;
struct intel_crtc_state {TYPE_1__ base; } ;
struct TYPE_7__ {int dev; } ;
struct intel_connector {struct intel_panel panel; TYPE_3__ base; } ;
struct drm_i915_private {int backlight_lock; } ;
struct drm_connector_state {int connector; } ;
typedef enum pipe { ____Placeholder_pipe } pipe ;
struct TYPE_8__ {int pipe; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct intel_crtc_state const*,struct drm_connector_state const*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int) ;
 struct drm_i915_private* FUNC_5 (int ) ;
 struct intel_connector* FUNC_6 (int ) ;
 TYPE_4__* FUNC_7 (int ) ;

void FUNC_8(const struct intel_crtc_state *VAR_0,
      const struct drm_connector_state *VAR_1)
{
 struct intel_connector *VAR_2 = FUNC_6(VAR_1->connector);
 struct drm_i915_private *VAR_3 = FUNC_5(VAR_2->base.dev);
 struct intel_panel *VAR_4 = &VAR_2->panel;
 enum pipe VAR_5 = FUNC_7(VAR_0->base.crtc)->pipe;

 if (!VAR_4->backlight.present)
  return;

 FUNC_0("pipe %c\n", FUNC_4(VAR_5));

 FUNC_2(&VAR_3->backlight_lock);

 FUNC_1(VAR_0, VAR_1);

 FUNC_3(&VAR_3->backlight_lock);
}
