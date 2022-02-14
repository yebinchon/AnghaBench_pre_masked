
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kgd_dev {int dummy; } ;
struct kfd_vm_fault_info {int dummy; } ;
struct TYPE_2__ {int vm_fault_info_updated; struct kfd_vm_fault_info* vm_fault_info; } ;
struct amdgpu_device {TYPE_1__ gmc; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 () ;

int FUNC_3(struct kgd_dev *VAR_0,
           struct kfd_vm_fault_info *VAR_1)
{
 struct amdgpu_device *VAR_2;

 VAR_2 = (struct amdgpu_device *)VAR_0;
 if (FUNC_0(&VAR_2->gmc.vm_fault_info_updated) == 1) {
  *VAR_1 = *VAR_2->gmc.vm_fault_info;
  FUNC_2();
  FUNC_1(&VAR_2->gmc.vm_fault_info_updated, 0);
 }
 return 0;
}
