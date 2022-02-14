
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_dp {int dummy; } ;
struct intel_crtc_state {scalar_t__ cpu_transcoder; } ;
struct drm_i915_private {int dummy; } ;


 int FUNC_0 (struct drm_i915_private*) ;
 scalar_t__ VAR_0 ;
 struct drm_i915_private* FUNC_1 (struct intel_dp*) ;

__attribute__((used)) static bool FUNC_2(struct intel_dp *VAR_1,
      const struct intel_crtc_state *VAR_2)
{
 struct drm_i915_private *VAR_3 = FUNC_1(VAR_1);

 return FUNC_0(VAR_3) >= 10 &&
  VAR_2->cpu_transcoder != VAR_0;
}
