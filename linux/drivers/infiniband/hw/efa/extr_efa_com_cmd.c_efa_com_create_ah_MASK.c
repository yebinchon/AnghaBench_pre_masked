
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct efa_com_admin_queue {int dummy; } ;
struct efa_com_dev {int efa_dev; struct efa_com_admin_queue aq; } ;
struct efa_com_create_ah_result {int ah; } ;
struct efa_com_create_ah_params {int pdn; int dest_addr; } ;
struct efa_admin_create_ah_resp {int ah; } ;
struct TYPE_2__ {int opcode; } ;
struct efa_admin_create_ah_cmd {int dest_addr; int pd; TYPE_1__ aq_common_desc; } ;
struct efa_admin_aq_entry {int dummy; } ;
struct efa_admin_acq_entry {int dummy; } ;
typedef int cmd_completion ;
typedef int ah_cmd ;


 int VAR_0 ;
 int FUNC_0 (struct efa_com_admin_queue*,struct efa_admin_aq_entry*,int,struct efa_admin_acq_entry*,int) ;
 int FUNC_1 (int ,char*,int ,int) ;
 int FUNC_2 (int ,int ,int) ;

int FUNC_3(struct efa_com_dev *VAR_1,
        struct efa_com_create_ah_params *VAR_2,
        struct efa_com_create_ah_result *VAR_3)
{
 struct efa_admin_create_ah_resp VAR_4;
 struct efa_com_admin_queue *VAR_5 = &VAR_1->aq;
 struct efa_admin_create_ah_cmd VAR_6 = {};
 int VAR_7;

 VAR_6.aq_common_desc.opcode = VAR_0;

 FUNC_2(VAR_6.dest_addr, VAR_2->dest_addr, sizeof(VAR_6.dest_addr));
 VAR_6.pd = VAR_2->pdn;

 VAR_7 = FUNC_0(VAR_5,
          (struct efa_admin_aq_entry *)&VAR_6,
          sizeof(VAR_6),
          (struct efa_admin_acq_entry *)&VAR_4,
          sizeof(VAR_4));
 if (VAR_7) {
  FUNC_1(VAR_1->efa_dev,
          "Failed to create ah for %pI6 [%d]\n",
          VAR_6.dest_addr, VAR_7);
  return VAR_7;
 }

 VAR_3->ah = VAR_4.ah;

 return 0;
}
