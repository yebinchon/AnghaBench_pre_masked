
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct efa_com_modify_qp_params {int sq_drained_async_notify; int sq_psn; int qkey; int cur_qp_state; int qp_state; int qp_handle; int modify_mask; } ;
struct efa_com_admin_queue {int dummy; } ;
struct efa_com_dev {int efa_dev; struct efa_com_admin_queue aq; } ;
struct efa_admin_modify_qp_resp {int dummy; } ;
struct TYPE_2__ {int opcode; } ;
struct efa_admin_modify_qp_cmd {int modify_mask; int qp_handle; int sq_drained_async_notify; int sq_psn; int qkey; int cur_qp_state; int qp_state; TYPE_1__ aq_common_desc; } ;
struct efa_admin_aq_entry {int dummy; } ;
struct efa_admin_acq_entry {int dummy; } ;
typedef int resp ;
typedef int cmd ;


 int VAR_0 ;
 int FUNC_0 (struct efa_com_admin_queue*,struct efa_admin_aq_entry*,int,struct efa_admin_acq_entry*,int) ;
 int FUNC_1 (int ,char*,int ,int ,int) ;

int FUNC_2(struct efa_com_dev *VAR_1,
        struct efa_com_modify_qp_params *VAR_2)
{
 struct efa_com_admin_queue *VAR_3 = &VAR_1->aq;
 struct efa_admin_modify_qp_cmd VAR_4 = {};
 struct efa_admin_modify_qp_resp VAR_5;
 int VAR_6;

 VAR_4.aq_common_desc.opcode = VAR_0;
 VAR_4.modify_mask = VAR_2->modify_mask;
 VAR_4.qp_handle = VAR_2->qp_handle;
 VAR_4.qp_state = VAR_2->qp_state;
 VAR_4.cur_qp_state = VAR_2->cur_qp_state;
 VAR_4.qkey = VAR_2->qkey;
 VAR_4.sq_psn = VAR_2->sq_psn;
 VAR_4.sq_drained_async_notify = VAR_2->sq_drained_async_notify;

 VAR_6 = FUNC_0(VAR_3,
          (struct efa_admin_aq_entry *)&VAR_4,
          sizeof(VAR_4),
          (struct efa_admin_acq_entry *)&VAR_5,
          sizeof(VAR_5));
 if (VAR_6) {
  FUNC_1(
   VAR_1->efa_dev,
   "Failed to modify qp-%u modify_mask[%#x] [%d]\n",
   VAR_4.qp_handle, VAR_4.modify_mask, VAR_6);
  return VAR_6;
 }

 return 0;
}
