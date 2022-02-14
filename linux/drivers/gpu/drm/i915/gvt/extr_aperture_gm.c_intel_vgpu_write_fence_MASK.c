
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef size_t u32 ;
struct TYPE_2__ {struct i915_fence_reg** regs; } ;
struct intel_vgpu {TYPE_1__ fence; struct intel_gvt* gvt; } ;
struct intel_gvt {struct drm_i915_private* dev_priv; } ;
struct i915_fence_reg {int id; } ;
struct drm_i915_private {int runtime_pm; } ;
typedef int i915_reg_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 size_t FUNC_8 (struct intel_vgpu*) ;

void FUNC_9(struct intel_vgpu *VAR_0,
  u32 VAR_1, u64 VAR_2)
{
 struct intel_gvt *VAR_3 = VAR_0->gvt;
 struct drm_i915_private *VAR_4 = VAR_3->dev_priv;
 struct i915_fence_reg *VAR_5;
 i915_reg_t VAR_6, VAR_7;

 FUNC_5(&VAR_4->runtime_pm);

 if (FUNC_4(VAR_1 >= FUNC_8(VAR_0)))
  return;

 VAR_5 = VAR_0->fence.regs[VAR_1];
 if (FUNC_4(!VAR_5))
  return;

 VAR_6 = FUNC_1(VAR_5->id);
 VAR_7 = FUNC_0(VAR_5->id);

 FUNC_2(VAR_6, 0);
 FUNC_3(VAR_6);

 FUNC_2(VAR_7, FUNC_7(VAR_2));
 FUNC_2(VAR_6, FUNC_6(VAR_2));
 FUNC_3(VAR_6);
}
