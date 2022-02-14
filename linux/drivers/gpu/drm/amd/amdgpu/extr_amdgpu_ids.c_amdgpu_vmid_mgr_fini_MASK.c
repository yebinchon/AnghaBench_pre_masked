
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct amdgpu_vmid_mgr {struct amdgpu_vmid* ids; int lock; } ;
struct amdgpu_vmid {int pasid_mapping; int last_flush; int flushed_updates; int active; } ;
struct TYPE_2__ {struct amdgpu_vmid_mgr* id_mgr; } ;
struct amdgpu_device {TYPE_1__ vm_manager; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct amdgpu_device *VAR_2)
{
 unsigned VAR_3, VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_0; ++VAR_3) {
  struct amdgpu_vmid_mgr *VAR_5 =
   &VAR_2->vm_manager.id_mgr[VAR_3];

  FUNC_2(&VAR_5->lock);
  for (VAR_4 = 0; VAR_4 < VAR_1; ++VAR_4) {
   struct amdgpu_vmid *VAR_6 = &VAR_5->ids[VAR_4];

   FUNC_0(&VAR_6->active);
   FUNC_1(VAR_6->flushed_updates);
   FUNC_1(VAR_6->last_flush);
   FUNC_1(VAR_6->pasid_mapping);
  }
 }
}
