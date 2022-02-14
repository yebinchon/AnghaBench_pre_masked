
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct execlist_ctx_descriptor_format {int addressing_mode; } ;
struct intel_vgpu_workload {struct intel_vgpu_mm* shadow_mm; struct intel_vgpu* vgpu; int ring_context_gpa; struct execlist_ctx_descriptor_format ctx_desc; } ;
struct intel_vgpu_mm {int dummy; } ;
struct intel_vgpu {int dummy; } ;
typedef enum intel_gvt_gtt_type { ____Placeholder_intel_gvt_gtt_type } intel_gvt_gtt_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct intel_vgpu_mm*) ;
 int FUNC_1 (struct intel_vgpu_mm*) ;
 int FUNC_2 (char*) ;
 struct intel_vgpu_mm* FUNC_3 (struct intel_vgpu*,int,int *) ;
 int FUNC_4 (struct intel_vgpu*,int ,void*) ;

__attribute__((used)) static int FUNC_5(struct intel_vgpu_workload *VAR_4)
{
 struct execlist_ctx_descriptor_format *VAR_5 = &VAR_4->ctx_desc;
 struct intel_vgpu_mm *VAR_6;
 struct intel_vgpu *VAR_7 = VAR_4->vgpu;
 enum intel_gvt_gtt_type VAR_8;
 u64 VAR_9[VAR_3];

 switch (VAR_5->addressing_mode) {
 case 1:
  VAR_8 = VAR_1;
  break;
 case 3:
  VAR_8 = VAR_2;
  break;
 default:
  FUNC_2("Advanced Context mode(SVM) is not supported!\n");
  return -VAR_0;
 }

 FUNC_4(VAR_4->vgpu, VAR_4->ring_context_gpa, (void *)VAR_9);

 VAR_6 = FUNC_3(VAR_4->vgpu, VAR_8, VAR_9);
 if (FUNC_0(VAR_6))
  return FUNC_1(VAR_6);

 VAR_4->shadow_mm = VAR_6;
 return 0;
}
