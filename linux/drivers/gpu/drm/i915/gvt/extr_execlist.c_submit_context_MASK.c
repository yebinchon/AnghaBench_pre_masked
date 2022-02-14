
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_vgpu_workload {int emulate_schedule_in; int elsp_dwords; int complete; int prepare; } ;
struct intel_vgpu_submission {TYPE_1__* execlist; } ;
struct intel_vgpu {struct intel_vgpu_submission submission; } ;
struct execlist_ctx_descriptor_format {int dummy; } ;
struct TYPE_2__ {int elsp_dwords; } ;


 scalar_t__ FUNC_0 (struct intel_vgpu_workload*) ;
 int FUNC_1 (struct intel_vgpu_workload*) ;
 int VAR_0 ;
 int FUNC_2 (char*,struct intel_vgpu_workload*,int) ;
 struct intel_vgpu_workload* FUNC_3 (struct intel_vgpu*,int,struct execlist_ctx_descriptor_format*) ;
 int FUNC_4 (struct intel_vgpu_workload*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_5(struct intel_vgpu *VAR_2, int VAR_3,
  struct execlist_ctx_descriptor_format *VAR_4,
  bool VAR_5)
{
 struct intel_vgpu_submission *VAR_6 = &VAR_2->submission;
 struct intel_vgpu_workload *VAR_7 = ((void*)0);

 VAR_7 = FUNC_3(VAR_2, VAR_3, VAR_4);
 if (FUNC_0(VAR_7))
  return FUNC_1(VAR_7);

 VAR_7->prepare = VAR_1;
 VAR_7->complete = VAR_0;
 VAR_7->emulate_schedule_in = VAR_5;

 if (VAR_5)
  VAR_7->elsp_dwords = VAR_6->execlist[VAR_3].elsp_dwords;

 FUNC_2("workload %p emulate schedule_in %d\n", VAR_7,
   VAR_5);

 FUNC_4(VAR_7);
 return 0;
}
