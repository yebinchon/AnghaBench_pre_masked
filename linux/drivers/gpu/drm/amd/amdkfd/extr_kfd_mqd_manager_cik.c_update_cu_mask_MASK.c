
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint32_t ;
struct queue_properties {scalar_t__ cu_mask_count; int cu_mask; } ;
struct mqd_manager {int dummy; } ;
struct cik_mqd {void* compute_static_thread_mgmt_se3; void* compute_static_thread_mgmt_se2; void* compute_static_thread_mgmt_se1; void* compute_static_thread_mgmt_se0; } ;


 struct cik_mqd* FUNC_0 (void*) ;
 int FUNC_1 (struct mqd_manager*,int ,scalar_t__,void**) ;
 int FUNC_2 (char*,void*,void*,void*,void*) ;

__attribute__((used)) static void FUNC_3(struct mqd_manager *VAR_0, void *VAR_1,
   struct queue_properties *VAR_2)
{
 struct cik_mqd *VAR_3;
 uint32_t VAR_4[4] = {0};

 if (VAR_2->cu_mask_count == 0)
  return;

 FUNC_1(VAR_0,
  VAR_2->cu_mask, VAR_2->cu_mask_count, VAR_4);

 VAR_3 = FUNC_0(VAR_1);
 VAR_3->compute_static_thread_mgmt_se0 = VAR_4[0];
 VAR_3->compute_static_thread_mgmt_se1 = VAR_4[1];
 VAR_3->compute_static_thread_mgmt_se2 = VAR_4[2];
 VAR_3->compute_static_thread_mgmt_se3 = VAR_4[3];

 FUNC_2("Update cu mask to %#x %#x %#x %#x\n",
  VAR_3->compute_static_thread_mgmt_se0,
  VAR_3->compute_static_thread_mgmt_se1,
  VAR_3->compute_static_thread_mgmt_se2,
  VAR_3->compute_static_thread_mgmt_se3);
}
