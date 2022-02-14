
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qedr_qp {scalar_t__ qp_type; int qed_qp; } ;
struct qedr_dev {int rdma_ctx; TYPE_1__* ops; } ;
struct ib_udata {int dummy; } ;
struct TYPE_2__ {int (* rdma_destroy_qp ) (int ,int ) ;} ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct qedr_dev*,struct qedr_qp*) ;
 int FUNC_1 (struct qedr_dev*,struct qedr_qp*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct qedr_dev *VAR_1, struct qedr_qp *VAR_2,
      struct ib_udata *VAR_3)
{
 int VAR_4 = 0;

 if (VAR_2->qp_type != VAR_0) {
  VAR_4 = VAR_1->ops->rdma_destroy_qp(VAR_1->rdma_ctx, VAR_2->qed_qp);
  if (VAR_4)
   return VAR_4;
 }

 if (VAR_3)
  FUNC_1(VAR_1, VAR_2);
 else
  FUNC_0(VAR_1, VAR_2);

 return 0;
}
