
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct intel_vgpu {TYPE_1__* gvt; } ;
struct drm_i915_private {int dummy; } ;
struct TYPE_2__ {struct drm_i915_private* dev_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct drm_i915_private*) ;
 int FUNC_1 (struct intel_vgpu*,int ) ;

__attribute__((used)) static bool FUNC_2(struct intel_vgpu *VAR_2)
{
 struct drm_i915_private *VAR_3 = VAR_2->gvt->dev_priv;

 if (FUNC_0(VAR_3) == 9 || FUNC_0(VAR_3) == 10) {
  u32 VAR_4 = FUNC_1(VAR_2, VAR_1) &
   VAR_0;

  return VAR_4 == VAR_0;
 } else if (FUNC_0(VAR_3) >= 11) {

  return 1;
 } else
  return 0;
}
