
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int vm_update_mode; int lock_pstate; scalar_t__ xgmi_map_counter; int pasid_lock; int pasid_idr; int num_prt_users; int prt_lock; scalar_t__* seqno; int fence_context; } ;
struct amdgpu_device {TYPE_1__ vm_manager; int gmc; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_2 ;
 int FUNC_1 (struct amdgpu_device*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void FUNC_7(struct amdgpu_device *VAR_3)
{
 unsigned VAR_4;

 FUNC_1(VAR_3);

 VAR_3->vm_manager.fence_context =
  FUNC_3(VAR_0);
 for (VAR_4 = 0; VAR_4 < VAR_0; ++VAR_4)
  VAR_3->vm_manager.seqno[VAR_4] = 0;

 FUNC_6(&VAR_3->vm_manager.prt_lock);
 FUNC_2(&VAR_3->vm_manager.num_prt_users, 0);
 VAR_3->vm_manager.vm_update_mode = 0;


 FUNC_4(&VAR_3->vm_manager.pasid_idr);
 FUNC_6(&VAR_3->vm_manager.pasid_lock);

 VAR_3->vm_manager.xgmi_map_counter = 0;
 FUNC_5(&VAR_3->vm_manager.lock_pstate);
}
