
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rdma_cqe_responder {int dummy; } ;
struct qedr_qp {int dummy; } ;
struct qedr_dev {int dummy; } ;
struct qedr_cq {int dummy; } ;
struct ib_wc {int dummy; } ;


 int FUNC_0 (struct qedr_cq*) ;
 int FUNC_1 (struct qedr_dev*,struct qedr_qp*,struct qedr_cq*,struct ib_wc*,struct rdma_cqe_responder*) ;

__attribute__((used)) static int FUNC_2(struct qedr_dev *VAR_0, struct qedr_qp *VAR_1,
     struct qedr_cq *VAR_2, int VAR_3,
     struct ib_wc *VAR_4,
     struct rdma_cqe_responder *VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_4, VAR_5);
 FUNC_0(VAR_2);

 return VAR_6;
}
