
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rdma_cqe_responder {int rq_cons_or_srq_id; } ;
struct TYPE_2__ {scalar_t__ wqe_cons; } ;
struct qedr_qp {TYPE_1__ rq; } ;
struct qedr_cq {int dummy; } ;


 int FUNC_0 (struct qedr_cq*) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct qedr_cq *VAR_0, struct qedr_qp *VAR_1,
     struct rdma_cqe_responder *VAR_2, int *VAR_3)
{
 if (FUNC_1(VAR_2->rq_cons_or_srq_id) == VAR_1->rq.wqe_cons) {
  FUNC_0(VAR_0);
  *VAR_3 |= 1;
 }
}
