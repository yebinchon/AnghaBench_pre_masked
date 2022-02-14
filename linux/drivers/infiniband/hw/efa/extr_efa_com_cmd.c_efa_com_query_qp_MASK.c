
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct efa_com_query_qp_result {int sq_psn; int sq_draining; int qkey; int qp_state; } ;
struct efa_com_query_qp_params {int qp_handle; } ;
struct efa_com_admin_queue {int dummy; } ;
struct efa_com_dev {int efa_dev; struct efa_com_admin_queue aq; } ;
struct efa_admin_query_qp_resp {int sq_psn; int sq_draining; int qkey; int qp_state; } ;
struct TYPE_2__ {int opcode; } ;
struct efa_admin_query_qp_cmd {int qp_handle; TYPE_1__ aq_common_desc; } ;
struct efa_admin_aq_entry {int dummy; } ;
struct efa_admin_acq_entry {int dummy; } ;
typedef int resp ;
typedef int cmd ;


 int VAR_0 ;
 int FUNC_0 (struct efa_com_admin_queue*,struct efa_admin_aq_entry*,int,struct efa_admin_acq_entry*,int) ;
 int FUNC_1 (int ,char*,int ,int) ;

int FUNC_2(struct efa_com_dev *VAR_1,
       struct efa_com_query_qp_params *VAR_2,
       struct efa_com_query_qp_result *VAR_3)
{
 struct efa_com_admin_queue *VAR_4 = &VAR_1->aq;
 struct efa_admin_query_qp_cmd VAR_5 = {};
 struct efa_admin_query_qp_resp VAR_6;
 int VAR_7;

 VAR_5.aq_common_desc.opcode = VAR_0;
 VAR_5.qp_handle = VAR_2->qp_handle;

 VAR_7 = FUNC_0(VAR_4,
          (struct efa_admin_aq_entry *)&VAR_5,
          sizeof(VAR_5),
          (struct efa_admin_acq_entry *)&VAR_6,
          sizeof(VAR_6));
 if (VAR_7) {
  FUNC_1(VAR_1->efa_dev,
          "Failed to query qp-%u [%d]\n",
          VAR_5.qp_handle, VAR_7);
  return VAR_7;
 }

 VAR_3->qp_state = VAR_6.qp_state;
 VAR_3->qkey = VAR_6.qkey;
 VAR_3->sq_draining = VAR_6.sq_draining;
 VAR_3->sq_psn = VAR_6.sq_psn;

 return 0;
}
