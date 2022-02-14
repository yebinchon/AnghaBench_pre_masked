
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdgpu_device {int dev; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct amdgpu_device*) ;
 scalar_t__ FUNC_2 (struct amdgpu_device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,int *) ;

int FUNC_4(struct amdgpu_device *VAR_3)
{
 int VAR_4 = 0;

 if (!(FUNC_2(VAR_3) && FUNC_1(VAR_3)))
  return VAR_4;

 VAR_4 = FUNC_3(VAR_3->dev, &VAR_2);
 if (VAR_4) {
  FUNC_0("failed to create device file pp_dpm_sclk\n");
  return VAR_4;
 }

 VAR_4 = FUNC_3(VAR_3->dev, &VAR_1);
 if (VAR_4) {
  FUNC_0("failed to create device file pp_dpm_mclk\n");
  return VAR_4;
 }

 VAR_4 = FUNC_3(VAR_3->dev, &VAR_0);
 if (VAR_4) {
  FUNC_0("failed to create device file for dpm state\n");
  return VAR_4;
 }

 return VAR_4;
}
