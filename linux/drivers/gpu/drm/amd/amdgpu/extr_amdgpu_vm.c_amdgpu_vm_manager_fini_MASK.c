
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pasid_idr; } ;
struct amdgpu_device {TYPE_1__ vm_manager; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct amdgpu_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct amdgpu_device *VAR_0)
{
 FUNC_0(!FUNC_3(&VAR_0->vm_manager.pasid_idr));
 FUNC_2(&VAR_0->vm_manager.pasid_idr);

 FUNC_1(VAR_0);
}
