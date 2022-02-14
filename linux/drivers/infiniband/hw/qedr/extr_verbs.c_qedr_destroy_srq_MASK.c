
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qedr_srq {int srq_id; } ;
struct qedr_dev {int rdma_ctx; TYPE_1__* ops; int srqs; } ;
struct qed_rdma_destroy_srq_in_params {int srq_id; } ;
struct ib_udata {int dummy; } ;
struct ib_srq {scalar_t__ uobject; int device; } ;
struct TYPE_2__ {int (* rdma_destroy_srq ) (int ,struct qed_rdma_destroy_srq_in_params*) ;} ;


 int FUNC_0 (struct qedr_dev*,int ,char*,int ) ;
 int VAR_0 ;
 struct qedr_dev* FUNC_1 (int ) ;
 struct qedr_srq* FUNC_2 (struct ib_srq*) ;
 int FUNC_3 (struct qedr_srq*) ;
 int FUNC_4 (struct qedr_srq*) ;
 int FUNC_5 (int ,struct qed_rdma_destroy_srq_in_params*) ;
 int FUNC_6 (int *,int ) ;

void FUNC_7(struct ib_srq *VAR_1, struct ib_udata *VAR_2)
{
 struct qed_rdma_destroy_srq_in_params VAR_3 = {};
 struct qedr_dev *VAR_4 = FUNC_1(VAR_1->device);
 struct qedr_srq *VAR_5 = FUNC_2(VAR_1);

 FUNC_6(&VAR_4->srqs, VAR_5->srq_id);
 VAR_3.srq_id = VAR_5->srq_id;
 VAR_4->ops->rdma_destroy_srq(VAR_4->rdma_ctx, &VAR_3);

 if (VAR_1->uobject)
  FUNC_4(VAR_5);
 else
  FUNC_3(VAR_5);

 FUNC_0(VAR_4, VAR_0,
   "destroy srq: destroyed srq with srq_id=0x%0x\n",
   VAR_5->srq_id);
}
