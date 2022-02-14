
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_vgpu_workload {struct intel_vgpu* vgpu; int status; int shadow_ctx_active; int shadow_ctx_status_wq; int shadow_bb; int list; } ;
struct intel_vgpu_submission {int workloads; } ;
struct intel_vgpu {struct intel_vgpu_submission submission; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct intel_vgpu_workload* FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 struct intel_vgpu_workload* FUNC_4 (int ,int ) ;

__attribute__((used)) static struct intel_vgpu_workload *
FUNC_5(struct intel_vgpu *VAR_3)
{
 struct intel_vgpu_submission *VAR_4 = &VAR_3->submission;
 struct intel_vgpu_workload *VAR_5;

 VAR_5 = FUNC_4(VAR_4->workloads, VAR_2);
 if (!VAR_5)
  return FUNC_0(-VAR_1);

 FUNC_1(&VAR_5->list);
 FUNC_1(&VAR_5->shadow_bb);

 FUNC_3(&VAR_5->shadow_ctx_status_wq);
 FUNC_2(&VAR_5->shadow_ctx_active, 0);

 VAR_5->status = -VAR_0;
 VAR_5->vgpu = VAR_3;

 return VAR_5;
}
