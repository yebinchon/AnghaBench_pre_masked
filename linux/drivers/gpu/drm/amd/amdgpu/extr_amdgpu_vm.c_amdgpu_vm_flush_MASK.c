
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct dma_fence {int dummy; } ;
struct amdgpu_vmid_mgr {int lock; struct amdgpu_vmid* ids; } ;
struct amdgpu_vmid {scalar_t__ gds_base; scalar_t__ gds_size; scalar_t__ gws_base; scalar_t__ gws_size; scalar_t__ oa_base; scalar_t__ oa_size; scalar_t__ pasid; struct dma_fence* pasid_mapping; int current_gpu_reset_count; struct dma_fence* last_flush; } ;
struct amdgpu_ring {TYPE_4__* funcs; struct amdgpu_device* adev; } ;
struct amdgpu_job {size_t vmid; scalar_t__ gds_base; scalar_t__ gds_size; scalar_t__ gws_base; scalar_t__ gws_size; scalar_t__ oa_base; scalar_t__ oa_size; int vm_needs_flush; scalar_t__ pasid; scalar_t__ vm_pd_addr; } ;
struct TYPE_7__ {TYPE_2__* gmc_funcs; } ;
struct TYPE_5__ {struct amdgpu_vmid_mgr* id_mgr; } ;
struct amdgpu_device {int gpu_reset_counter; TYPE_3__ gmc; TYPE_1__ vm_manager; } ;
struct TYPE_8__ {unsigned int vmhub; scalar_t__ emit_switch_buffer; scalar_t__ patch_cond_exec; scalar_t__ emit_gds_switch; scalar_t__ init_cond_exec; scalar_t__ emit_wreg; int emit_vm_flush; } ;
struct TYPE_6__ {scalar_t__ emit_pasid_mapping; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct amdgpu_ring*,struct dma_fence**,int ) ;
 int FUNC_1 (struct amdgpu_ring*,size_t,scalar_t__) ;
 int FUNC_2 (struct amdgpu_ring*,size_t,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_3 (struct amdgpu_ring*) ;
 int FUNC_4 (struct amdgpu_ring*) ;
 int FUNC_5 (struct amdgpu_ring*,size_t,scalar_t__) ;
 unsigned int FUNC_6 (struct amdgpu_ring*) ;
 int FUNC_7 (struct amdgpu_ring*,unsigned int) ;
 scalar_t__ FUNC_8 (struct amdgpu_device*,struct amdgpu_vmid*) ;
 int FUNC_9 (int *) ;
 void* FUNC_10 (struct dma_fence*) ;
 int FUNC_11 (struct dma_fence*) ;
 int FUNC_12 (struct dma_fence*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (struct amdgpu_ring*,size_t,scalar_t__) ;

int FUNC_16(struct amdgpu_ring *VAR_1, struct amdgpu_job *VAR_2, bool VAR_3)
{
 struct amdgpu_device *VAR_4 = VAR_1->adev;
 unsigned VAR_5 = VAR_1->funcs->vmhub;
 struct amdgpu_vmid_mgr *VAR_6 = &VAR_4->vm_manager.id_mgr[VAR_5];
 struct amdgpu_vmid *VAR_7 = &VAR_6->ids[VAR_2->vmid];
 bool VAR_8 = VAR_1->funcs->emit_gds_switch && (
  VAR_7->gds_base != VAR_2->gds_base ||
  VAR_7->gds_size != VAR_2->gds_size ||
  VAR_7->gws_base != VAR_2->gws_base ||
  VAR_7->gws_size != VAR_2->gws_size ||
  VAR_7->oa_base != VAR_2->oa_base ||
  VAR_7->oa_size != VAR_2->oa_size);
 bool VAR_9 = VAR_2->vm_needs_flush;
 bool VAR_10 = VAR_7->pasid != VAR_2->pasid ||
  !VAR_7->pasid_mapping ||
  !FUNC_11(VAR_7->pasid_mapping);
 struct dma_fence *VAR_11 = ((void*)0);
 unsigned VAR_12 = 0;
 int VAR_13;

 if (FUNC_8(VAR_4, VAR_7)) {
  VAR_8 = 1;
  VAR_9 = 1;
  VAR_10 = 1;
 }

 VAR_8 &= !!VAR_1->funcs->emit_gds_switch;
 VAR_9 &= !!VAR_1->funcs->emit_vm_flush &&
   VAR_2->vm_pd_addr != VAR_0;
 VAR_10 &= VAR_4->gmc.gmc_funcs->emit_pasid_mapping &&
  VAR_1->funcs->emit_wreg;

 if (!VAR_9 && !VAR_8 && !VAR_3)
  return 0;

 if (VAR_1->funcs->init_cond_exec)
  VAR_12 = FUNC_6(VAR_1);

 if (VAR_3)
  FUNC_3(VAR_1);

 if (VAR_9) {
  FUNC_15(VAR_1, VAR_2->vmid, VAR_2->vm_pd_addr);
  FUNC_5(VAR_1, VAR_2->vmid, VAR_2->vm_pd_addr);
 }

 if (VAR_10)
  FUNC_1(VAR_1, VAR_2->vmid, VAR_2->pasid);

 if (VAR_9 || VAR_10) {
  VAR_13 = FUNC_0(VAR_1, &VAR_11, 0);
  if (VAR_13)
   return VAR_13;
 }

 if (VAR_9) {
  FUNC_13(&VAR_6->lock);
  FUNC_12(VAR_7->last_flush);
  VAR_7->last_flush = FUNC_10(VAR_11);
  VAR_7->current_gpu_reset_count =
   FUNC_9(&VAR_4->gpu_reset_counter);
  FUNC_14(&VAR_6->lock);
 }

 if (VAR_10) {
  VAR_7->pasid = VAR_2->pasid;
  FUNC_12(VAR_7->pasid_mapping);
  VAR_7->pasid_mapping = FUNC_10(VAR_11);
 }
 FUNC_12(VAR_11);

 if (VAR_1->funcs->emit_gds_switch && VAR_8) {
  VAR_7->gds_base = VAR_2->gds_base;
  VAR_7->gds_size = VAR_2->gds_size;
  VAR_7->gws_base = VAR_2->gws_base;
  VAR_7->gws_size = VAR_2->gws_size;
  VAR_7->oa_base = VAR_2->oa_base;
  VAR_7->oa_size = VAR_2->oa_size;
  FUNC_2(VAR_1, VAR_2->vmid, VAR_2->gds_base,
         VAR_2->gds_size, VAR_2->gws_base,
         VAR_2->gws_size, VAR_2->oa_base,
         VAR_2->oa_size);
 }

 if (VAR_1->funcs->patch_cond_exec)
  FUNC_7(VAR_1, VAR_12);


 if (VAR_1->funcs->emit_switch_buffer) {
  FUNC_4(VAR_1);
  FUNC_4(VAR_1);
 }
 return 0;
}
