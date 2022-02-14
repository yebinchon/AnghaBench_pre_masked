
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vgpu_sched_data {int active; } ;
struct intel_vgpu {TYPE_2__* gvt; int id; struct vgpu_sched_data* sched_data; } ;
struct intel_gvt_workload_scheduler {int need_reschedule; int mmio_context_lock; struct intel_vgpu** engine_owner; struct intel_vgpu* current_vgpu; struct intel_vgpu* next_vgpu; TYPE_1__* sched_ops; } ;
struct drm_i915_private {int runtime_pm; } ;
struct TYPE_4__ {int sched_lock; struct drm_i915_private* dev_priv; struct intel_gvt_workload_scheduler scheduler; } ;
struct TYPE_3__ {int (* stop_schedule ) (struct intel_vgpu*) ;} ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct intel_vgpu*,int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct intel_vgpu*) ;

void FUNC_9(struct intel_vgpu *VAR_1)
{
 struct intel_gvt_workload_scheduler *VAR_2 =
  &VAR_1->gvt->scheduler;
 int VAR_3;
 struct vgpu_sched_data *VAR_4 = VAR_1->sched_data;
 struct drm_i915_private *VAR_5 = VAR_1->gvt->dev_priv;

 if (!VAR_4->active)
  return;

 FUNC_0("vgpu%d: stop schedule\n", VAR_1->id);

 FUNC_4(&VAR_1->gvt->sched_lock);
 VAR_2->sched_ops->stop_schedule(VAR_1);

 if (VAR_2->next_vgpu == VAR_1)
  VAR_2->next_vgpu = ((void*)0);

 if (VAR_2->current_vgpu == VAR_1) {

  VAR_2->need_reschedule = 1;
  VAR_2->current_vgpu = ((void*)0);
 }

 FUNC_2(&VAR_5->runtime_pm);
 FUNC_6(&VAR_2->mmio_context_lock);
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (VAR_2->engine_owner[VAR_3] == VAR_1) {
   FUNC_1(VAR_1, ((void*)0), VAR_3);
   VAR_2->engine_owner[VAR_3] = ((void*)0);
  }
 }
 FUNC_7(&VAR_2->mmio_context_lock);
 FUNC_3(&VAR_5->runtime_pm);
 FUNC_5(&VAR_1->gvt->sched_lock);
}
