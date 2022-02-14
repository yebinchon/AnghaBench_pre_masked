
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smu_context {int * funcs; struct amdgpu_device* adev; } ;
struct amdgpu_device {int asic_type; } ;



 int FUNC_0 (char*) ;
 int FUNC_1 (struct smu_context*) ;
 int VAR_0 ;

void FUNC_2(struct smu_context *VAR_1)
{
 struct amdgpu_device *VAR_2 = VAR_1->adev;

 VAR_1->funcs = &VAR_0;

 switch (VAR_2->asic_type) {
 case 128:
  FUNC_1(VAR_1);
  break;
 default:
  FUNC_0("Unknown asic for smu12\n");
 }
}
