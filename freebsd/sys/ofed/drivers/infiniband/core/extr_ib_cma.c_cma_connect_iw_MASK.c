
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {struct iw_cm_id* iw; } ;
struct TYPE_3__ {scalar_t__ qp; int device; } ;
struct rdma_id_private {TYPE_2__ cm_id; int qp_num; TYPE_1__ id; int tos; } ;
struct rdma_conn_param {int qp_num; int private_data_len; int private_data; int responder_resources; int initiator_depth; } ;
struct iw_cm_id {int remote_addr; int local_addr; int tos; } ;
struct iw_cm_conn_param {int qpn; int private_data_len; int private_data; int ird; int ord; } ;


 scalar_t__ FUNC_0 (struct iw_cm_id*) ;
 int FUNC_1 (struct iw_cm_id*) ;
 int FUNC_2 (struct rdma_id_private*) ;
 int VAR_0 ;
 int FUNC_3 (struct rdma_id_private*,struct rdma_conn_param*) ;
 int FUNC_4 (struct rdma_id_private*) ;
 int FUNC_5 (struct iw_cm_id*,struct iw_cm_conn_param*) ;
 struct iw_cm_id* FUNC_6 (int ,int ,struct rdma_id_private*) ;
 int FUNC_7 (struct iw_cm_id*) ;
 int FUNC_8 (int *,int ,int ) ;
 int FUNC_9 (struct iw_cm_conn_param*,int ,int) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(struct rdma_id_private *VAR_1,
     struct rdma_conn_param *VAR_2)
{
 struct iw_cm_id *VAR_3;
 int VAR_4;
 struct iw_cm_conn_param VAR_5;

 VAR_3 = FUNC_6(VAR_1->id.device, VAR_0, VAR_1);
 if (FUNC_0(VAR_3))
  return FUNC_1(VAR_3);

 VAR_3->tos = VAR_1->tos;
 VAR_1->cm_id.iw = VAR_3;

 FUNC_8(&VAR_3->local_addr, FUNC_4(VAR_1),
        FUNC_10(FUNC_4(VAR_1)));
 FUNC_8(&VAR_3->remote_addr, FUNC_2(VAR_1),
        FUNC_10(FUNC_2(VAR_1)));

 VAR_4 = FUNC_3(VAR_1, VAR_2);
 if (VAR_4)
  goto out;

 if (VAR_2) {
  VAR_5.ord = VAR_2->initiator_depth;
  VAR_5.ird = VAR_2->responder_resources;
  VAR_5.private_data = VAR_2->private_data;
  VAR_5.private_data_len = VAR_2->private_data_len;
  VAR_5.qpn = VAR_1->id.qp ? VAR_1->qp_num : VAR_2->qp_num;
 } else {
  FUNC_9(&VAR_5, 0, sizeof VAR_5);
  VAR_5.qpn = VAR_1->qp_num;
 }
 VAR_4 = FUNC_5(VAR_3, &VAR_5);
out:
 if (VAR_4) {
  FUNC_7(VAR_3);
  VAR_1->cm_id.iw = ((void*)0);
 }
 return VAR_4;
}
