
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct vi_mqd {int cp_hqd_pq_control; int cp_hqd_pq_doorbell_control; unsigned int cp_hqd_eop_control; unsigned int cp_hqd_ib_control; unsigned int cp_hqd_iq_timer; unsigned int cp_hqd_ctx_save_control; int cp_hqd_vmid; void* cp_hqd_eop_base_addr_hi; void* cp_hqd_eop_base_addr_lo; void* cp_hqd_pq_wptr_poll_addr_hi; void* cp_hqd_pq_wptr_poll_addr_lo; void* cp_hqd_pq_rptr_report_addr_hi; void* cp_hqd_pq_rptr_report_addr_lo; void* cp_hqd_pq_base_hi; void* cp_hqd_pq_base_lo; } ;
struct queue_properties {int queue_size; int doorbell_off; int eop_ring_buffer_size; int eop_ring_buffer_address; scalar_t__ format; int is_active; scalar_t__ ctx_save_restore_area_address; int vmid; scalar_t__ write_ptr; scalar_t__ read_ptr; scalar_t__ queue_address; } ;
struct mqd_manager {TYPE_1__* dev; } ;
struct TYPE_2__ {scalar_t__ cwsr_enabled; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 unsigned int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_0 (struct queue_properties) ;
 struct vi_mqd* FUNC_1 (void*) ;
 void* FUNC_2 (int) ;
 unsigned int FUNC_3 (int,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (struct vi_mqd*,struct queue_properties*) ;
 int FUNC_7 (struct mqd_manager*,void*,struct queue_properties*) ;
 void* FUNC_8 (int) ;

__attribute__((used)) static void FUNC_9(struct mqd_manager *VAR_16, void *VAR_17,
   struct queue_properties *VAR_18, unsigned int VAR_19,
   unsigned int VAR_20)
{
 struct vi_mqd *VAR_21;

 VAR_21 = FUNC_1(VAR_17);

 VAR_21->cp_hqd_pq_control = 5 << VAR_12 |
   VAR_20 << VAR_11 |
   VAR_19 << VAR_9;
 VAR_21->cp_hqd_pq_control |= FUNC_4(VAR_18->queue_size / 4) - 1;
 FUNC_5("cp_hqd_pq_control 0x%x\n", VAR_21->cp_hqd_pq_control);

 VAR_21->cp_hqd_pq_base_lo = FUNC_2((uint64_t)VAR_18->queue_address >> 8);
 VAR_21->cp_hqd_pq_base_hi = FUNC_8((uint64_t)VAR_18->queue_address >> 8);

 VAR_21->cp_hqd_pq_rptr_report_addr_lo = FUNC_2((uint64_t)VAR_18->read_ptr);
 VAR_21->cp_hqd_pq_rptr_report_addr_hi = FUNC_8((uint64_t)VAR_18->read_ptr);
 VAR_21->cp_hqd_pq_wptr_poll_addr_lo = FUNC_2((uint64_t)VAR_18->write_ptr);
 VAR_21->cp_hqd_pq_wptr_poll_addr_hi = FUNC_8((uint64_t)VAR_18->write_ptr);

 VAR_21->cp_hqd_pq_doorbell_control =
  VAR_18->doorbell_off <<
   VAR_14;
 FUNC_5("cp_hqd_pq_doorbell_control 0x%x\n",
   VAR_21->cp_hqd_pq_doorbell_control);

 VAR_21->cp_hqd_eop_control = VAR_20 << VAR_2 |
   VAR_19 << VAR_3;

 VAR_21->cp_hqd_ib_control = VAR_20 << VAR_4 |
   3 << VAR_5 |
   VAR_19 << VAR_6;
 VAR_21->cp_hqd_eop_control |= FUNC_3(0xA,
  FUNC_4(VAR_18->eop_ring_buffer_size / 4) - 1);
 VAR_21->cp_hqd_eop_base_addr_lo =
   FUNC_2(VAR_18->eop_ring_buffer_address >> 8);
 VAR_21->cp_hqd_eop_base_addr_hi =
   FUNC_8(VAR_18->eop_ring_buffer_address >> 8);

 VAR_21->cp_hqd_iq_timer = VAR_20 << VAR_7 |
   VAR_19 << VAR_8;

 VAR_21->cp_hqd_vmid = VAR_18->vmid;

 if (VAR_18->format == VAR_15) {
  VAR_21->cp_hqd_pq_control |= VAR_10 |
    2 << VAR_13;
 }

 if (VAR_16->dev->cwsr_enabled && VAR_18->ctx_save_restore_area_address)
  VAR_21->cp_hqd_ctx_save_control =
   VAR_20 << VAR_0 |
   VAR_19 << VAR_1;

 FUNC_7(VAR_16, VAR_17, VAR_18);
 FUNC_6(VAR_21, VAR_18);

 VAR_18->is_active = FUNC_0(*VAR_18);
}
