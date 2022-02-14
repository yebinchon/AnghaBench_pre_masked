
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct v9_mqd {int header; int compute_pipelinestat_enable; int compute_static_thread_mgmt_se0; int compute_static_thread_mgmt_se1; int compute_static_thread_mgmt_se2; int compute_static_thread_mgmt_se3; int compute_static_thread_mgmt_se4; int compute_static_thread_mgmt_se5; int compute_static_thread_mgmt_se6; int compute_static_thread_mgmt_se7; int cp_hqd_persistent_state; int cp_mqd_control; int cp_hqd_quantum; int cp_hqd_aql_control; int compute_pgm_rsrc2; int cp_hqd_wg_state_offset; int cp_hqd_cntl_stack_offset; int cp_hqd_cntl_stack_size; int cp_hqd_ctx_save_size; void* cp_hqd_ctx_save_base_addr_hi; void* cp_hqd_ctx_save_base_addr_lo; void* cp_mqd_base_addr_hi; void* cp_mqd_base_addr_lo; } ;
struct queue_properties {scalar_t__ format; int ctl_stack_size; int ctx_save_restore_area_size; scalar_t__ ctx_save_restore_area_address; scalar_t__ tba_addr; } ;
struct mqd_manager {int (* update_mqd ) (struct mqd_manager*,struct v9_mqd*,struct queue_properties*) ;TYPE_1__* dev; } ;
struct kfd_mem_obj {scalar_t__ gpu_addr; scalar_t__ cpu_ptr; } ;
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
 scalar_t__ VAR_9 ;
 void* FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct v9_mqd*,int ,int) ;
 int FUNC_2 (struct mqd_manager*,struct v9_mqd*,struct queue_properties*) ;
 void* FUNC_3 (scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct mqd_manager *VAR_10, void **VAR_11,
   struct kfd_mem_obj *VAR_12, uint64_t *VAR_13,
   struct queue_properties *VAR_14)
{
 uint64_t VAR_15;
 struct v9_mqd *VAR_16;

 VAR_16 = (struct v9_mqd *) VAR_12->cpu_ptr;
 VAR_15 = VAR_12->gpu_addr;

 FUNC_1(VAR_16, 0, sizeof(struct v9_mqd));

 VAR_16->header = 0xC0310800;
 VAR_16->compute_pipelinestat_enable = 1;
 VAR_16->compute_static_thread_mgmt_se0 = 0xFFFFFFFF;
 VAR_16->compute_static_thread_mgmt_se1 = 0xFFFFFFFF;
 VAR_16->compute_static_thread_mgmt_se2 = 0xFFFFFFFF;
 VAR_16->compute_static_thread_mgmt_se3 = 0xFFFFFFFF;
 VAR_16->compute_static_thread_mgmt_se4 = 0xFFFFFFFF;
 VAR_16->compute_static_thread_mgmt_se5 = 0xFFFFFFFF;
 VAR_16->compute_static_thread_mgmt_se6 = 0xFFFFFFFF;
 VAR_16->compute_static_thread_mgmt_se7 = 0xFFFFFFFF;

 VAR_16->cp_hqd_persistent_state = VAR_2 |
   0x53 << VAR_3;

 VAR_16->cp_mqd_control = 1 << VAR_8;

 VAR_16->cp_mqd_base_addr_lo = FUNC_0(VAR_15);
 VAR_16->cp_mqd_base_addr_hi = FUNC_3(VAR_15);

 VAR_16->cp_hqd_quantum = 1 << VAR_6 |
   1 << VAR_7 |
   10 << VAR_5;

 if (VAR_14->format == VAR_9) {
  VAR_16->cp_hqd_aql_control =
   1 << VAR_1;
 }

 if (VAR_14->tba_addr) {
  VAR_16->compute_pgm_rsrc2 |=
   (1 << VAR_0);
 }

 if (VAR_10->dev->cwsr_enabled && VAR_14->ctx_save_restore_area_address) {
  VAR_16->cp_hqd_persistent_state |=
   (1 << VAR_4);
  VAR_16->cp_hqd_ctx_save_base_addr_lo =
   FUNC_0(VAR_14->ctx_save_restore_area_address);
  VAR_16->cp_hqd_ctx_save_base_addr_hi =
   FUNC_3(VAR_14->ctx_save_restore_area_address);
  VAR_16->cp_hqd_ctx_save_size = VAR_14->ctx_save_restore_area_size;
  VAR_16->cp_hqd_cntl_stack_size = VAR_14->ctl_stack_size;
  VAR_16->cp_hqd_cntl_stack_offset = VAR_14->ctl_stack_size;
  VAR_16->cp_hqd_wg_state_offset = VAR_14->ctl_stack_size;
 }

 *VAR_11 = VAR_16;
 if (VAR_13)
  *VAR_13 = VAR_15;
 VAR_10->update_mqd(VAR_10, VAR_16, VAR_14);
}
