
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct v10_compute_mqd {int cp_hqd_pq_control; } ;
struct queue_properties {int dummy; } ;
struct mqd_manager {int dummy; } ;
struct kfd_mem_obj {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct v10_compute_mqd* FUNC_0 (void*) ;
 int FUNC_1 (struct mqd_manager*,void**,struct kfd_mem_obj*,int *,struct queue_properties*) ;

__attribute__((used)) static void FUNC_2(struct mqd_manager *VAR_2, void **VAR_3,
   struct kfd_mem_obj *VAR_4, uint64_t *VAR_5,
   struct queue_properties *VAR_6)
{
 struct v10_compute_mqd *VAR_7;

 FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);

 VAR_7 = FUNC_0(*VAR_3);

 VAR_7->cp_hqd_pq_control |= 1 << VAR_1 |
   1 << VAR_0;
}
