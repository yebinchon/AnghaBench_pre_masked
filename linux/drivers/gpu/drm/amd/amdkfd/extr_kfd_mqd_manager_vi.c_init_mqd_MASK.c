
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct vi_mqd {int header; int compute_pipelinestat_enable; int compute_static_thread_mgmt_se0; int compute_static_thread_mgmt_se1; int compute_static_thread_mgmt_se2; int compute_static_thread_mgmt_se3; int cp_hqd_persistent_state; int cp_mqd_control; int cp_hqd_quantum; int cp_hqd_eop_rptr; int cp_hqd_iq_rptr; int compute_pgm_rsrc2; int cp_hqd_wg_state_offset; int cp_hqd_cntl_stack_offset; int cp_hqd_cntl_stack_size; int cp_hqd_ctx_save_size; void* cp_hqd_ctx_save_base_addr_hi; void* cp_hqd_ctx_save_base_addr_lo; void* compute_tma_hi; void* compute_tma_lo; void* compute_tba_hi; void* compute_tba_lo; void* cp_mqd_base_addr_hi; void* cp_mqd_base_addr_lo; } ;
struct queue_properties {scalar_t__ format; int tba_addr; int tma_addr; int ctx_save_restore_area_address; int ctl_stack_size; int ctx_save_restore_area_size; } ;
struct mqd_manager {int (* update_mqd ) (struct mqd_manager*,struct vi_mqd*,struct queue_properties*) ;TYPE_1__* dev; } ;
struct kfd_mem_obj {int gpu_addr; scalar_t__ cpu_ptr; } ;
struct TYPE_2__ {scalar_t__ cwsr_enabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct vi_mqd*,int ,int) ;
 int FUNC_2 (struct vi_mqd*,struct queue_properties*) ;
 int FUNC_3 (struct mqd_manager*,struct vi_mqd*,struct queue_properties*) ;
 void* FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct mqd_manager *VAR_12, void **VAR_13,
   struct kfd_mem_obj *VAR_14, uint64_t *VAR_15,
   struct queue_properties *VAR_16)
{
 uint64_t VAR_17;
 struct vi_mqd *VAR_18;

 VAR_18 = (struct vi_mqd *) VAR_14->cpu_ptr;
 VAR_17 = VAR_14->gpu_addr;

 FUNC_1(VAR_18, 0, sizeof(struct vi_mqd));

 VAR_18->header = 0xC0310800;
 VAR_18->compute_pipelinestat_enable = 1;
 VAR_18->compute_static_thread_mgmt_se0 = 0xFFFFFFFF;
 VAR_18->compute_static_thread_mgmt_se1 = 0xFFFFFFFF;
 VAR_18->compute_static_thread_mgmt_se2 = 0xFFFFFFFF;
 VAR_18->compute_static_thread_mgmt_se3 = 0xFFFFFFFF;

 VAR_18->cp_hqd_persistent_state = VAR_2 |
   0x53 << VAR_3;

 VAR_18->cp_mqd_control = 1 << VAR_9 |
   VAR_11 << VAR_8;

 VAR_18->cp_mqd_base_addr_lo = FUNC_0(VAR_17);
 VAR_18->cp_mqd_base_addr_hi = FUNC_4(VAR_17);

 VAR_18->cp_hqd_quantum = 1 << VAR_6 |
   1 << VAR_7 |
   10 << VAR_5;

 FUNC_2(VAR_18, VAR_16);
 VAR_18->cp_hqd_eop_rptr = 1 << VAR_1;

 if (VAR_16->format == VAR_10)
  VAR_18->cp_hqd_iq_rptr = 1;

 if (VAR_16->tba_addr) {
  VAR_18->compute_tba_lo = FUNC_0(VAR_16->tba_addr >> 8);
  VAR_18->compute_tba_hi = FUNC_4(VAR_16->tba_addr >> 8);
  VAR_18->compute_tma_lo = FUNC_0(VAR_16->tma_addr >> 8);
  VAR_18->compute_tma_hi = FUNC_4(VAR_16->tma_addr >> 8);
  VAR_18->compute_pgm_rsrc2 |=
   (1 << VAR_0);
 }

 if (VAR_12->dev->cwsr_enabled && VAR_16->ctx_save_restore_area_address) {
  VAR_18->cp_hqd_persistent_state |=
   (1 << VAR_4);
  VAR_18->cp_hqd_ctx_save_base_addr_lo =
   FUNC_0(VAR_16->ctx_save_restore_area_address);
  VAR_18->cp_hqd_ctx_save_base_addr_hi =
   FUNC_4(VAR_16->ctx_save_restore_area_address);
  VAR_18->cp_hqd_ctx_save_size = VAR_16->ctx_save_restore_area_size;
  VAR_18->cp_hqd_cntl_stack_size = VAR_16->ctl_stack_size;
  VAR_18->cp_hqd_cntl_stack_offset = VAR_16->ctl_stack_size;
  VAR_18->cp_hqd_wg_state_offset = VAR_16->ctl_stack_size;
 }

 *VAR_13 = VAR_18;
 if (VAR_15)
  *VAR_15 = VAR_17;
 VAR_12->update_mqd(VAR_12, VAR_18, VAR_16);
}
