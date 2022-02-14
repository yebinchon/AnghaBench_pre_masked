
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct amdgpu_vmid_mgr {unsigned int num_ids; int ids_lru; TYPE_2__* ids; int reserved_vmid_num; int lock; } ;
struct TYPE_3__ {struct amdgpu_vmid_mgr* id_mgr; } ;
struct amdgpu_device {TYPE_1__ vm_manager; } ;
struct TYPE_4__ {int list; int active; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct amdgpu_device*,unsigned int,unsigned int) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct amdgpu_device *VAR_1)
{
 unsigned VAR_2, VAR_3;

 for (VAR_2 = 0; VAR_2 < VAR_0; ++VAR_2) {
  struct amdgpu_vmid_mgr *VAR_4 =
   &VAR_1->vm_manager.id_mgr[VAR_2];

  FUNC_5(&VAR_4->lock);
  FUNC_0(&VAR_4->ids_lru);
  FUNC_3(&VAR_4->reserved_vmid_num, 0);


  for (VAR_3 = 1; VAR_3 < VAR_4->num_ids; ++VAR_3) {
   FUNC_2(VAR_1, VAR_2, VAR_3);
   FUNC_1(&VAR_4->ids[VAR_3].active);
   FUNC_4(&VAR_4->ids[VAR_3].list, &VAR_4->ids_lru);
  }
 }
}
