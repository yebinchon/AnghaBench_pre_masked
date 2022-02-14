
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_vgpu {TYPE_1__* gvt; } ;
struct drm_i915_private {int dummy; } ;
struct TYPE_2__ {struct drm_i915_private* dev_priv; } ;


 scalar_t__ FUNC_0 (struct drm_i915_private*) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (struct intel_vgpu*,int ) ;

void FUNC_4(struct intel_vgpu *VAR_2)
{
 struct drm_i915_private *VAR_3 = VAR_2->gvt->dev_priv;

 if (FUNC_2(VAR_3) || FUNC_1(VAR_3) ||
     FUNC_0(VAR_3))
  FUNC_3(VAR_2, VAR_1);
 else
  FUNC_3(VAR_2, VAR_0);
}
