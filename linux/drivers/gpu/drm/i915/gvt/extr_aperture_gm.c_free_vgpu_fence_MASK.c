
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_4__ {struct i915_fence_reg** regs; } ;
struct intel_vgpu {TYPE_1__ fence; struct intel_gvt* gvt; } ;
struct intel_gvt {struct drm_i915_private* dev_priv; } ;
struct i915_fence_reg {int dummy; } ;
struct TYPE_5__ {int mutex; } ;
struct TYPE_6__ {TYPE_2__ vm; } ;
struct drm_i915_private {int runtime_pm; TYPE_3__ ggtt; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct intel_vgpu*) ;
 int FUNC_2 (struct i915_fence_reg*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 size_t FUNC_7 (struct intel_vgpu*) ;

__attribute__((used)) static void FUNC_8(struct intel_vgpu *VAR_0)
{
 struct intel_gvt *VAR_1 = VAR_0->gvt;
 struct drm_i915_private *VAR_2 = VAR_1->dev_priv;
 struct i915_fence_reg *VAR_3;
 u32 VAR_4;

 if (FUNC_0(!FUNC_7(VAR_0)))
  return;

 FUNC_3(&VAR_2->runtime_pm);

 FUNC_5(&VAR_2->ggtt.vm.mutex);
 FUNC_1(VAR_0);
 for (VAR_4 = 0; VAR_4 < FUNC_7(VAR_0); VAR_4++) {
  VAR_3 = VAR_0->fence.regs[VAR_4];
  FUNC_2(VAR_3);
  VAR_0->fence.regs[VAR_4] = ((void*)0);
 }
 FUNC_6(&VAR_2->ggtt.vm.mutex);

 FUNC_4(&VAR_2->runtime_pm);
}
