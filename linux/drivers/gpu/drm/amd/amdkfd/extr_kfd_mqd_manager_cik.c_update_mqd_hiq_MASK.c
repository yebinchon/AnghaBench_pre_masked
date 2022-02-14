
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct queue_properties {int queue_size; int is_active; int vmid; int doorbell_off; scalar_t__ read_ptr; scalar_t__ queue_address; } ;
struct mqd_manager {int dummy; } ;
struct cik_mqd {int cp_hqd_pq_control; int cp_hqd_vmid; int cp_hqd_pq_doorbell_control; void* cp_hqd_pq_rptr_report_addr_hi; void* cp_hqd_pq_rptr_report_addr_lo; void* cp_hqd_pq_base_hi; void* cp_hqd_pq_base_lo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct queue_properties) ;
 struct cik_mqd* FUNC_2 (void*) ;
 void* FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct cik_mqd*,struct queue_properties*) ;
 void* FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(struct mqd_manager *VAR_4, void *VAR_5,
    struct queue_properties *VAR_6)
{
 struct cik_mqd *VAR_7;

 VAR_7 = FUNC_2(VAR_5);
 VAR_7->cp_hqd_pq_control = VAR_1 |
    VAR_0 |
    VAR_3 |
    VAR_2;





 VAR_7->cp_hqd_pq_control |= FUNC_4(VAR_6->queue_size / 4) - 1;
 VAR_7->cp_hqd_pq_base_lo = FUNC_3((uint64_t)VAR_6->queue_address >> 8);
 VAR_7->cp_hqd_pq_base_hi = FUNC_6((uint64_t)VAR_6->queue_address >> 8);
 VAR_7->cp_hqd_pq_rptr_report_addr_lo = FUNC_3((uint64_t)VAR_6->read_ptr);
 VAR_7->cp_hqd_pq_rptr_report_addr_hi = FUNC_6((uint64_t)VAR_6->read_ptr);
 VAR_7->cp_hqd_pq_doorbell_control = FUNC_0(VAR_6->doorbell_off);

 VAR_7->cp_hqd_vmid = VAR_6->vmid;

 VAR_6->is_active = FUNC_1(*VAR_6);

 FUNC_5(VAR_7, VAR_6);
}
