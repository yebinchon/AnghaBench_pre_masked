
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct amdgpu_task_info {int dummy; } ;
struct amdgpu_vm {struct amdgpu_task_info task_info; } ;
struct TYPE_2__ {int pasid_lock; int pasid_idr; } ;
struct amdgpu_device {TYPE_1__ vm_manager; } ;


 struct amdgpu_vm* FUNC_0 (int *,unsigned int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

void FUNC_3(struct amdgpu_device *VAR_0, unsigned int VAR_1,
    struct amdgpu_task_info *VAR_2)
{
 struct amdgpu_vm *VAR_3;
 unsigned long VAR_4;

 FUNC_1(&VAR_0->vm_manager.pasid_lock, VAR_4);

 VAR_3 = FUNC_0(&VAR_0->vm_manager.pasid_idr, VAR_1);
 if (VAR_3)
  *VAR_2 = VAR_3->task_info;

 FUNC_2(&VAR_0->vm_manager.pasid_lock, VAR_4);
}
