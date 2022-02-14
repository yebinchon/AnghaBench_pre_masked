
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct amdgpu_vmid_mgr {struct amdgpu_vmid* ids; } ;
struct amdgpu_vmid {scalar_t__ gds_base; scalar_t__ gds_size; scalar_t__ gws_base; scalar_t__ gws_size; scalar_t__ oa_base; scalar_t__ oa_size; } ;
struct amdgpu_ring {TYPE_2__* funcs; scalar_t__ has_compute_vm_bug; struct amdgpu_device* adev; } ;
struct amdgpu_job {size_t vmid; scalar_t__ gds_base; scalar_t__ gds_size; scalar_t__ gws_base; scalar_t__ gws_size; scalar_t__ oa_base; scalar_t__ oa_size; scalar_t__ vm_needs_flush; } ;
struct TYPE_3__ {struct amdgpu_vmid_mgr* id_mgr; } ;
struct amdgpu_device {TYPE_1__ vm_manager; } ;
struct TYPE_4__ {unsigned int vmhub; scalar_t__ emit_gds_switch; } ;


 scalar_t__ FUNC_0 (struct amdgpu_device*,struct amdgpu_vmid*) ;

bool FUNC_1(struct amdgpu_ring *VAR_0,
      struct amdgpu_job *VAR_1)
{
 struct amdgpu_device *VAR_2 = VAR_0->adev;
 unsigned VAR_3 = VAR_0->funcs->vmhub;
 struct amdgpu_vmid_mgr *VAR_4 = &VAR_2->vm_manager.id_mgr[VAR_3];
 struct amdgpu_vmid *VAR_5;
 bool VAR_6;
 bool VAR_7 = VAR_1->vm_needs_flush || VAR_0->has_compute_vm_bug;

 if (VAR_1->vmid == 0)
  return 0;
 VAR_5 = &VAR_4->ids[VAR_1->vmid];
 VAR_6 = VAR_0->funcs->emit_gds_switch && (
  VAR_5->gds_base != VAR_1->gds_base ||
  VAR_5->gds_size != VAR_1->gds_size ||
  VAR_5->gws_base != VAR_1->gws_base ||
  VAR_5->gws_size != VAR_1->gws_size ||
  VAR_5->oa_base != VAR_1->oa_base ||
  VAR_5->oa_size != VAR_1->oa_size);

 if (FUNC_0(VAR_2, VAR_5))
  return 1;

 return VAR_7 || VAR_6;
}
