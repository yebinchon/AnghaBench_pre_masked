
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_crtc_state {int nv12_planes; } ;
struct drm_i915_private {int dummy; } ;


 int FUNC_0 (struct drm_i915_private*) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*,int) ;

__attribute__((used)) static bool FUNC_2(struct drm_i915_private *VAR_0,
     const struct intel_crtc_state *VAR_1)
{
 if (!VAR_1->nv12_planes)
  return 0;


 if (FUNC_1(VAR_0, 9) && !FUNC_0(VAR_0))
  return 1;

 return 0;
}
