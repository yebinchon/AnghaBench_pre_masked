
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct efa_com_admin_queue {int dummy; } ;
struct efa_com_dev {int efa_dev; struct efa_com_admin_queue aq; } ;
struct efa_com_alloc_pd_result {int pdn; } ;
struct efa_admin_aq_entry {int dummy; } ;
struct efa_admin_alloc_pd_resp {int pd; } ;
struct TYPE_2__ {int opcode; } ;
struct efa_admin_alloc_pd_cmd {TYPE_1__ aq_common_descriptor; } ;
struct efa_admin_acq_entry {int dummy; } ;
typedef int resp ;
typedef int cmd ;


 int VAR_0 ;
 int FUNC_0 (struct efa_com_admin_queue*,struct efa_admin_aq_entry*,int,struct efa_admin_acq_entry*,int) ;
 int FUNC_1 (int ,char*,int) ;

int FUNC_2(struct efa_com_dev *VAR_1,
       struct efa_com_alloc_pd_result *VAR_2)
{
 struct efa_com_admin_queue *VAR_3 = &VAR_1->aq;
 struct efa_admin_alloc_pd_cmd VAR_4 = {};
 struct efa_admin_alloc_pd_resp VAR_5;
 int VAR_6;

 VAR_4.aq_common_descriptor.opcode = VAR_0;

 VAR_6 = FUNC_0(VAR_3,
          (struct efa_admin_aq_entry *)&VAR_4,
          sizeof(VAR_4),
          (struct efa_admin_acq_entry *)&VAR_5,
          sizeof(VAR_5));
 if (VAR_6) {
  FUNC_1(VAR_1->efa_dev,
          "Failed to allocate pd[%d]\n", VAR_6);
  return VAR_6;
 }

 VAR_2->pdn = VAR_5.pd;

 return 0;
}
