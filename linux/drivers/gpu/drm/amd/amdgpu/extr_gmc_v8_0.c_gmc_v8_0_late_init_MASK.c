
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int vm_fault; } ;
struct amdgpu_device {TYPE_1__ gmc; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct amdgpu_device*) ;
 int FUNC_1 (struct amdgpu_device*,int *,int ) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_2(void *VAR_2)
{
 struct amdgpu_device *VAR_3 = (struct amdgpu_device *)VAR_2;

 FUNC_0(VAR_3);

 if (VAR_1 != VAR_0)
  return FUNC_1(VAR_3, &VAR_3->gmc.vm_fault, 0);
 else
  return 0;
}
