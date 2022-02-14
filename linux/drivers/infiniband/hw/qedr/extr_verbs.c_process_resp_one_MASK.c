
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct rdma_cqe_responder {int dummy; } ;
struct TYPE_4__ {size_t cons; int pbl; } ;
struct qedr_qp {TYPE_2__ rq; TYPE_1__* rqe_wr_id; } ;
struct qedr_dev {int dummy; } ;
struct qedr_cq {int dummy; } ;
struct ib_wc {int dummy; } ;
struct TYPE_3__ {int wqe_size; int wr_id; } ;


 int FUNC_0 (struct qedr_dev*,struct qedr_qp*,struct qedr_cq*,struct ib_wc*,struct rdma_cqe_responder*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_3(struct qedr_dev *VAR_0, struct qedr_qp *VAR_1,
       struct qedr_cq *VAR_2, struct ib_wc *VAR_3,
       struct rdma_cqe_responder *VAR_4)
{
 u64 VAR_5 = VAR_1->rqe_wr_id[VAR_1->rq.cons].wr_id;

 FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);

 while (VAR_1->rqe_wr_id[VAR_1->rq.cons].wqe_size--)
  FUNC_1(&VAR_1->rq.pbl);
 FUNC_2(&VAR_1->rq);

 return 1;
}
