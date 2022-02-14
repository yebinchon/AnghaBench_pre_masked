
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_vgpu {TYPE_1__* gvt; } ;
struct drm_i915_private {int dummy; } ;
struct TYPE_2__ {struct drm_i915_private* dev_priv; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct intel_vgpu*,int ) ;
 int FUNC_2 (struct intel_vgpu*,int ) ;

__attribute__((used)) static int FUNC_3(struct intel_vgpu *VAR_4)
{
 struct drm_i915_private *VAR_5 = VAR_4->gvt->dev_priv;

 if (!(FUNC_2(VAR_4, FUNC_0(VAR_2)) & VAR_0))
  return 0;

 if (!(FUNC_1(VAR_4, VAR_3) & VAR_1))
  return 0;
 return 1;
}
