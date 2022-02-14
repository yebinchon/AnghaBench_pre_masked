
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_vgpu {TYPE_1__* gvt; } ;
struct drm_i915_private {int dummy; } ;
struct TYPE_2__ {struct drm_i915_private* dev_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct intel_vgpu*) ;
 int FUNC_3 (struct intel_vgpu*) ;
 int FUNC_4 (struct intel_vgpu*,int ) ;

int FUNC_5(struct intel_vgpu *VAR_4, int VAR_5)
{
 struct drm_i915_private *VAR_6 = VAR_4->gvt->dev_priv;

 if (FUNC_1(VAR_5 < VAR_3 || VAR_5 >= VAR_1))
  return -VAR_0;

 if (FUNC_4(VAR_4, FUNC_0(VAR_5)) & VAR_2)
  return 1;

 if (FUNC_2(VAR_4) &&
   FUNC_3(VAR_4) == VAR_5)
  return 1;
 return 0;
}
