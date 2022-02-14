
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct intel_dp {int pps_reset; } ;
struct TYPE_3__ {int controller; } ;
struct TYPE_4__ {TYPE_1__ backlight; } ;
struct drm_i915_private {int pps_mutex; TYPE_2__ vbt; } ;


 int FUNC_0 (int) ;
 struct drm_i915_private* FUNC_1 (struct intel_dp*) ;
 int FUNC_2 (struct intel_dp*,int) ;
 int FUNC_3 (struct intel_dp*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int
FUNC_5(struct intel_dp *VAR_0)
{
 struct drm_i915_private *VAR_1 = FUNC_1(VAR_0);
 int VAR_2 = VAR_1->vbt.backlight.controller;

 FUNC_4(&VAR_1->pps_mutex);


 FUNC_0(!FUNC_3(VAR_0));

 if (!VAR_0->pps_reset)
  return VAR_2;

 VAR_0->pps_reset = 0;





 FUNC_2(VAR_0, 0);

 return VAR_2;
}
