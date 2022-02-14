
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smu_context {struct amdgpu_device* adev; } ;
struct amdgpu_device {scalar_t__ asic_type; } ;
typedef enum amd_dpm_forced_level { ____Placeholder_amd_dpm_forced_level } amd_dpm_forced_level ;



 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct smu_context*) ;

__attribute__((used)) static int FUNC_1(struct smu_context *VAR_2, enum amd_dpm_forced_level VAR_3)
{
 int VAR_4 = 0;
 struct amdgpu_device *VAR_5 = VAR_2->adev;

 if (VAR_5->asic_type != VAR_0)
  return -VAR_1;

 switch (VAR_3) {
 case 128:
  VAR_4 = FUNC_0(VAR_2);
  break;
 default:
  VAR_4 = -VAR_1;
  break;
 }

 return VAR_4;
}
