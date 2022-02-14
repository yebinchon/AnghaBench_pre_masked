
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_vgpu {TYPE_1__* gvt; } ;
struct drm_i915_private {int dummy; } ;
struct TYPE_2__ {struct drm_i915_private* dev_priv; } ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (struct intel_vgpu*,unsigned int,int ) ;
 int FUNC_2 (struct drm_i915_private*) ;
 int FUNC_3 (struct drm_i915_private*) ;
 unsigned int FUNC_4 (unsigned int) ;
 int FUNC_5 (struct intel_vgpu*,unsigned int,void*,unsigned int) ;
 int FUNC_6 (struct intel_vgpu*,int ) ;
 int FUNC_7 (struct intel_vgpu*,unsigned int,void*,unsigned int) ;

__attribute__((used)) static int FUNC_8(struct intel_vgpu *VAR_0, unsigned int VAR_1,
  void *VAR_2, unsigned int VAR_3)
{
 struct drm_i915_private *VAR_4 = VAR_0->gvt->dev_priv;
 unsigned int VAR_5 = FUNC_4(VAR_1);
 int VAR_6;

 VAR_6 = FUNC_5(VAR_0, VAR_5, VAR_2, VAR_3);
 if (VAR_6)
  return VAR_6;
 FUNC_7(VAR_0, VAR_1, VAR_2, VAR_3);

 FUNC_3(VAR_4);
 FUNC_1(VAR_0, VAR_5,
   FUNC_6(VAR_0, FUNC_0(VAR_5)));
 FUNC_2(VAR_4);
 return 0;
}
