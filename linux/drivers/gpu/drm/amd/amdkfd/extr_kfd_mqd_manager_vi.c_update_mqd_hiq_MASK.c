
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vi_mqd {int cp_hqd_vmid; } ;
struct queue_properties {int vmid; } ;
struct mqd_manager {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct mqd_manager*,void*,struct queue_properties*,int ,int ) ;
 struct vi_mqd* FUNC_1 (void*) ;

__attribute__((used)) static void FUNC_2(struct mqd_manager *VAR_1, void *VAR_2,
   struct queue_properties *VAR_3)
{
 struct vi_mqd *VAR_4;
 FUNC_0(VAR_1, VAR_2, VAR_3, VAR_0, 0);

 VAR_4 = FUNC_1(VAR_2);
 VAR_4->cp_hqd_vmid = VAR_3->vmid;
}
