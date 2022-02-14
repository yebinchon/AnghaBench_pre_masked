
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rdma_ucm_conn_param {int qkey; int qp_num; int srq; int rnr_retry_count; int retry_count; int flow_control; int initiator_depth; int responder_resources; int private_data_len; int private_data; } ;
struct rdma_conn_param {int qkey; int qp_num; int srq; int rnr_retry_count; int retry_count; int flow_control; int initiator_depth; int responder_resources; int private_data_len; int private_data; } ;
struct TYPE_4__ {scalar_t__ ss_family; } ;
struct TYPE_5__ {TYPE_1__ src_addr; } ;
struct TYPE_6__ {TYPE_2__ addr; } ;
struct rdma_cm_id {TYPE_3__ route; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_0(struct rdma_cm_id *VAR_1,
     struct rdma_conn_param *VAR_2,
     struct rdma_ucm_conn_param *VAR_3)
{
 VAR_2->private_data = VAR_3->private_data;
 VAR_2->private_data_len = VAR_3->private_data_len;
 VAR_2->responder_resources =VAR_3->responder_resources;
 VAR_2->initiator_depth = VAR_3->initiator_depth;
 VAR_2->flow_control = VAR_3->flow_control;
 VAR_2->retry_count = VAR_3->retry_count;
 VAR_2->rnr_retry_count = VAR_3->rnr_retry_count;
 VAR_2->srq = VAR_3->srq;
 VAR_2->qp_num = VAR_3->qp_num;
 VAR_2->qkey = (VAR_1->route.addr.src_addr.ss_family == VAR_0) ? VAR_3->qkey : 0;
}
