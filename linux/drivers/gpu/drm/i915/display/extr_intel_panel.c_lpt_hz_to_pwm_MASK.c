
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {scalar_t__ alternate_pwm_increment; } ;
struct intel_panel {TYPE_2__ backlight; } ;
struct TYPE_3__ {int dev; } ;
struct intel_connector {struct intel_panel panel; TYPE_1__ base; } ;
struct drm_i915_private {int dummy; } ;


 int FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 int FUNC_2 (int) ;
 struct drm_i915_private* FUNC_3 (int ) ;

__attribute__((used)) static u32 FUNC_4(struct intel_connector *VAR_0, u32 VAR_1)
{
 struct drm_i915_private *VAR_2 = FUNC_3(VAR_0->base.dev);
 struct intel_panel *VAR_3 = &VAR_0->panel;
 u32 VAR_4, VAR_5;

 if (VAR_3->backlight.alternate_pwm_increment)
  VAR_4 = 16;
 else
  VAR_4 = 128;

 if (FUNC_1(VAR_2))
  VAR_5 = FUNC_2(135);
 else
  VAR_5 = FUNC_2(24);

 return FUNC_0(VAR_5, VAR_1 * VAR_4);
}
