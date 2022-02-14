
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct dma_fence {int dummy; } ;
struct amdgpu_vm {int dummy; } ;
struct TYPE_9__ {int ready; } ;
struct amdgpu_ring {int name; TYPE_5__* funcs; int current_ctx; TYPE_4__ sched; struct amdgpu_device* adev; } ;
struct TYPE_8__ {TYPE_2__* s_fence; } ;
struct amdgpu_job {int preamble_status; int preemption_status; int vmid; int uf_sequence; int uf_addr; int sched_sync; TYPE_3__ base; struct amdgpu_vm* vm; } ;
struct amdgpu_ib {int flags; } ;
struct amdgpu_device {int flags; int dev; } ;
struct TYPE_10__ {int emit_frame_size; unsigned int emit_ib_size; scalar_t__ emit_switch_buffer; scalar_t__ patch_cond_exec; int (* insert_end ) (struct amdgpu_ring*) ;int vmhub; scalar_t__ emit_tmz; scalar_t__ emit_cntxcntl; scalar_t__ emit_hdp_flush; scalar_t__ init_cond_exec; int (* insert_start ) (struct amdgpu_ring*) ;scalar_t__ emit_pipeline_sync; } ;
struct TYPE_6__ {int context; } ;
struct TYPE_7__ {TYPE_1__ scheduled; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct amdgpu_device*,struct amdgpu_ring*) ;
 int FUNC_1 (struct amdgpu_device*,struct amdgpu_ring*) ;
 int FUNC_2 (struct amdgpu_ring*,struct dma_fence**,unsigned int) ;
 int VAR_8 ;
 int FUNC_3 (struct amdgpu_ring*,int) ;
 int FUNC_4 (struct amdgpu_ring*) ;
 int FUNC_5 (struct amdgpu_ring*,int) ;
 int FUNC_6 (struct amdgpu_ring*,int ,int ,unsigned int) ;
 int FUNC_7 (struct amdgpu_ring*) ;
 int FUNC_8 (struct amdgpu_ring*,struct amdgpu_job*,struct amdgpu_ib*,int) ;
 int FUNC_9 (struct amdgpu_ring*) ;
 int FUNC_10 (struct amdgpu_ring*,int) ;
 unsigned int FUNC_11 (struct amdgpu_ring*) ;
 int FUNC_12 (struct amdgpu_ring*,unsigned int) ;
 int FUNC_13 (struct amdgpu_ring*) ;
 scalar_t__ FUNC_14 (struct amdgpu_device*) ;
 struct dma_fence* FUNC_15 (int *,int *) ;
 int FUNC_16 (struct amdgpu_ring*,struct amdgpu_job*,int) ;
 scalar_t__ FUNC_17 (struct amdgpu_ring*,struct amdgpu_job*) ;
 int FUNC_18 (struct amdgpu_device*,int ,int ) ;
 int FUNC_19 (int ,char*,...) ;
 int FUNC_20 (struct dma_fence*) ;
 int FUNC_21 (struct amdgpu_ring*) ;
 int FUNC_22 (struct amdgpu_ring*) ;
 int FUNC_23 (struct amdgpu_job*,struct dma_fence*) ;

int FUNC_24(struct amdgpu_ring *VAR_9, unsigned VAR_10,
         struct amdgpu_ib *VAR_11, struct amdgpu_job *VAR_12,
         struct dma_fence **VAR_13)
{
 struct amdgpu_device *VAR_14 = VAR_9->adev;
 struct amdgpu_ib *VAR_15 = &VAR_11[0];
 struct dma_fence *VAR_16 = ((void*)0);
 bool VAR_17, VAR_18;
 unsigned VAR_19 = ~0;
 struct amdgpu_vm *VAR_20;
 uint64_t VAR_21;
 uint32_t VAR_22 = 0, VAR_23;
 unsigned VAR_24 = 0;

 unsigned VAR_25;
 int VAR_26 = 0;
 bool VAR_27 = 0;

 if (VAR_10 == 0)
  return -VAR_7;


 if (VAR_12) {
  VAR_20 = VAR_12->vm;
  VAR_21 = VAR_12->base.s_fence ?
   VAR_12->base.s_fence->scheduled.context : 0;
 } else {
  VAR_20 = ((void*)0);
  VAR_21 = 0;
 }

