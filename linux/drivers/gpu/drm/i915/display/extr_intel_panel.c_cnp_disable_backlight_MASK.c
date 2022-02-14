
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int controller; } ;
struct intel_panel {TYPE_2__ backlight; } ;
struct TYPE_3__ {int dev; } ;
struct intel_connector {struct intel_panel panel; TYPE_1__ base; } ;
struct drm_i915_private {int dummy; } ;
struct drm_connector_state {int connector; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct drm_connector_state const*,int ) ;
 struct drm_i915_private* FUNC_4 (int ) ;
 struct intel_connector* FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(const struct drm_connector_state *VAR_1)
{
 struct intel_connector *VAR_2 = FUNC_5(VAR_1->connector);
 struct drm_i915_private *VAR_3 = FUNC_4(VAR_2->base.dev);
 struct intel_panel *VAR_4 = &VAR_2->panel;
 u32 VAR_5;

 FUNC_3(VAR_1, 0);

 VAR_5 = FUNC_1(FUNC_0(VAR_4->backlight.controller));
 FUNC_2(FUNC_0(VAR_4->backlight.controller),
     VAR_5 & ~VAR_0);
}
