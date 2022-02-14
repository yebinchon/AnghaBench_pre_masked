
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ib_qp {int qp_num; } ;
struct TYPE_8__ {int max_wr; } ;
struct TYPE_7__ {int max_wr; } ;
struct qedr_qp {void* rqe_wr_id; struct ib_qp ibqp; void* wqe_wr_id; TYPE_3__ sq; TYPE_2__ rq; } ;
struct qedr_dev {TYPE_5__* gsi_rqcq; TYPE_4__* ndev; int gsi_ll2_mac_address; } ;
struct TYPE_6__ {int max_send_wr; int max_recv_wr; } ;
struct ib_qp_init_attr {TYPE_1__ cap; } ;
struct TYPE_10__ {void* cq_type; } ;
struct TYPE_9__ {int dev_addr; } ;


 int FUNC_0 (struct qedr_dev*,int ,char*,struct qedr_qp*) ;
 int FUNC_1 (struct qedr_dev*,char*,...) ;
 int VAR_0 ;
 struct ib_qp* FUNC_2 (int) ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,int ) ;
 void* FUNC_4 (int ,int,int ) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (struct qedr_dev*,struct ib_qp_init_attr*) ;
 int FUNC_7 (struct qedr_dev*,struct ib_qp_init_attr*) ;
 int FUNC_8 (struct qedr_dev*,struct ib_qp_init_attr*,struct qedr_qp*) ;
 int FUNC_9 (struct qedr_dev*) ;
 int FUNC_10 (struct qedr_dev*,struct qedr_qp*,struct ib_qp_init_attr*) ;

struct ib_qp *FUNC_11(struct qedr_dev *VAR_4,
     struct ib_qp_init_attr *VAR_5,
     struct qedr_qp *VAR_6)
{
 int VAR_7;

 VAR_7 = FUNC_6(VAR_4, VAR_5);
 if (VAR_7)
  return FUNC_2(VAR_7);

 VAR_7 = FUNC_8(VAR_4, VAR_5, VAR_6);
 if (VAR_7) {
  FUNC_1(VAR_4, "create gsi qp: failed on ll2 start. rc=%d\n", VAR_7);
  return FUNC_2(VAR_7);
 }


 VAR_6->ibqp.qp_num = 1;
 VAR_6->rq.max_wr = VAR_5->cap.max_recv_wr;
 VAR_6->sq.max_wr = VAR_5->cap.max_send_wr;

 VAR_6->rqe_wr_id = FUNC_4(VAR_6->rq.max_wr, sizeof(*VAR_6->rqe_wr_id),
    VAR_1);
 if (!VAR_6->rqe_wr_id)
  goto err;
 VAR_6->wqe_wr_id = FUNC_4(VAR_6->sq.max_wr, sizeof(*VAR_6->wqe_wr_id),
    VAR_1);
 if (!VAR_6->wqe_wr_id)
  goto err;

 FUNC_10(VAR_4, VAR_6, VAR_5);
 FUNC_3(VAR_4->gsi_ll2_mac_address, VAR_4->ndev->dev_addr);


 FUNC_7(VAR_4, VAR_5);
 VAR_4->gsi_rqcq->cq_type = VAR_2;
 VAR_4->gsi_rqcq->cq_type = VAR_2;

 FUNC_0(VAR_4, VAR_3, "created GSI QP %p\n", VAR_6);

 return &VAR_6->ibqp;

err:
 FUNC_5(VAR_6->rqe_wr_id);

 VAR_7 = FUNC_9(VAR_4);
 if (VAR_7)
  FUNC_1(VAR_4, "create gsi qp: failed destroy on create\n");

 return FUNC_2(-VAR_0);
}
