
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int vm_fault; int ecc_irq; } ;
struct amdgpu_device {TYPE_1__ gmc; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct amdgpu_device*,int *,int ) ;
 scalar_t__ FUNC_2 (struct amdgpu_device*) ;
 int FUNC_3 (struct amdgpu_device*) ;

__attribute__((used)) static int FUNC_4(void *VAR_0)
{
 struct amdgpu_device *VAR_1 = (struct amdgpu_device *)VAR_0;

 if (FUNC_2(VAR_1)) {

  FUNC_0("For SRIOV client, shouldn't do anything.\n");
  return 0;
 }

 FUNC_1(VAR_1, &VAR_1->gmc.ecc_irq, 0);
 FUNC_1(VAR_1, &VAR_1->gmc.vm_fault, 0);
 FUNC_3(VAR_1);

 return 0;
}
