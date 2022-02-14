
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct intel_vgpu_mm {int dummy; } ;
struct intel_vgpu {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 struct intel_vgpu_mm* FUNC_1 (struct intel_vgpu*,int *) ;
 int FUNC_2 (struct intel_vgpu_mm*) ;

int FUNC_3(struct intel_vgpu *VAR_1, u64 VAR_2[])
{
 struct intel_vgpu_mm *VAR_3;

 VAR_3 = FUNC_1(VAR_1, VAR_2);
 if (!VAR_3) {
  FUNC_0("fail to find ppgtt instance.\n");
  return -VAR_0;
 }
 FUNC_2(VAR_3);
 return 0;
}
