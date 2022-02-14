
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int controller; } ;
struct intel_panel {TYPE_1__ backlight; } ;
struct TYPE_4__ {int dev; } ;
struct intel_connector {struct intel_panel panel; TYPE_2__ base; } ;
struct drm_i915_private {int dummy; } ;
struct drm_connector_state {int connector; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct drm_connector_state const*,int ) ;
 struct drm_i915_private* FUNC_4 (int ) ;
 struct intel_connector* FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(const struct drm_connector_state *VAR_3)
{
 struct intel_connector *VAR_4 = FUNC_5(VAR_3->connector);
 struct drm_i915_private *VAR_5 = FUNC_4(VAR_4->base.dev);
 struct intel_panel *VAR_6 = &VAR_4->panel;
 u32 VAR_7, VAR_8;

 FUNC_3(VAR_3, 0);

 VAR_7 = FUNC_1(FUNC_0(VAR_6->backlight.controller));
 FUNC_2(FUNC_0(VAR_6->backlight.controller),
   VAR_7 & ~VAR_0);

 if (VAR_6->backlight.controller == 1) {
  VAR_8 = FUNC_1(VAR_1);
  VAR_8 &= ~VAR_2;
  FUNC_2(VAR_1, VAR_8);
 }
}
