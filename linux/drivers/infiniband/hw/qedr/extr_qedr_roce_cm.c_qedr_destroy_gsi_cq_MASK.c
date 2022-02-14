
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qedr_dev {int cdev; TYPE_2__* ops; int rdma_ctx; } ;
struct qedr_cq {scalar_t__ icid; int pbl; } ;
struct qed_rdma_destroy_cq_out_params {int dummy; } ;
struct qed_rdma_destroy_cq_in_params {scalar_t__ icid; } ;
struct ib_qp_init_attr {int recv_cq; int send_cq; } ;
struct TYPE_4__ {TYPE_1__* common; int (* rdma_destroy_cq ) (int ,struct qed_rdma_destroy_cq_in_params*,struct qed_rdma_destroy_cq_out_params*) ;} ;
struct TYPE_3__ {int (* chain_free ) (int ,int *) ;} ;


 struct qedr_cq* FUNC_0 (int ) ;
 int FUNC_1 (int ,struct qed_rdma_destroy_cq_in_params*,struct qed_rdma_destroy_cq_out_params*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,struct qed_rdma_destroy_cq_in_params*,struct qed_rdma_destroy_cq_out_params*) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static void FUNC_5(struct qedr_dev *VAR_0,
    struct ib_qp_init_attr *VAR_1)
{
 struct qed_rdma_destroy_cq_in_params VAR_2;
 struct qed_rdma_destroy_cq_out_params VAR_3;
 struct qedr_cq *VAR_4;

 VAR_4 = FUNC_0(VAR_1->send_cq);
 VAR_2.icid = VAR_4->icid;
 VAR_0->ops->rdma_destroy_cq(VAR_0->rdma_ctx, &VAR_2, &VAR_3);
 VAR_0->ops->common->chain_free(VAR_0->cdev, &VAR_4->pbl);

 VAR_4 = FUNC_0(VAR_1->recv_cq);

 if (VAR_2.icid != VAR_4->icid) {
  VAR_2.icid = VAR_4->icid;
  VAR_0->ops->rdma_destroy_cq(VAR_0->rdma_ctx, &VAR_2, &VAR_3);
  VAR_0->ops->common->chain_free(VAR_0->cdev, &VAR_4->pbl);
 }
}
