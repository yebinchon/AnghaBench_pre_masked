
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct intel_vgpu_mm {int dummy; } ;
struct intel_vgpu {int dummy; } ;
typedef enum intel_gvt_gtt_type { ____Placeholder_intel_gvt_gtt_type } intel_gvt_gtt_type ;


 scalar_t__ FUNC_0 (struct intel_vgpu_mm*) ;
 int FUNC_1 (char*) ;
 struct intel_vgpu_mm* FUNC_2 (struct intel_vgpu*,int,int *) ;
 struct intel_vgpu_mm* FUNC_3 (struct intel_vgpu*,int *) ;
 int FUNC_4 (struct intel_vgpu_mm*) ;

struct intel_vgpu_mm *FUNC_5(struct intel_vgpu *VAR_0,
  enum intel_gvt_gtt_type VAR_1, u64 VAR_2[])
{
 struct intel_vgpu_mm *VAR_3;

 VAR_3 = FUNC_3(VAR_0, VAR_2);
 if (VAR_3) {
  FUNC_4(VAR_3);
 } else {
  VAR_3 = FUNC_2(VAR_0, VAR_1, VAR_2);
  if (FUNC_0(VAR_3))
   FUNC_1("fail to create mm\n");
 }
 return VAR_3;
}
