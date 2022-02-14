
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct i915_gpu_state {int iommu; int driver_caps; int runtime_info; int device_info; int suspend_count; int reset_count; int suspended; int wakelock; int awake; struct drm_i915_private* i915; } ;
struct TYPE_4__ {int suspended; int wakeref_count; } ;
struct TYPE_3__ {int awake; } ;
struct drm_i915_private {int caps; int suspend_count; int gpu_error; TYPE_2__ runtime_pm; TYPE_1__ gt; } ;


 int FUNC_0 (struct drm_i915_private*) ;
 int FUNC_1 (struct drm_i915_private*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 int FUNC_4 (int *,int ,int) ;

__attribute__((used)) static void FUNC_5(struct i915_gpu_state *VAR_1)
{
 struct drm_i915_private *VAR_2 = VAR_1->i915;

 VAR_1->awake = VAR_2->gt.awake;
 VAR_1->wakelock = FUNC_2(&VAR_2->runtime_pm.wakeref_count);
 VAR_1->suspended = VAR_2->runtime_pm.suspended;

 VAR_1->iommu = -1;



 VAR_1->reset_count = FUNC_3(&VAR_2->gpu_error);
 VAR_1->suspend_count = VAR_2->suspend_count;

 FUNC_4(&VAR_1->device_info,
        FUNC_0(VAR_2),
        sizeof(VAR_1->device_info));
 FUNC_4(&VAR_1->runtime_info,
        FUNC_1(VAR_2),
        sizeof(VAR_1->runtime_info));
 VAR_1->driver_caps = VAR_2->caps;
}
