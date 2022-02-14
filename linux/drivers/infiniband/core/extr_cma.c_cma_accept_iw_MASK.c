
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int iw; } ;
struct TYPE_3__ {scalar_t__ qp; } ;
struct rdma_id_private {TYPE_2__ cm_id; int qp_num; TYPE_1__ id; } ;
struct rdma_conn_param {int qp_num; int private_data_len; int private_data; int responder_resources; int initiator_depth; } ;
struct iw_cm_conn_param {int qpn; int private_data_len; int private_data; int ird; int ord; } ;


 int VAR_0 ;
 int FUNC_0 (struct rdma_id_private*,struct rdma_conn_param*) ;
 int FUNC_1 (int ,struct iw_cm_conn_param*) ;

__attribute__((used)) static int FUNC_2(struct rdma_id_private *VAR_1,
    struct rdma_conn_param *VAR_2)
{
 struct iw_cm_conn_param VAR_3;
 int VAR_4;

 if (!VAR_2)
  return -VAR_0;

 VAR_4 = FUNC_0(VAR_1, VAR_2);
 if (VAR_4)
  return VAR_4;

 VAR_3.ord = VAR_2->initiator_depth;
 VAR_3.ird = VAR_2->responder_resources;
 VAR_3.private_data = VAR_2->private_data;
 VAR_3.private_data_len = VAR_2->private_data_len;
 if (VAR_1->id.qp) {
  VAR_3.qpn = VAR_1->qp_num;
 } else
  VAR_3.qpn = VAR_2->qp_num;

 return FUNC_1(VAR_1->cm_id.iw, &VAR_3);
}
