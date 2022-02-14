
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_5__ {scalar_t__ max; scalar_t__ min; } ;
struct intel_panel {TYPE_2__ backlight; } ;
struct TYPE_4__ {int dev; } ;
struct intel_connector {struct intel_panel panel; TYPE_1__ base; } ;
struct drm_i915_private {int quirks; } ;
struct TYPE_6__ {scalar_t__ invert_brightness; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_3__ VAR_1 ;
 struct drm_i915_private* FUNC_1 (int ) ;

__attribute__((used)) static u32 FUNC_2(struct intel_connector *VAR_2,
       u32 VAR_3)
{
 struct drm_i915_private *VAR_4 = FUNC_1(VAR_2->base.dev);
 struct intel_panel *VAR_5 = &VAR_2->panel;

 FUNC_0(VAR_5->backlight.max == 0);

 if (VAR_1.invert_brightness < 0)
  return VAR_3;

 if (VAR_1.invert_brightness > 0 ||
     VAR_4->quirks & VAR_0) {
  return VAR_5->backlight.max - VAR_3 + VAR_5->backlight.min;
 }

 return VAR_3;
}
