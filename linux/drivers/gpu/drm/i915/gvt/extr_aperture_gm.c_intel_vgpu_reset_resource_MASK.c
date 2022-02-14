
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_vgpu {TYPE_1__* gvt; } ;
struct drm_i915_private {int runtime_pm; } ;
struct TYPE_2__ {struct drm_i915_private* dev_priv; } ;


 int FUNC_0 (struct intel_vgpu*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct intel_vgpu *VAR_0)
{
 struct drm_i915_private *VAR_1 = VAR_0->gvt->dev_priv;

 FUNC_1(&VAR_1->runtime_pm);
 FUNC_0(VAR_0);
 FUNC_2(&VAR_1->runtime_pm);
}
