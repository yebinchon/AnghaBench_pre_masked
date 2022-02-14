
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_vgpu_submission {int running_workload_num; } ;
struct intel_vgpu {struct intel_gvt* gvt; struct intel_vgpu_submission submission; } ;
struct intel_gvt_workload_scheduler {int workload_complete_wq; } ;
struct intel_gvt {struct intel_gvt_workload_scheduler scheduler; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int) ;

void FUNC_3(struct intel_vgpu *VAR_0)
{
 struct intel_vgpu_submission *VAR_1 = &VAR_0->submission;
 struct intel_gvt *VAR_2 = VAR_0->gvt;
 struct intel_gvt_workload_scheduler *VAR_3 = &VAR_2->scheduler;

 if (FUNC_0(&VAR_1->running_workload_num)) {
  FUNC_1("wait vgpu idle\n");

  FUNC_2(VAR_3->workload_complete_wq,
    !FUNC_0(&VAR_1->running_workload_num));
 }
}
