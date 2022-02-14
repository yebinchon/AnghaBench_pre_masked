
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct intel_vgpu {TYPE_1__* gvt; } ;
struct drm_i915_private {int dummy; } ;
struct TYPE_2__ {struct drm_i915_private* dev_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct drm_i915_private*) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct intel_vgpu*) ;
 int FUNC_4 (struct intel_vgpu*,int ,int ,int ) ;

int FUNC_5(struct intel_vgpu *VAR_4, u64 VAR_5)
{
 struct drm_i915_private *VAR_6 = VAR_4->gvt->dev_priv;

 FUNC_3(VAR_4);

 if (FUNC_2(VAR_6) || FUNC_1(VAR_6) ||
     FUNC_0(VAR_6))
  return FUNC_4(VAR_4, VAR_3, VAR_1,
      VAR_5);
 else
  return FUNC_4(VAR_4, VAR_2, VAR_0,
      VAR_5);
}
