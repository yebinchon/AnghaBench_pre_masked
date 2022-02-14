
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct queue_properties {int queue_size; scalar_t__ format; int is_active; int vmid; int doorbell_off; scalar_t__ read_ptr; scalar_t__ queue_address; } ;
struct mqd_manager {int dummy; } ;
struct cik_mqd {int cp_hqd_pq_control; int cp_hqd_vmid; int cp_hqd_pq_doorbell_control; void* cp_hqd_pq_rptr_report_addr_hi; void* cp_hqd_pq_rptr_report_addr_lo; void* cp_hqd_pq_base_hi; void* cp_hqd_pq_base_lo; int cp_hqd_ib_control; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct queue_properties) ;
 struct cik_mqd* FUNC_2 (void*) ;
 void* FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct cik_mqd*,struct queue_properties*) ;
 int FUNC_6 (struct mqd_manager*,void*,struct queue_properties*) ;
 void* FUNC_7 (int) ;

__attribute__((used)) static void FUNC_8(struct mqd_manager *VAR_7, void *VAR_8,
   struct queue_properties *VAR_9, unsigned int VAR_10)
{
 struct cik_mqd *VAR_11;

 VAR_11 = FUNC_2(VAR_8);
 VAR_11->cp_hqd_pq_control = VAR_2 |
    VAR_0;
 VAR_11->cp_hqd_ib_control = VAR_1;
 if (VAR_10) {
  VAR_11->cp_hqd_pq_control |= VAR_6;
  VAR_11->cp_hqd_ib_control |= VAR_3;
 }





 VAR_11->cp_hqd_pq_control |= FUNC_4(VAR_9->queue_size / 4) - 1;
 VAR_11->cp_hqd_pq_base_lo = FUNC_3((uint64_t)VAR_9->queue_address >> 8);
 VAR_11->cp_hqd_pq_base_hi = FUNC_7((uint64_t)VAR_9->queue_address >> 8);
 VAR_11->cp_hqd_pq_rptr_report_addr_lo = FUNC_3((uint64_t)VAR_9->read_ptr);
 VAR_11->cp_hqd_pq_rptr_report_addr_hi = FUNC_7((uint64_t)VAR_9->read_ptr);
 VAR_11->cp_hqd_pq_doorbell_control = FUNC_0(VAR_9->doorbell_off);

 VAR_11->cp_hqd_vmid = VAR_9->vmid;

 if (VAR_9->format == VAR_4)
  VAR_11->cp_hqd_pq_control |= VAR_5;

 FUNC_6(VAR_7, VAR_8, VAR_9);
 FUNC_5(VAR_11, VAR_9);

 VAR_9->is_active = FUNC_1(*VAR_9);
}
