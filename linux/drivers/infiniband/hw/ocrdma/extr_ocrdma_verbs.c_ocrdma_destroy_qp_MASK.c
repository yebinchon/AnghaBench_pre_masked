
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_5__ {int len; scalar_t__ pa; } ;
struct TYPE_4__ {int len; scalar_t__ pa; } ;
struct ocrdma_qp {scalar_t__ state; struct ocrdma_qp* rqe_wr_id_tbl; struct ocrdma_qp* wqe_wr_id_tbl; TYPE_2__ rq; int srq; TYPE_1__ sq; TYPE_3__* rq_cq; TYPE_3__* sq_cq; struct ocrdma_pd* pd; } ;
struct ocrdma_pd {scalar_t__ uctx; } ;
struct ocrdma_dev {int dev_lock; } ;
struct ib_udata {int dummy; } ;
struct ib_qp_attr {int qp_state; } ;
struct ib_qp {int device; } ;
struct TYPE_6__ {int cq_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ib_qp*,struct ib_qp_attr*,int) ;
 struct ocrdma_dev* FUNC_2 (int ) ;
 struct ocrdma_qp* FUNC_3 (struct ib_qp*) ;
 int FUNC_4 (struct ocrdma_qp*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct ocrdma_qp*) ;
 int FUNC_8 (scalar_t__,int ,int ) ;
 int FUNC_9 (struct ocrdma_dev*,struct ocrdma_qp*) ;
 int FUNC_10 (struct ocrdma_qp*,TYPE_3__*) ;
 int FUNC_11 (struct ocrdma_dev*,struct ocrdma_qp*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,unsigned long) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *,unsigned long) ;

int FUNC_16(struct ib_qp *VAR_3, struct ib_udata *VAR_4)
{
 struct ocrdma_pd *VAR_5;
 struct ocrdma_qp *VAR_6;
 struct ocrdma_dev *VAR_7;
 struct ib_qp_attr VAR_8;
 int VAR_9;
 unsigned long VAR_10;

 VAR_6 = FUNC_3(VAR_3);
 VAR_7 = FUNC_2(VAR_3->device);

 VAR_5 = VAR_6->pd;


 if (VAR_6->state != VAR_2) {
  VAR_8.qp_state = VAR_0;
  VAR_9 = VAR_1;
  FUNC_1(VAR_3, &VAR_8, VAR_9);
 }




 FUNC_5(&VAR_7->dev_lock);
 (void) FUNC_11(VAR_7, VAR_6);





 FUNC_13(&VAR_6->sq_cq->cq_lock, VAR_10);
 if (VAR_6->rq_cq && (VAR_6->rq_cq != VAR_6->sq_cq)) {
  FUNC_12(&VAR_6->rq_cq->cq_lock);
  FUNC_9(VAR_7, VAR_6);
  FUNC_14(&VAR_6->rq_cq->cq_lock);
 } else {
  FUNC_9(VAR_7, VAR_6);
 }
 FUNC_15(&VAR_6->sq_cq->cq_lock, VAR_10);

 if (!VAR_5->uctx) {
  FUNC_10(VAR_6, VAR_6->sq_cq);
  FUNC_10(VAR_6, VAR_6->rq_cq);
 }
 FUNC_6(&VAR_7->dev_lock);

 if (VAR_5->uctx) {
  FUNC_8(VAR_5->uctx, (u64) VAR_6->sq.pa,
    FUNC_0(VAR_6->sq.len));
  if (!VAR_6->srq)
   FUNC_8(VAR_5->uctx, (u64) VAR_6->rq.pa,
     FUNC_0(VAR_6->rq.len));
 }

 FUNC_7(VAR_6);

 FUNC_4(VAR_6->wqe_wr_id_tbl);
 FUNC_4(VAR_6->rqe_wr_id_tbl);
 FUNC_4(VAR_6);
 return 0;
}
