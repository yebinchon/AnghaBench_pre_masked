
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int srbm_soft_reset; } ;
struct amdgpu_device {int dev; TYPE_1__ gmc; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct amdgpu_device*) ;
 scalar_t__ FUNC_2 (struct amdgpu_device*) ;

__attribute__((used)) static int FUNC_3(void *VAR_0)
{
 struct amdgpu_device *VAR_1 = (struct amdgpu_device *)VAR_0;

 if (!VAR_1->gmc.srbm_soft_reset)
  return 0;

 FUNC_1(VAR_1);
 if (FUNC_2(VAR_1)) {
  FUNC_0(VAR_1->dev, "Wait for GMC idle timed out !\n");
 }

 return 0;
}
