
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_rps {int gpll_ref_freq; } ;
struct TYPE_2__ {struct intel_rps rps; } ;
struct drm_i915_private {TYPE_1__ gt_pm; } ;


 int FUNC_0 (int,int) ;

__attribute__((used)) static int FUNC_1(struct drm_i915_private *VAR_0, int VAR_1)
{
 struct intel_rps *VAR_2 = &VAR_0->gt_pm.rps;





 return FUNC_0(VAR_2->gpll_ref_freq * (VAR_1 - 0xb7), 1000);
}
