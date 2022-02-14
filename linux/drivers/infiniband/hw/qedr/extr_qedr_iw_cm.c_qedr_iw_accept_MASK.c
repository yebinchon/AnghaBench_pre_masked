
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qedr_qp {int qed_qp; struct qedr_iw_ep* ep; } ;
struct qedr_iw_ep {int during_connect; struct qedr_qp* qp; int qed_context; struct iw_cm_id* cm_id; struct qedr_dev* dev; } ;
struct qedr_dev {int rdma_ctx; TYPE_1__* ops; int qps; } ;
struct qed_iwarp_accept_in {int ord; int ird; int private_data_len; int private_data; int qp; struct qedr_iw_ep* cb_context; int ep_context; } ;
struct iw_cm_id {int (* rem_ref ) (struct iw_cm_id*) ;int (* add_ref ) (struct iw_cm_id*) ;scalar_t__ provider_data; } ;
struct iw_cm_conn_param {int ord; int ird; int private_data_len; int private_data; int qpn; } ;
struct TYPE_2__ {int (* iwarp_accept ) (int ,struct qed_iwarp_accept_in*) ;} ;


 int FUNC_0 (struct qedr_dev*,int ,char*,int ) ;
 int FUNC_1 (struct qedr_dev*,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct iw_cm_id*) ;
 int FUNC_3 (int ,struct qed_iwarp_accept_in*) ;
 int FUNC_4 (struct iw_cm_id*) ;
 struct qedr_qp* FUNC_5 (int *,int ) ;

int FUNC_6(struct iw_cm_id *VAR_2, struct iw_cm_conn_param *VAR_3)
{
 struct qedr_iw_ep *VAR_4 = (struct qedr_iw_ep *)VAR_2->provider_data;
 struct qedr_dev *VAR_5 = VAR_4->dev;
 struct qedr_qp *VAR_6;
 struct qed_iwarp_accept_in VAR_7;
 int VAR_8;

 FUNC_0(VAR_5, VAR_1, "Accept on qpid=%d\n", VAR_3->qpn);

 VAR_6 = FUNC_5(&VAR_5->qps, VAR_3->qpn);
 if (!VAR_6) {
  FUNC_1(VAR_5, "Invalid QP number %d\n", VAR_3->qpn);
  return -VAR_0;
 }

 VAR_4->qp = VAR_6;
 VAR_6->ep = VAR_4;
 VAR_2->add_ref(VAR_2);
 VAR_4->cm_id = VAR_2;

 VAR_7.ep_context = VAR_4->qed_context;
 VAR_7.cb_context = VAR_4;
 VAR_7.qp = VAR_4->qp->qed_qp;
 VAR_7.private_data = VAR_3->private_data;
 VAR_7.private_data_len = VAR_3->private_data_len;
 VAR_7.ird = VAR_3->ird;
 VAR_7.ord = VAR_3->ord;

 VAR_4->during_connect = 1;
 VAR_8 = VAR_5->ops->iwarp_accept(VAR_5->rdma_ctx, &VAR_7);
 if (VAR_8)
  goto err;

 return VAR_8;
err:
 VAR_4->during_connect = 0;
 VAR_2->rem_ref(VAR_2);
 return VAR_8;
}
