
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_wm_config {int num_pipes_active; } ;
struct drm_i915_private {int dummy; } ;


 unsigned int FUNC_0 (struct drm_i915_private const*,int) ;

__attribute__((used)) static unsigned int FUNC_1(const struct drm_i915_private *VAR_0,
          int VAR_1,
          const struct intel_wm_config *VAR_2)
{

 if (VAR_1 > 0 && VAR_2->num_pipes_active > 1)
  return 64;


 return FUNC_0(VAR_0, VAR_1);
}
