
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {int pbl; } ;
struct TYPE_5__ {int pbl; } ;
struct qedr_qp {int icid; int qp_id; int qed_qp; TYPE_3__ rq; TYPE_1__ sq; } ;
struct qedr_dev {int rdma_ctx; TYPE_4__* ops; int cdev; } ;
struct qed_rdma_create_qp_out_params {int icid; int qp_id; } ;
struct qed_rdma_create_qp_in_params {void* rq_pbl_ptr; void* rq_num_pages; void* sq_pbl_ptr; void* sq_num_pages; } ;
struct TYPE_8__ {int (* rdma_create_qp ) (int ,struct qed_rdma_create_qp_in_params*,struct qed_rdma_create_qp_out_params*) ;TYPE_2__* common; } ;
struct TYPE_6__ {int (* chain_alloc ) (int ,int ,int ,int ,int ,int ,int *,int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_0 (int *) ;
 void* FUNC_1 (int *) ;
 int FUNC_2 (struct qedr_dev*,struct qedr_qp*) ;
 int FUNC_3 (int ,int ,int ,int ,int ,int ,int *,int *) ;
 int FUNC_4 (int ,int ,int ,int ,int ,int ,int *,int *) ;
 int FUNC_5 (int ,struct qed_rdma_create_qp_in_params*,struct qed_rdma_create_qp_out_params*) ;

__attribute__((used)) static int
FUNC_6(struct qedr_dev *VAR_7,
      struct qedr_qp *VAR_8,
      struct qed_rdma_create_qp_in_params *VAR_9,
      u32 VAR_10, u32 VAR_11)
{
 struct qed_rdma_create_qp_out_params VAR_12;
 int VAR_13;

 VAR_13 = VAR_7->ops->common->chain_alloc(VAR_7->cdev,
        VAR_6,
        VAR_4,
        VAR_3,
        VAR_10,
        VAR_2,
        &VAR_8->sq.pbl, ((void*)0));

 if (VAR_13)
  return VAR_13;

 VAR_9->sq_num_pages = FUNC_0(&VAR_8->sq.pbl);
 VAR_9->sq_pbl_ptr = FUNC_1(&VAR_8->sq.pbl);

 VAR_13 = VAR_7->ops->common->chain_alloc(VAR_7->cdev,
        VAR_5,
        VAR_4,
        VAR_3,
        VAR_11,
        VAR_1,
        &VAR_8->rq.pbl, ((void*)0));
 if (VAR_13)
  return VAR_13;

 VAR_9->rq_num_pages = FUNC_0(&VAR_8->rq.pbl);
 VAR_9->rq_pbl_ptr = FUNC_1(&VAR_8->rq.pbl);

 VAR_8->qed_qp = VAR_7->ops->rdma_create_qp(VAR_7->rdma_ctx,
           VAR_9, &VAR_12);

 if (!VAR_8->qed_qp)
  return -VAR_0;

 VAR_8->qp_id = VAR_12.qp_id;
 VAR_8->icid = VAR_12.icid;

 FUNC_2(VAR_7, VAR_8);
 return VAR_13;
}
