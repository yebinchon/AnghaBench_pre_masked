
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rdma_cqe_responder {scalar_t__ status; int rq_cons_or_srq_id; } ;
struct qedr_qp {int dummy; } ;
struct qedr_dev {int dummy; } ;
struct qedr_cq {int dummy; } ;
struct ib_wc {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct qedr_cq*) ;
 int FUNC_1 (struct qedr_qp*,struct qedr_cq*,int,struct ib_wc*,int ) ;
 int FUNC_2 (struct qedr_dev*,struct qedr_qp*,struct qedr_cq*,struct ib_wc*,struct rdma_cqe_responder*) ;
 int FUNC_3 (struct qedr_cq*,struct qedr_qp*,struct rdma_cqe_responder*,int*) ;

__attribute__((used)) static int FUNC_4(struct qedr_dev *VAR_1, struct qedr_qp *VAR_2,
        struct qedr_cq *VAR_3, int VAR_4,
        struct ib_wc *VAR_5, struct rdma_cqe_responder *VAR_6,
        int *VAR_7)
{
 int VAR_8;

 if (VAR_6->status == VAR_0) {
  VAR_8 = FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5,
      VAR_6->rq_cons_or_srq_id);
  FUNC_3(VAR_3, VAR_2, VAR_6, VAR_7);
 } else {
  VAR_8 = FUNC_2(VAR_1, VAR_2, VAR_3, VAR_5, VAR_6);
  FUNC_0(VAR_3);
  *VAR_7 |= 1;
 }

 return VAR_8;
}
