
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct v9_mqd {int cp_hqd_pq_control; int cp_hqd_pq_doorbell_control; int cp_hqd_ib_control; scalar_t__ cp_hqd_ctx_save_control; int cp_hqd_vmid; scalar_t__ cp_hqd_iq_timer; void* cp_hqd_eop_base_addr_hi; void* cp_hqd_eop_base_addr_lo; int cp_hqd_eop_control; void* cp_hqd_pq_wptr_poll_addr_hi; void* cp_hqd_pq_wptr_poll_addr_lo; void* cp_hqd_pq_rptr_report_addr_hi; void* cp_hqd_pq_rptr_report_addr_lo; void* cp_hqd_pq_base_hi; void* cp_hqd_pq_base_lo; } ;
struct queue_properties {int queue_size; int doorbell_off; int eop_ring_buffer_size; int eop_ring_buffer_address; scalar_t__ format; int is_active; scalar_t__ ctx_save_restore_area_address; int vmid; scalar_t__ write_ptr; scalar_t__ read_ptr; scalar_t__ queue_address; } ;
struct mqd_manager {TYPE_1__* dev; } ;
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
 int FUNC_0 (struct queue_properties) ;
 struct v9_mqd* FUNC_1 (void*) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (struct v9_mqd*,struct queue_properties*) ;
 int FUNC_7 (struct mqd_manager*,void*,struct queue_properties*) ;
 void* FUNC_8 (int) ;

__attribute__((used)) static void FUNC_9(struct mqd_manager *VAR_10, void *VAR_11,
        struct queue_properties *VAR_12)
{
 struct v9_mqd *VAR_13;

 VAR_13 = FUNC_1(VAR_11);

 VAR_13->cp_hqd_pq_control = 5 << VAR_4;
 VAR_13->cp_hqd_pq_control |= FUNC_4(VAR_12->queue_size / 4) - 1;
 FUNC_5("cp_hqd_pq_control 0x%x\n", VAR_13->cp_hqd_pq_control);

 VAR_13->cp_hqd_pq_base_lo = FUNC_2((uint64_t)VAR_12->queue_address >> 8);
 VAR_13->cp_hqd_pq_base_hi = FUNC_8((uint64_t)VAR_12->queue_address >> 8);

 VAR_13->cp_hqd_pq_rptr_report_addr_lo = FUNC_2((uint64_t)VAR_12->read_ptr);
 VAR_13->cp_hqd_pq_rptr_report_addr_hi = FUNC_8((uint64_t)VAR_12->read_ptr);
 VAR_13->cp_hqd_pq_wptr_poll_addr_lo = FUNC_2((uint64_t)VAR_12->write_ptr);
 VAR_13->cp_hqd_pq_wptr_poll_addr_hi = FUNC_8((uint64_t)VAR_12->write_ptr);

 VAR_13->cp_hqd_pq_doorbell_control =
  VAR_12->doorbell_off <<
   VAR_8;
 FUNC_5("cp_hqd_pq_doorbell_control 0x%x\n",
   VAR_13->cp_hqd_pq_doorbell_control);

 VAR_13->cp_hqd_ib_control =
  3 << VAR_1 |
  1 << VAR_0;
 VAR_13->cp_hqd_eop_control = FUNC_3(0xA,
  FUNC_4(VAR_12->eop_ring_buffer_size / 4) - 1);
 VAR_13->cp_hqd_eop_base_addr_lo =
   FUNC_2(VAR_12->eop_ring_buffer_address >> 8);
 VAR_13->cp_hqd_eop_base_addr_hi =
   FUNC_8(VAR_12->eop_ring_buffer_address >> 8);

 VAR_13->cp_hqd_iq_timer = 0;

 VAR_13->cp_hqd_vmid = VAR_12->vmid;

 if (VAR_12->format == VAR_9) {
  VAR_13->cp_hqd_pq_control |= VAR_2 |
    2 << VAR_5 |
    1 << VAR_3 |
    1 << VAR_6;
  VAR_13->cp_hqd_pq_doorbell_control |= 1 <<
   VAR_7;
 }
 if (VAR_10->dev->cwsr_enabled && VAR_12->ctx_save_restore_area_address)
  VAR_13->cp_hqd_ctx_save_control = 0;

 FUNC_7(VAR_10, VAR_11, VAR_12);
 FUNC_6(VAR_13, VAR_12);

 VAR_12->is_active = FUNC_0(*VAR_12);
}
