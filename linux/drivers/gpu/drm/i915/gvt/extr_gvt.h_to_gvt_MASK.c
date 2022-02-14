
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_gvt {int dummy; } ;
struct drm_i915_private {struct intel_gvt* gvt; } ;



__attribute__((used)) static inline struct intel_gvt *FUNC_0(struct drm_i915_private *VAR_0)
{
 return VAR_0->gvt;
}
