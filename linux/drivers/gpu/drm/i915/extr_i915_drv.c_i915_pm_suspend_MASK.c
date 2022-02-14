
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ switch_power_state; } ;
struct drm_i915_private {TYPE_1__ drm; } ;
struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (TYPE_1__*) ;
 struct drm_i915_private* FUNC_2 (struct device*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_2)
{
 struct drm_i915_private *VAR_3 = FUNC_2(VAR_2);

 if (!VAR_3) {
  FUNC_0(VAR_2, "DRM not initialized, aborting suspend.\n");
  return -VAR_1;
 }

 if (VAR_3->drm.switch_power_state == VAR_0)
  return 0;

 return FUNC_1(&VAR_3->drm);
}
