
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int* pri_latency; } ;
struct drm_i915_private {TYPE_1__ wm; } ;


 scalar_t__ FUNC_0 (struct drm_i915_private*) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;

__attribute__((used)) static unsigned int FUNC_2(struct drm_i915_private *VAR_0,
          int VAR_1)
{
 if (FUNC_1(VAR_0) || FUNC_0(VAR_0))
  return 2 * VAR_1;
 else
  return VAR_0->wm.pri_latency[VAR_1];
}
