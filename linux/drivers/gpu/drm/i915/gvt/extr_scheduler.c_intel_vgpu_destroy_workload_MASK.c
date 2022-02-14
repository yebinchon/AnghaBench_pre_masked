
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_vgpu_workload {scalar_t__ shadow_mm; int wa_ctx; TYPE_1__* vgpu; } ;
struct intel_vgpu_submission {int workloads; } ;
struct TYPE_2__ {struct intel_vgpu_submission submission; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,struct intel_vgpu_workload*) ;
 int FUNC_2 (struct intel_vgpu_workload*) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct intel_vgpu_workload *VAR_0)
{
 struct intel_vgpu_submission *VAR_1 = &VAR_0->vgpu->submission;

 FUNC_2(VAR_0);
 FUNC_3(&VAR_0->wa_ctx);

 if (VAR_0->shadow_mm)
  FUNC_0(VAR_0->shadow_mm);

 FUNC_1(VAR_1->workloads, VAR_0);
}
