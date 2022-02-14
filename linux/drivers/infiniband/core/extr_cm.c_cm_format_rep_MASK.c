
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ib_cm_rep_param {int srq; scalar_t__ private_data_len; scalar_t__ private_data; int qp_num; int flow_control; int initiator_depth; int rnr_retry_count; int failover_accepted; int responder_resources; int starting_psn; } ;
struct cm_rep_msg {int private_data; int initiator_depth; int local_ca_guid; int resp_resources; int remote_comm_id; int local_comm_id; int hdr; } ;
struct TYPE_10__ {TYPE_4__* device; int remote_id; int local_id; } ;
struct TYPE_8__ {TYPE_2__* port; } ;
struct cm_id_private {scalar_t__ qp_type; TYPE_5__ id; TYPE_3__ av; int tid; } ;
struct TYPE_9__ {int node_guid; } ;
struct TYPE_7__ {TYPE_1__* cm_dev; } ;
struct TYPE_6__ {int ack_delay; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (struct cm_rep_msg*,int ) ;
 int FUNC_2 (struct cm_rep_msg*,int ) ;
 int FUNC_3 (struct cm_rep_msg*,int ) ;
 int FUNC_4 (struct cm_rep_msg*,int ) ;
 int FUNC_5 (struct cm_rep_msg*,int ) ;
 int FUNC_6 (struct cm_rep_msg*,int) ;
 int FUNC_7 (struct cm_rep_msg*,int ) ;
 int FUNC_8 (struct cm_rep_msg*,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_11(struct cm_rep_msg *VAR_2,
     struct cm_id_private *VAR_3,
     struct ib_cm_rep_param *VAR_4)
{
 FUNC_0(&VAR_2->hdr, VAR_0, VAR_3->tid);
 VAR_2->local_comm_id = VAR_3->id.local_id;
 VAR_2->remote_comm_id = VAR_3->id.remote_id;
 FUNC_7(VAR_2, FUNC_9(VAR_4->starting_psn));
 VAR_2->resp_resources = VAR_4->responder_resources;
 FUNC_8(VAR_2,
        VAR_3->av.port->cm_dev->ack_delay);
 FUNC_1(VAR_2, VAR_4->failover_accepted);
 FUNC_5(VAR_2, VAR_4->rnr_retry_count);
 VAR_2->local_ca_guid = VAR_3->id.device->node_guid;

 if (VAR_3->qp_type != VAR_1) {
  VAR_2->initiator_depth = VAR_4->initiator_depth;
  FUNC_2(VAR_2, VAR_4->flow_control);
  FUNC_6(VAR_2, VAR_4->srq);
  FUNC_4(VAR_2, FUNC_9(VAR_4->qp_num));
 } else {
  FUNC_6(VAR_2, 1);
  FUNC_3(VAR_2, FUNC_9(VAR_4->qp_num));
 }

 if (VAR_4->private_data && VAR_4->private_data_len)
  FUNC_10(VAR_2->private_data, VAR_4->private_data,
         VAR_4->private_data_len);
}
