
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_i915_private {int dummy; } ;
struct TYPE_2__ {scalar_t__ gpu_reset_clobbers_display; } ;


 TYPE_1__* FUNC_0 (struct drm_i915_private*) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;

__attribute__((used)) static bool FUNC_2(struct drm_i915_private *VAR_0)
{
 return (FUNC_0(VAR_0)->gpu_reset_clobbers_display &&
  FUNC_1(VAR_0));
}
