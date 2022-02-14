
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct qedr_qp {TYPE_2__* srq; } ;
struct qedr_pd {TYPE_1__* uctx; int pd_id; } ;
struct qedr_dev {int dpi; } ;
struct qed_rdma_create_qp_in_params {int signal_all; int fmr_and_reserved_lkey; int use_srq; scalar_t__ srq_id; int rq_cq_id; scalar_t__ stats_queue; int sq_cq_id; int dpi; int pd; int qp_handle_async_hi; int qp_handle_async_lo; } ;
struct ib_qp_init_attr {scalar_t__ sq_sig_type; int recv_cq; int send_cq; } ;
struct TYPE_6__ {int icid; } ;
struct TYPE_5__ {scalar_t__ srq_id; } ;
struct TYPE_4__ {int dpi; } ;


 scalar_t__ VAR_0 ;
 TYPE_3__* FUNC_0 (int ) ;
 int FUNC_1 (uintptr_t) ;
 int FUNC_2 (uintptr_t) ;

__attribute__((used)) static inline void
FUNC_3(struct qedr_dev *VAR_1,
         struct qedr_pd *VAR_2,
         struct qedr_qp *VAR_3,
         struct ib_qp_init_attr *VAR_4,
         bool VAR_5,
         struct qed_rdma_create_qp_in_params *VAR_6)
{

 VAR_6->qp_handle_async_lo = FUNC_1((uintptr_t) VAR_3);
 VAR_6->qp_handle_async_hi = FUNC_2((uintptr_t) VAR_3);

 VAR_6->signal_all = (VAR_4->sq_sig_type == VAR_0);
 VAR_6->fmr_and_reserved_lkey = VAR_5;
 VAR_6->pd = VAR_2->pd_id;
 VAR_6->dpi = VAR_2->uctx ? VAR_2->uctx->dpi : VAR_1->dpi;
 VAR_6->sq_cq_id = FUNC_0(VAR_4->send_cq)->icid;
 VAR_6->stats_queue = 0;
 VAR_6->srq_id = 0;
 VAR_6->use_srq = 0;

 if (!VAR_3->srq) {
  VAR_6->rq_cq_id = FUNC_0(VAR_4->recv_cq)->icid;

 } else {
  VAR_6->rq_cq_id = FUNC_0(VAR_4->recv_cq)->icid;
  VAR_6->srq_id = VAR_3->srq->srq_id;
  VAR_6->use_srq = 1;
 }
}
