
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct v10_compute_mqd {int cp_hqd_pq_control; int cp_hqd_pq_doorbell_control; int cp_hqd_ib_control; scalar_t__ cp_hqd_ctx_save_control; int cp_hqd_vmid; scalar_t__ cp_hqd_iq_timer; void* cp_hqd_eop_base_addr_hi; void* cp_hqd_eop_base_addr_lo; int cp_hqd_eop_control; void* cp_hqd_pq_wptr_poll_addr_hi; void* cp_hqd_pq_wptr_poll_addr_lo; void* cp_hqd_pq_rptr_report_addr_hi; void* cp_hqd_pq_rptr_report_addr_lo; void* cp_hqd_pq_base_hi; void* cp_hqd_pq_base_lo; } ;
struct queue_properties {int queue_size; scalar_t__ queue_address; int doorbell_off; int eop_ring_buffer_size; int eop_ring_buffer_address; scalar_t__ format; int is_active; scalar_t__ queue_percent; int is_evicted; int vmid; scalar_t__ write_ptr; scalar_t__ read_ptr; } ;
struct mqd_manager {TYPE_1__* dev; } ;
struct TYPE_2__ {scalar_t__ cwsr_enabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int) ;
 struct v10_compute_mqd* FUNC_1 (void*) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (struct mqd_manager*,void*,struct queue_properties*) ;
 void* FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(struct mqd_manager *VAR_8, void *VAR_9,
        struct queue_properties *VAR_10)
{
 struct v10_compute_mqd *VAR_11;

 VAR_11 = FUNC_1(VAR_9);

 VAR_11->cp_hqd_pq_control = 5 << VAR_3;
 VAR_11->cp_hqd_pq_control |=
   FUNC_0(VAR_10->queue_size / sizeof(unsigned int)) - 1 - 1;
 FUNC_4("cp_hqd_pq_control 0x%x\n", VAR_11->cp_hqd_pq_control);

 VAR_11->cp_hqd_pq_base_lo = FUNC_2((uint64_t)VAR_10->queue_address >> 8);
 VAR_11->cp_hqd_pq_base_hi = FUNC_6((uint64_t)VAR_10->queue_address >> 8);

 VAR_11->cp_hqd_pq_rptr_report_addr_lo = FUNC_2((uint64_t)VAR_10->read_ptr);
 VAR_11->cp_hqd_pq_rptr_report_addr_hi = FUNC_6((uint64_t)VAR_10->read_ptr);
 VAR_11->cp_hqd_pq_wptr_poll_addr_lo = FUNC_2((uint64_t)VAR_10->write_ptr);
 VAR_11->cp_hqd_pq_wptr_poll_addr_hi = FUNC_6((uint64_t)VAR_10->write_ptr);

 VAR_11->cp_hqd_pq_doorbell_control =
  VAR_10->doorbell_off <<
   VAR_6;
 FUNC_4("cp_hqd_pq_doorbell_control 0x%x\n",
   VAR_11->cp_hqd_pq_doorbell_control);

 VAR_11->cp_hqd_ib_control = 3 << VAR_0;
 VAR_11->cp_hqd_eop_control = FUNC_3(0xA,
  FUNC_0(VAR_10->eop_ring_buffer_size / sizeof(unsigned int)) - 1 - 1);
 VAR_11->cp_hqd_eop_base_addr_lo =
   FUNC_2(VAR_10->eop_ring_buffer_address >> 8);
 VAR_11->cp_hqd_eop_base_addr_hi =
   FUNC_6(VAR_10->eop_ring_buffer_address >> 8);

 VAR_11->cp_hqd_iq_timer = 0;

 VAR_11->cp_hqd_vmid = VAR_10->vmid;

 if (VAR_10->format == VAR_7) {

  VAR_11->cp_hqd_pq_control |= VAR_1 |
    2 << VAR_4 |
    1 << VAR_2 ;
  VAR_11->cp_hqd_pq_doorbell_control |=
   1 << VAR_5;
 }
 if (VAR_8->dev->cwsr_enabled)
  VAR_11->cp_hqd_ctx_save_control = 0;

 FUNC_5(VAR_8, VAR_9, VAR_10);

 VAR_10->is_active = (VAR_10->queue_size > 0 &&
   VAR_10->queue_address != 0 &&
   VAR_10->queue_percent > 0 &&
   !VAR_10->is_evicted);
}
