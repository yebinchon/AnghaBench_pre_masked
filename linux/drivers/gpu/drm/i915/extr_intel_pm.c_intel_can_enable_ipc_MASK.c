
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int symmetric_memory; } ;
struct drm_i915_private {TYPE_1__ dram_info; } ;


 scalar_t__ FUNC_0 (struct drm_i915_private*) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;

__attribute__((used)) static bool FUNC_3(struct drm_i915_private *VAR_0)
{

 if (FUNC_2(VAR_0))
  return 0;


 if (FUNC_1(VAR_0) || FUNC_0(VAR_0))
  return VAR_0->dram_info.symmetric_memory;

 return 1;
}
