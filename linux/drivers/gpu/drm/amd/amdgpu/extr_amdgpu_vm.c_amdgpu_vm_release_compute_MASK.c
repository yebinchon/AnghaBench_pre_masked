
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct amdgpu_vm {scalar_t__ pasid; } ;
struct TYPE_2__ {int pasid_lock; int pasid_idr; } ;
struct amdgpu_device {TYPE_1__ vm_manager; } ;


 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

void FUNC_3(struct amdgpu_device *VAR_0, struct amdgpu_vm *VAR_1)
{
 if (VAR_1->pasid) {
  unsigned long VAR_2;

  FUNC_1(&VAR_0->vm_manager.pasid_lock, VAR_2);
  FUNC_0(&VAR_0->vm_manager.pasid_idr, VAR_1->pasid);
  FUNC_2(&VAR_0->vm_manager.pasid_lock, VAR_2);
 }
 VAR_1->pasid = 0;
}
