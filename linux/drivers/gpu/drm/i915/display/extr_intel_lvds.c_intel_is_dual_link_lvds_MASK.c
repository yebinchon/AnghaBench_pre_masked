
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_encoder {int base; } ;
struct drm_i915_private {int dummy; } ;
struct TYPE_2__ {scalar_t__ is_dual_link; } ;


 struct intel_encoder* FUNC_0 (struct drm_i915_private*) ;
 TYPE_1__* FUNC_1 (int *) ;

bool FUNC_2(struct drm_i915_private *VAR_0)
{
 struct intel_encoder *VAR_1 = FUNC_0(VAR_0);

 return VAR_1 && FUNC_1(&VAR_1->base)->is_dual_link;
}
