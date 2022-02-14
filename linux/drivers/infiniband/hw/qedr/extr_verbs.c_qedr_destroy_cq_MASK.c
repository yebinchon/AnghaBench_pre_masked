
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct qedr_dev {int cdev; TYPE_2__* ops; int rdma_ctx; } ;
struct TYPE_6__ {int umem; int pbl_tbl; int pbl_info; } ;
struct qedr_cq {int destroyed; scalar_t__ cq_type; int cnq_notif; TYPE_3__ q; int pbl; int icid; } ;
struct qed_rdma_destroy_cq_out_params {scalar_t__ num_cq_notif; } ;
struct qed_rdma_destroy_cq_in_params {int icid; } ;
struct ib_udata {int dummy; } ;
struct ib_cq {int device; } ;
struct TYPE_5__ {TYPE_1__* common; int (* rdma_destroy_cq ) (int ,struct qed_rdma_destroy_cq_in_params*,struct qed_rdma_destroy_cq_out_params*) ;} ;
struct TYPE_4__ {int (* chain_free ) (int ,int *) ;} ;


 int FUNC_0 (struct qedr_dev*,int ,char*,struct qedr_cq*,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 struct qedr_cq* FUNC_2 (struct ib_cq*) ;
 struct qedr_dev* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct qedr_dev*,int *,int ) ;
 int FUNC_7 (int ,struct qed_rdma_destroy_cq_in_params*,struct qed_rdma_destroy_cq_out_params*) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (int ) ;

void FUNC_10(struct ib_cq *VAR_4, struct ib_udata *VAR_5)
{
 struct qedr_dev *VAR_6 = FUNC_3(VAR_4->device);
 struct qed_rdma_destroy_cq_out_params VAR_7;
 struct qed_rdma_destroy_cq_in_params VAR_8;
 struct qedr_cq *VAR_9 = FUNC_2(VAR_4);
 int VAR_10;

 FUNC_0(VAR_6, VAR_3, "destroy cq %p (icid=%d)\n", VAR_9, VAR_9->icid);

 VAR_9->destroyed = 1;


 if (VAR_9->cq_type == VAR_0)
  return;

 VAR_8.icid = VAR_9->icid;
 VAR_6->ops->rdma_destroy_cq(VAR_6->rdma_ctx, &VAR_8, &VAR_7);
 VAR_6->ops->common->chain_free(VAR_6->cdev, &VAR_9->pbl);

 if (VAR_5) {
  FUNC_6(VAR_6, &VAR_9->q.pbl_info, VAR_9->q.pbl_tbl);
  FUNC_4(VAR_9->q.umem);
 }
 VAR_10 = VAR_2;
 while (VAR_7.num_cq_notif != FUNC_1(VAR_9->cnq_notif) && VAR_10) {
  FUNC_9(VAR_1);
  VAR_10--;
 }

 VAR_10 = VAR_2;
 while (VAR_7.num_cq_notif != FUNC_1(VAR_9->cnq_notif) && VAR_10) {
  FUNC_5(VAR_1);
  VAR_10--;
 }






}
