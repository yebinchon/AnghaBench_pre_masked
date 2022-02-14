
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smu_context {int * funcs; struct amdgpu_device* adev; } ;
struct amdgpu_device {int asic_type; } ;







 int FUNC_0 (struct smu_context*) ;
 int FUNC_1 (struct smu_context*) ;
 int FUNC_2 (char*) ;
 int VAR_0 ;
 int FUNC_3 (struct smu_context*) ;

void FUNC_4(struct smu_context *VAR_1)
{
 struct amdgpu_device *VAR_2 = VAR_1->adev;

 VAR_1->funcs = &VAR_0;
 switch (VAR_2->asic_type) {
 case 128:
  FUNC_3(VAR_1);
  break;
 case 132:
  FUNC_0(VAR_1);
  break;
 case 131:
 case 129:
 case 130:
  FUNC_1(VAR_1);
  break;
 default:
  FUNC_2("Unknown asic for smu11\n");
 }
}
