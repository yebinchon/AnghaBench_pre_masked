
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct amdgpu_vmid_mgr {int lock; struct amdgpu_vmid* ids; } ;
struct amdgpu_vmid {scalar_t__ oa_size; scalar_t__ oa_base; scalar_t__ gws_size; scalar_t__ gws_base; scalar_t__ gds_size; scalar_t__ gds_base; scalar_t__ owner; } ;
struct TYPE_2__ {struct amdgpu_vmid_mgr* id_mgr; } ;
struct amdgpu_device {TYPE_1__ vm_manager; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct amdgpu_device *VAR_0, unsigned VAR_1,
         unsigned VAR_2)
{
 struct amdgpu_vmid_mgr *VAR_3 = &VAR_0->vm_manager.id_mgr[VAR_1];
 struct amdgpu_vmid *VAR_4 = &VAR_3->ids[VAR_2];

 FUNC_0(&VAR_3->lock);
 VAR_4->owner = 0;
 VAR_4->gds_base = 0;
 VAR_4->gds_size = 0;
 VAR_4->gws_base = 0;
 VAR_4->gws_size = 0;
 VAR_4->oa_base = 0;
 VAR_4->oa_size = 0;
 FUNC_1(&VAR_3->lock);
}
