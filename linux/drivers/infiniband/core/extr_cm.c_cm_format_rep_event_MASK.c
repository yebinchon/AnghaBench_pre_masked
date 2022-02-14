
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ib_cm_rep_event_param {int srq; int rnr_retry_count; int flow_control; int failover_accepted; int target_ack_delay; int initiator_depth; int responder_resources; void* starting_psn; void* remote_qpn; void* remote_qkey; int remote_ca_guid; } ;
struct TYPE_7__ {struct ib_cm_rep_event_param rep_rcvd; } ;
struct TYPE_8__ {int * private_data; TYPE_3__ param; } ;
struct cm_work {TYPE_4__ cm_event; TYPE_2__* mad_recv_wc; } ;
struct cm_rep_msg {int private_data; int resp_resources; int initiator_depth; int local_qkey; int local_ca_guid; } ;
typedef enum ib_qp_type { ____Placeholder_ib_qp_type } ib_qp_type ;
struct TYPE_5__ {scalar_t__ mad; } ;
struct TYPE_6__ {TYPE_1__ recv_buf; } ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (struct cm_rep_msg*) ;
 int FUNC_2 (struct cm_rep_msg*) ;
 int FUNC_3 (struct cm_rep_msg*,int) ;
 int FUNC_4 (struct cm_rep_msg*) ;
 int FUNC_5 (struct cm_rep_msg*) ;
 int FUNC_6 (struct cm_rep_msg*) ;
 int FUNC_7 (struct cm_rep_msg*) ;

__attribute__((used)) static void FUNC_8(struct cm_work *VAR_0, enum ib_qp_type VAR_1)
{
 struct cm_rep_msg *VAR_2;
 struct ib_cm_rep_event_param *VAR_3;

 VAR_2 = (struct cm_rep_msg *)VAR_0->mad_recv_wc->recv_buf.mad;
 VAR_3 = &VAR_0->cm_event.param.rep_rcvd;
 VAR_3->remote_ca_guid = VAR_2->local_ca_guid;
 VAR_3->remote_qkey = FUNC_0(VAR_2->local_qkey);
 VAR_3->remote_qpn = FUNC_0(FUNC_3(VAR_2, VAR_1));
 VAR_3->starting_psn = FUNC_0(FUNC_6(VAR_2));
 VAR_3->responder_resources = VAR_2->initiator_depth;
 VAR_3->initiator_depth = VAR_2->resp_resources;
 VAR_3->target_ack_delay = FUNC_7(VAR_2);
 VAR_3->failover_accepted = FUNC_1(VAR_2);
 VAR_3->flow_control = FUNC_2(VAR_2);
 VAR_3->rnr_retry_count = FUNC_4(VAR_2);
 VAR_3->srq = FUNC_5(VAR_2);
 VAR_0->cm_event.private_data = &VAR_2->private_data;
}
