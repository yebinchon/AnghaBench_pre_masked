
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v10_compute_mqd {int cp_hqd_vmid; } ;
struct queue_properties {int vmid; } ;
struct mqd_manager {int dummy; } ;


 struct v10_compute_mqd* FUNC_0 (void*) ;
 int FUNC_1 (struct mqd_manager*,void*,struct queue_properties*) ;

__attribute__((used)) static void FUNC_2(struct mqd_manager *VAR_0, void *VAR_1,
   struct queue_properties *VAR_2)
{
 struct v10_compute_mqd *VAR_3;

 FUNC_1(VAR_0, VAR_1, VAR_2);


 VAR_3 = FUNC_0(VAR_1);
 VAR_3->cp_hqd_vmid = VAR_2->vmid;
}
