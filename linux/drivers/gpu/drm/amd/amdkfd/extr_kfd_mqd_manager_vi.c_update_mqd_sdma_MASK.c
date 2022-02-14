
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct vi_sdma_mqd {int sdmax_rlcx_rb_cntl; int sdmax_rlcx_doorbell; int sdma_queue_id; int sdma_engine_id; int sdmax_rlcx_virtual_addr; void* sdmax_rlcx_rb_rptr_addr_hi; void* sdmax_rlcx_rb_rptr_addr_lo; void* sdmax_rlcx_rb_base_hi; void* sdmax_rlcx_rb_base; } ;
struct queue_properties {int queue_size; int vmid; int queue_address; int doorbell_off; int is_active; int sdma_queue_id; int sdma_engine_id; int sdma_vm_addr; scalar_t__ read_ptr; } ;
struct mqd_manager {int dummy; } ;


 int FUNC_0 (struct queue_properties) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct vi_sdma_mqd* FUNC_1 (void*) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (int) ;
 void* FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct mqd_manager *VAR_5, void *VAR_6,
  struct queue_properties *VAR_7)
{
 struct vi_sdma_mqd *VAR_8;

 VAR_8 = FUNC_1(VAR_6);
 VAR_8->sdmax_rlcx_rb_cntl = FUNC_3(VAR_7->queue_size / 4)
  << VAR_1 |
  VAR_7->vmid << VAR_2 |
  1 << VAR_3 |
  6 << VAR_4;

 VAR_8->sdmax_rlcx_rb_base = FUNC_2(VAR_7->queue_address >> 8);
 VAR_8->sdmax_rlcx_rb_base_hi = FUNC_4(VAR_7->queue_address >> 8);
 VAR_8->sdmax_rlcx_rb_rptr_addr_lo = FUNC_2((uint64_t)VAR_7->read_ptr);
 VAR_8->sdmax_rlcx_rb_rptr_addr_hi = FUNC_4((uint64_t)VAR_7->read_ptr);
 VAR_8->sdmax_rlcx_doorbell =
  VAR_7->doorbell_off << VAR_0;

 VAR_8->sdmax_rlcx_virtual_addr = VAR_7->sdma_vm_addr;

 VAR_8->sdma_engine_id = VAR_7->sdma_engine_id;
 VAR_8->sdma_queue_id = VAR_7->sdma_queue_id;

 VAR_7->is_active = FUNC_0(*VAR_7);
}
