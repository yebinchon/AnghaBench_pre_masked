
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


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct drm_i915_private* FUNC_2 (int ) ;

__attribute__((used)) static u32 FUNC_3(struct intel_connector *VAR_0)
{
 struct drm_i915_private *VAR_1 = FUNC_2(VAR_0->base.dev);
 struct intel_panel *VAR_2 = &VAR_0->panel;

 return FUNC_1(FUNC_0(VAR_2->backlight.controller));
}
