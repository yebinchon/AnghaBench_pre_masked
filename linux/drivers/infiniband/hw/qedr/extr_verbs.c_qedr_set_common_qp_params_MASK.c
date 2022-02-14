
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int max_sges; } ;
struct TYPE_7__ {int max_sges; } ;
struct qedr_qp {int signaled; TYPE_5__* sq_cq; TYPE_4__ sq; int state; int max_inline_data; int qp_type; TYPE_3__* rq_cq; TYPE_2__ rq; int srq; struct qedr_dev* dev; struct qedr_pd* pd; int refcnt; int q_lock; } ;
struct qedr_pd {int pd_id; } ;
struct qedr_dev {int dummy; } ;
struct TYPE_6__ {int max_recv_sge; int max_send_sge; int max_inline_data; } ;
struct ib_qp_init_attr {scalar_t__ sq_sig_type; scalar_t__ srq; TYPE_1__ cap; int recv_cq; int send_cq; int qp_type; } ;
struct TYPE_10__ {int icid; } ;
struct TYPE_8__ {int icid; } ;


 int FUNC_0 (struct qedr_dev*,int ,char*,int ,int ,...) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct qedr_dev *VAR_3,
          struct qedr_qp *VAR_4,
          struct qedr_pd *VAR_5,
          struct ib_qp_init_attr *VAR_6)
{
 FUNC_4(&VAR_4->q_lock);
 FUNC_1(&VAR_4->refcnt, 1);
 VAR_4->pd = VAR_5;
 VAR_4->qp_type = VAR_6->qp_type;
 VAR_4->max_inline_data = VAR_6->cap.max_inline_data;
 VAR_4->sq.max_sges = VAR_6->cap.max_send_sge;
 VAR_4->state = VAR_2;
 VAR_4->signaled = (VAR_6->sq_sig_type == VAR_0) ? 1 : 0;
 VAR_4->sq_cq = FUNC_2(VAR_6->send_cq);
 VAR_4->dev = VAR_3;

 if (VAR_6->srq) {
  VAR_4->srq = FUNC_3(VAR_6->srq);
 } else {
  VAR_4->rq_cq = FUNC_2(VAR_6->recv_cq);
  VAR_4->rq.max_sges = VAR_6->cap.max_recv_sge;
  FUNC_0(VAR_3, VAR_1,
    "RQ params:\trq_max_sges = %d, rq_cq_id = %d\n",
    VAR_4->rq.max_sges, VAR_4->rq_cq->icid);
 }

 FUNC_0(VAR_3, VAR_1,
   "QP params:\tpd = %d, qp_type = %d, max_inline_data = %d, state = %d, signaled = %d, use_srq=%d\n",
   VAR_5->pd_id, VAR_4->qp_type, VAR_4->max_inline_data,
   VAR_4->state, VAR_4->signaled, (VAR_6->srq) ? 1 : 0);
 FUNC_0(VAR_3, VAR_1,
   "SQ params:\tsq_max_sges = %d, sq_cq_id = %d\n",
   VAR_4->sq.max_sges, VAR_4->sq_cq->icid);
}
