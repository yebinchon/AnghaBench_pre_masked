
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_vgpu_workload {int ring_id; int elsp_dwords; int emulate_schedule_in; struct intel_vgpu* vgpu; } ;
struct intel_vgpu_submission {int * execlist; } ;
struct intel_vgpu {struct intel_vgpu_submission submission; } ;
struct execlist_ctx_descriptor_format {int dummy; } ;


 int FUNC_0 (int *,struct execlist_ctx_descriptor_format*) ;
 struct execlist_ctx_descriptor_format* FUNC_1 (int *,int) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(struct intel_vgpu_workload *VAR_0)
{
 struct intel_vgpu *VAR_1 = VAR_0->vgpu;
 struct intel_vgpu_submission *VAR_2 = &VAR_1->submission;
 struct execlist_ctx_descriptor_format VAR_3[2];
 int VAR_4 = VAR_0->ring_id;
 int VAR_5;

 if (!VAR_0->emulate_schedule_in)
  return 0;

 VAR_3[0] = *FUNC_1(&VAR_0->elsp_dwords, 0);
 VAR_3[1] = *FUNC_1(&VAR_0->elsp_dwords, 1);

 VAR_5 = FUNC_0(&VAR_2->execlist[VAR_4], VAR_3);
 if (VAR_5) {
  FUNC_2("fail to emulate execlist schedule in\n");
  return VAR_5;
 }
 return 0;
}
