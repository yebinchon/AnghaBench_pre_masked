
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct v10_sdma_mqd {int sdmax_rlcx_rb_cntl; int sdmax_rlcx_doorbell_offset; int sdmax_rlcx_dummy_reg; int sdma_queue_id; int sdma_engine_id; void* sdmax_rlcx_rb_rptr_addr_hi; void* sdmax_rlcx_rb_rptr_addr_lo; void* sdmax_rlcx_rb_base_hi; void* sdmax_rlcx_rb_base; } ;
struct queue_properties {int queue_size; int vmid; int queue_address; int doorbell_off; int is_active; scalar_t__ queue_percent; int is_evicted; int sdma_queue_id; int sdma_engine_id; scalar_t__ read_ptr; } ;
struct mqd_manager {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 struct v10_sdma_mqd* FUNC_1 (void*) ;
 void* FUNC_2 (int) ;
 void* FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct mqd_manager *VAR_6, void *VAR_7,
  struct queue_properties *VAR_8)
{
 struct v10_sdma_mqd *VAR_9;

 VAR_9 = FUNC_1(VAR_7);
 VAR_9->sdmax_rlcx_rb_cntl = (FUNC_0(VAR_8->queue_size / sizeof(unsigned int)) - 1)
  << VAR_1 |
  VAR_8->vmid << VAR_2 |
  1 << VAR_3 |
  6 << VAR_4;

 VAR_9->sdmax_rlcx_rb_base = FUNC_2(VAR_8->queue_address >> 8);
 VAR_9->sdmax_rlcx_rb_base_hi = FUNC_3(VAR_8->queue_address >> 8);
 VAR_9->sdmax_rlcx_rb_rptr_addr_lo = FUNC_2((uint64_t)VAR_8->read_ptr);
 VAR_9->sdmax_rlcx_rb_rptr_addr_hi = FUNC_3((uint64_t)VAR_8->read_ptr);
 VAR_9->sdmax_rlcx_doorbell_offset =
  VAR_8->doorbell_off << VAR_0;

 VAR_9->sdma_engine_id = VAR_8->sdma_engine_id;
 VAR_9->sdma_queue_id = VAR_8->sdma_queue_id;
 VAR_9->sdmax_rlcx_dummy_reg = VAR_5;


 VAR_8->is_active = (VAR_8->queue_size > 0 &&
   VAR_8->queue_address != 0 &&
   VAR_8->queue_percent > 0 &&
   !VAR_8->is_evicted);
}
