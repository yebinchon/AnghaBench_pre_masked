
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_vgpu_workload {struct intel_vgpu* vgpu; } ;
struct intel_vgpu {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct intel_vgpu_workload*) ;
 int FUNC_2 (struct intel_vgpu_workload*) ;

int FUNC_3(struct intel_vgpu_workload *VAR_0)
{
 int VAR_1;
 struct intel_vgpu *VAR_2 = VAR_0->vgpu;

 VAR_1 = FUNC_2(VAR_0);
 if (VAR_1) {
  FUNC_0("fail to shadow workload ring_buffer\n");
  return VAR_1;
 }

 VAR_1 = FUNC_1(VAR_0);
 if (VAR_1) {
  FUNC_0("scan workload error\n");
  return VAR_1;
 }
 return 0;
}
