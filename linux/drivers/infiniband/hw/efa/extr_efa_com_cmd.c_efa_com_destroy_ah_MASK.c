
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct efa_com_admin_queue {int dummy; } ;
struct efa_com_dev {int efa_dev; struct efa_com_admin_queue aq; } ;
struct efa_com_destroy_ah_params {int pdn; int ah; } ;
struct efa_admin_destroy_ah_resp {int dummy; } ;
struct TYPE_2__ {int opcode; } ;
struct efa_admin_destroy_ah_cmd {int pd; int ah; TYPE_1__ aq_common_desc; } ;
struct efa_admin_aq_entry {int dummy; } ;
struct efa_admin_acq_entry {int dummy; } ;
typedef int cmd_completion ;
typedef int ah_cmd ;


 int VAR_0 ;
 int FUNC_0 (struct efa_com_admin_queue*,struct efa_admin_aq_entry*,int,struct efa_admin_acq_entry*,int) ;
 int FUNC_1 (int ,char*,int ,int ,int) ;

int FUNC_2(struct efa_com_dev *VAR_1,
         struct efa_com_destroy_ah_params *VAR_2)
{
 struct efa_admin_destroy_ah_resp VAR_3;
 struct efa_admin_destroy_ah_cmd VAR_4 = {};
 struct efa_com_admin_queue *VAR_5 = &VAR_1->aq;
 int VAR_6;

 VAR_4.aq_common_desc.opcode = VAR_0;
 VAR_4.ah = VAR_2->ah;
 VAR_4.pd = VAR_2->pdn;

 VAR_6 = FUNC_0(VAR_5,
          (struct efa_admin_aq_entry *)&VAR_4,
          sizeof(VAR_4),
          (struct efa_admin_acq_entry *)&VAR_3,
          sizeof(VAR_3));
 if (VAR_6) {
  FUNC_1(VAR_1->efa_dev,
          "Failed to destroy ah-%d pd-%d [%d]\n",
          VAR_4.ah, VAR_4.pd, VAR_6);
  return VAR_6;
 }

 return 0;
}
