
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qedr_qp {int dummy; } ;
struct qedr_dev {int gsi_qp_created; struct qedr_qp* gsi_qp; void* gsi_rqcq; void* gsi_sqcq; } ;
struct ib_qp_init_attr {int recv_cq; int send_cq; } ;


 void* FUNC_0 (int ) ;

void FUNC_1(struct qedr_dev *VAR_0, struct qedr_qp *VAR_1,
     struct ib_qp_init_attr *VAR_2)
{
 VAR_0->gsi_qp_created = 1;
 VAR_0->gsi_sqcq = FUNC_0(VAR_2->send_cq);
 VAR_0->gsi_rqcq = FUNC_0(VAR_2->recv_cq);
 VAR_0->gsi_qp = VAR_1;
}
