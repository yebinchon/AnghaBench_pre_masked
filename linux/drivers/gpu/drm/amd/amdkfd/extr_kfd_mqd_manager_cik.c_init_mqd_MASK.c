
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct queue_properties {scalar_t__ format; } ;
struct mqd_manager {int (* update_mqd ) (struct mqd_manager*,struct cik_mqd*,struct queue_properties*) ;} ;
struct kfd_mem_obj {int gpu_addr; scalar_t__ cpu_ptr; } ;
struct cik_mqd {int header; int compute_pipelinestat_enable; int compute_static_thread_mgmt_se0; int compute_static_thread_mgmt_se1; int compute_static_thread_mgmt_se2; int compute_static_thread_mgmt_se3; int cp_hqd_persistent_state; int cp_hqd_quantum; int cp_hqd_iq_rptr; int cp_mqd_base_addr_hi; int cp_mqd_base_addr_lo; int cp_mqd_control; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct cik_mqd*,int ,int ) ;
 int FUNC_4 (struct cik_mqd*,struct queue_properties*) ;
 int FUNC_5 (struct mqd_manager*,struct cik_mqd*,struct queue_properties*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct mqd_manager *VAR_7, void **VAR_8,
  struct kfd_mem_obj *VAR_9, uint64_t *VAR_10,
  struct queue_properties *VAR_11)
{
 uint64_t VAR_12;
 struct cik_mqd *VAR_13;

 VAR_13 = (struct cik_mqd *) VAR_9->cpu_ptr;
 VAR_12 = VAR_9->gpu_addr;

 FUNC_3(VAR_13, 0, FUNC_0(sizeof(struct cik_mqd), 256));

 VAR_13->header = 0xC0310800;
 VAR_13->compute_pipelinestat_enable = 1;
 VAR_13->compute_static_thread_mgmt_se0 = 0xFFFFFFFF;
 VAR_13->compute_static_thread_mgmt_se1 = 0xFFFFFFFF;
 VAR_13->compute_static_thread_mgmt_se2 = 0xFFFFFFFF;
 VAR_13->compute_static_thread_mgmt_se3 = 0xFFFFFFFF;






 VAR_13->cp_hqd_persistent_state =
    VAR_1 | VAR_4;

 VAR_13->cp_mqd_control = VAR_3;
 VAR_13->cp_mqd_base_addr_lo = FUNC_2(VAR_12);
 VAR_13->cp_mqd_base_addr_hi = FUNC_6(VAR_12);

 VAR_13->cp_hqd_quantum = VAR_5 | VAR_6 |
    FUNC_1(10);
 FUNC_4(VAR_13, VAR_11);

 if (VAR_11->format == VAR_2)
  VAR_13->cp_hqd_iq_rptr = VAR_0;

 *VAR_8 = VAR_13;
 if (VAR_10)
  *VAR_10 = VAR_12;
 VAR_7->update_mqd(VAR_7, VAR_13, VAR_11);
}
