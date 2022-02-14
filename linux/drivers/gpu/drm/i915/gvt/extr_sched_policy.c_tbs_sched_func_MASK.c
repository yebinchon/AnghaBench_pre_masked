
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vgpu_sched_data {int lru_list; int pri_sched; } ;
struct intel_vgpu {struct vgpu_sched_data* sched_data; } ;
struct intel_gvt_workload_scheduler {struct intel_vgpu* next_vgpu; } ;
struct intel_gvt {struct intel_vgpu* idle_vgpu; struct intel_gvt_workload_scheduler scheduler; } ;
struct gvt_sched_data {int lru_runq_head; struct intel_gvt* gvt; } ;


 struct intel_vgpu* FUNC_0 (struct gvt_sched_data*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (struct intel_gvt*) ;

__attribute__((used)) static void FUNC_5(struct gvt_sched_data *VAR_0)
{
 struct intel_gvt *VAR_1 = VAR_0->gvt;
 struct intel_gvt_workload_scheduler *VAR_2 = &VAR_1->scheduler;
 struct vgpu_sched_data *VAR_3;
 struct intel_vgpu *VAR_4 = ((void*)0);


 if (FUNC_3(&VAR_0->lru_runq_head) || VAR_2->next_vgpu)
  goto out;

 VAR_4 = FUNC_0(VAR_0);
 if (VAR_4) {
  VAR_2->next_vgpu = VAR_4;
  VAR_3 = VAR_4->sched_data;
  if (!VAR_3->pri_sched) {

   FUNC_2(&VAR_3->lru_list);
   FUNC_1(&VAR_3->lru_list,
          &VAR_0->lru_runq_head);
  }
 } else {
  VAR_2->next_vgpu = VAR_1->idle_vgpu;
 }
out:
 if (VAR_2->next_vgpu)
  FUNC_4(VAR_1);
}
