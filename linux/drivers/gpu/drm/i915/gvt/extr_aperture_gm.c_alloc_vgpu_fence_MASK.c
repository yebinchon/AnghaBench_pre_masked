
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct i915_fence_reg** regs; } ;
struct intel_vgpu {TYPE_1__ fence; struct intel_gvt* gvt; } ;
struct intel_runtime_pm {int dummy; } ;
struct intel_gvt {struct drm_i915_private* dev_priv; } ;
struct i915_fence_reg {int dummy; } ;
struct TYPE_5__ {int mutex; } ;
struct TYPE_6__ {TYPE_2__ vm; } ;
struct drm_i915_private {TYPE_3__ ggtt; struct intel_runtime_pm runtime_pm; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct i915_fence_reg*) ;
 int FUNC_1 (struct intel_vgpu*) ;
 int FUNC_2 (char*) ;
 struct i915_fence_reg* FUNC_3 (struct drm_i915_private*) ;
 int FUNC_4 (struct i915_fence_reg*) ;
 int FUNC_5 (struct intel_runtime_pm*) ;
 int FUNC_6 (struct intel_runtime_pm*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct intel_vgpu*) ;

__attribute__((used)) static int FUNC_10(struct intel_vgpu *VAR_1)
{
 struct intel_gvt *VAR_2 = VAR_1->gvt;
 struct drm_i915_private *VAR_3 = VAR_2->dev_priv;
 struct intel_runtime_pm *VAR_4 = &VAR_3->runtime_pm;
 struct i915_fence_reg *VAR_5;
 int VAR_6;

 FUNC_5(VAR_4);


 FUNC_7(&VAR_3->ggtt.vm.mutex);

 for (VAR_6 = 0; VAR_6 < FUNC_9(VAR_1); VAR_6++) {
  VAR_5 = FUNC_3(VAR_3);
  if (FUNC_0(VAR_5))
   goto out_free_fence;

  VAR_1->fence.regs[VAR_6] = VAR_5;
 }

 FUNC_1(VAR_1);

 FUNC_8(&VAR_3->ggtt.vm.mutex);
 FUNC_6(VAR_4);
 return 0;
out_free_fence:
 FUNC_2("Failed to alloc fences\n");

 for (VAR_6 = 0; VAR_6 < FUNC_9(VAR_1); VAR_6++) {
  VAR_5 = VAR_1->fence.regs[VAR_6];
  if (!VAR_5)
   continue;
  FUNC_4(VAR_5);
  VAR_1->fence.regs[VAR_6] = ((void*)0);
 }
 FUNC_8(&VAR_3->ggtt.vm.mutex);
 FUNC_6(VAR_4);
 return -VAR_0;
}
