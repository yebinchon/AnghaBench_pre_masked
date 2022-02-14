
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_dp {int dummy; } ;
struct drm_i915_private {int rawclk_freq; } ;


 int FUNC_0 (int ,int) ;
 struct drm_i915_private* FUNC_1 (struct intel_dp*) ;

__attribute__((used)) static u32 FUNC_2(struct intel_dp *VAR_0, int VAR_1)
{
 struct drm_i915_private *VAR_2 = FUNC_1(VAR_0);

 if (VAR_1)
  return 0;





 return FUNC_0(VAR_2->rawclk_freq, 2000);
}
