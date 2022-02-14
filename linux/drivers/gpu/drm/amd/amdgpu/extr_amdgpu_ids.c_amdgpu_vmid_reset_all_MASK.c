
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct amdgpu_vmid_mgr {unsigned int num_ids; } ;
struct TYPE_2__ {struct amdgpu_vmid_mgr* id_mgr; } ;
struct amdgpu_device {TYPE_1__ vm_manager; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct amdgpu_device*,unsigned int,unsigned int) ;

void FUNC_1(struct amdgpu_device *VAR_1)
{
 unsigned VAR_2, VAR_3;

 for (VAR_2 = 0; VAR_2 < VAR_0; ++VAR_2) {
  struct amdgpu_vmid_mgr *VAR_4 =
   &VAR_1->vm_manager.id_mgr[VAR_2];

  for (VAR_3 = 1; VAR_3 < VAR_4->num_ids; ++VAR_3)
   FUNC_0(VAR_1, VAR_2, VAR_3);
 }
}