 if (!VAR_9->sched.ready) {
  FUNC_19(VAR_14->dev, "couldn't schedule ib on ring <%s>\n", VAR_9->name);
  return -VAR_7;
 }

 if (VAR_20 && !VAR_12->vmid) {
  FUNC_19(VAR_14->dev, "VM IB without ID\n");
  return -VAR_7;
 }

 VAR_23 = VAR_9->funcs->emit_frame_size + VAR_10 *
  VAR_9->funcs->emit_ib_size;

 VAR_26 = FUNC_3(VAR_9, VAR_23);
 if (VAR_26) {
  FUNC_19(VAR_14->dev, "scheduling IB failed (%d).\n", VAR_26);
  return VAR_26;
 }

 VAR_18 = VAR_9->current_ctx != VAR_21;
 if (VAR_9->funcs->emit_pipeline_sync && VAR_12 &&
     ((VAR_16 = FUNC_15(&VAR_12->sched_sync, ((void*)0))) ||
      (FUNC_14(VAR_14) && VAR_18) ||
      FUNC_17(VAR_9, VAR_12))) {
  VAR_27 = 1;

  if (VAR_16)
   FUNC_23(VAR_12, VAR_16);

  FUNC_20(VAR_16);
 }

 if (VAR_9->funcs->insert_start)
  VAR_9->funcs->insert_start(VAR_9);

 if (VAR_12) {
  VAR_26 = FUNC_16(VAR_9, VAR_12, VAR_27);
  if (VAR_26) {
   FUNC_13(VAR_9);
   return VAR_26;
  }
 }

 if (VAR_12 && VAR_9->funcs->init_cond_exec)
  VAR_19 = FUNC_11(VAR_9);




 {
  if (VAR_9->funcs->emit_hdp_flush)
   FUNC_7(VAR_9);
  else
   FUNC_0(VAR_14, VAR_9);
 }

 if (VAR_18)
  VAR_22 |= VAR_2;

 VAR_17 = VAR_9->current_ctx == VAR_21;
 if (VAR_12 && VAR_9->funcs->emit_cntxcntl) {
  VAR_22 |= VAR_12->preamble_status;
  VAR_22 |= VAR_12->preemption_status;
  FUNC_5(VAR_9, VAR_22);
 }

 for (VAR_25 = 0; VAR_25 < VAR_10; ++VAR_25) {
  VAR_15 = &VAR_11[VAR_25];


  if ((VAR_15->flags & VAR_3) &&
      VAR_17 &&
      !(VAR_22 & VAR_5) &&
      !VAR_8 &&
      !FUNC_14(VAR_14))
   continue;

  FUNC_8(VAR_9, VAR_12, VAR_15, VAR_22);
  VAR_22 &= ~VAR_2;
 }

 if (VAR_9->funcs->emit_tmz)
  FUNC_10(VAR_9, 0);




  FUNC_1(VAR_14, VAR_9);

 if (VAR_15->flags & VAR_4)
  VAR_24 |= VAR_1;


 if (VAR_12 && VAR_12->uf_addr) {
  FUNC_6(VAR_9, VAR_12->uf_addr, VAR_12->uf_sequence,
           VAR_24 | VAR_0);
 }

 VAR_26 = FUNC_2(VAR_9, VAR_13, VAR_24);
 if (VAR_26) {
  FUNC_19(VAR_14->dev, "failed to emit fence (%d)\n", VAR_26);
  if (VAR_12 && VAR_12->vmid)
   FUNC_18(VAR_14, VAR_9->funcs->vmhub, VAR_12->vmid);
  FUNC_13(VAR_9);
  return VAR_26;
 }

 if (VAR_9->funcs->insert_end)
  VAR_9->funcs->insert_end(VAR_9);

 if (VAR_19 != ~0 && VAR_9->funcs->patch_cond_exec)
  FUNC_12(VAR_9, VAR_19);

 VAR_9->current_ctx = VAR_21;
 if (VAR_20 && VAR_9->funcs->emit_switch_buffer)
  FUNC_9(VAR_9);
 FUNC_4(VAR_9);
 return 0;
}
