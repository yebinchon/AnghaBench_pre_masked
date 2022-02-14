
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct v10_compute_mqd {int header; int compute_pipelinestat_enable; int compute_static_thread_mgmt_se0; int compute_static_thread_mgmt_se1; int compute_static_thread_mgmt_se2; int compute_static_thread_mgmt_se3; int cp_hqd_persistent_state; int cp_mqd_control; int cp_hqd_quantum; int cp_hqd_pipe_priority; int cp_hqd_queue_priority; int cp_hqd_aql_control; int cp_hqd_wg_state_offset; int cp_hqd_cntl_stack_offset; int cp_hqd_cntl_stack_size; int cp_hqd_ctx_save_size; void* cp_hqd_ctx_save_base_addr_hi; void* cp_hqd_ctx_save_base_addr_lo; void* cp_mqd_base_addr_hi; void* cp_mqd_base_addr_lo; } ;
struct queue_properties {scalar_t__ format; int ctl_stack_size; int ctx_save_restore_area_size; int ctx_save_restore_area_address; } ;
struct mqd_manager {int (* update_mqd ) (struct mqd_manager*,struct v10_compute_mqd*,struct queue_properties*) ;TYPE_1__* dev; } ;
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
 scalar_t__ VAR_8 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (struct v10_compute_mqd*,int ,int) ;
 int FUNC_2 (struct mqd_manager*,struct v10_compute_mqd*,struct queue_properties*) ;
 void* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct mqd_manager *VAR_9, void **VAR_10,
   struct kfd_mem_obj *VAR_11, uint64_t *VAR_12,
   struct queue_properties *VAR_13)
{
 uint64_t VAR_14;
 struct v10_compute_mqd *VAR_15;

 VAR_15 = (struct v10_compute_mqd *) VAR_11->cpu_ptr;
 VAR_14 = VAR_11->gpu_addr;

 FUNC_1(VAR_15, 0, sizeof(struct v10_compute_mqd));

 VAR_15->header = 0xC0310800;
 VAR_15->compute_pipelinestat_enable = 1;
 VAR_15->compute_static_thread_mgmt_se0 = 0xFFFFFFFF;
 VAR_15->compute_static_thread_mgmt_se1 = 0xFFFFFFFF;
 VAR_15->compute_static_thread_mgmt_se2 = 0xFFFFFFFF;
 VAR_15->compute_static_thread_mgmt_se3 = 0xFFFFFFFF;

 VAR_15->cp_hqd_persistent_state = VAR_1 |
   0x53 << VAR_2;

 VAR_15->cp_mqd_control = 1 << VAR_7;

 VAR_15->cp_mqd_base_addr_lo = FUNC_0(VAR_14);
 VAR_15->cp_mqd_base_addr_hi = FUNC_3(VAR_14);

 VAR_15->cp_hqd_quantum = 1 << VAR_5 |
   1 << VAR_6 |
   10 << VAR_4;

 VAR_15->cp_hqd_pipe_priority = 1;
 VAR_15->cp_hqd_queue_priority = 15;

 if (VAR_13->format == VAR_8) {
  VAR_15->cp_hqd_aql_control =
   1 << VAR_0;
 }

 if (VAR_9->dev->cwsr_enabled) {
  VAR_15->cp_hqd_persistent_state |=
   (1 << VAR_3);
  VAR_15->cp_hqd_ctx_save_base_addr_lo =
   FUNC_0(VAR_13->ctx_save_restore_area_address);
  VAR_15->cp_hqd_ctx_save_base_addr_hi =
   FUNC_3(VAR_13->ctx_save_restore_area_address);
  VAR_15->cp_hqd_ctx_save_size = VAR_13->ctx_save_restore_area_size;
  VAR_15->cp_hqd_cntl_stack_size = VAR_13->ctl_stack_size;
  VAR_15->cp_hqd_cntl_stack_offset = VAR_13->ctl_stack_size;
  VAR_15->cp_hqd_wg_state_offset = VAR_13->ctl_stack_size;
 }

 *VAR_10 = VAR_15;
 if (VAR_12)
  *VAR_12 = VAR_14;
 VAR_9->update_mqd(VAR_9, VAR_15, VAR_13);
}
