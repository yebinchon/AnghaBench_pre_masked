
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dpm_enabled; } ;
struct amdgpu_device {TYPE_1__ pm; } ;


 int FUNC_0 (struct amdgpu_device*,int) ;
 int FUNC_1 (struct amdgpu_device*) ;

__attribute__((used)) static int FUNC_2(void *VAR_0)
{
 int VAR_1;
 struct amdgpu_device *VAR_2 = (struct amdgpu_device *)VAR_0;

 if (!VAR_2->pm.dpm_enabled)
  return 0;

 VAR_1 = FUNC_1(VAR_2);
 if (VAR_1)
  return VAR_1;



 return 0;
}
