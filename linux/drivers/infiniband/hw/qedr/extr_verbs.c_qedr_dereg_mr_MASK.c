
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int pbl_table; int pbl_info; } ;
struct TYPE_5__ {int itid; } ;
struct qedr_mr {scalar_t__ type; int umem; TYPE_3__ info; TYPE_2__ hw_mr; } ;
struct qedr_dev {int rdma_ctx; TYPE_1__* ops; } ;
struct ib_udata {int dummy; } ;
struct ib_mr {int device; } ;
struct TYPE_4__ {int (* rdma_deregister_tid ) (int ,int ) ;int (* rdma_free_tid ) (int ,int ) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct qedr_dev* FUNC_0 (int ) ;
 struct qedr_mr* FUNC_1 (struct ib_mr*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct qedr_mr*) ;
 int FUNC_4 (struct qedr_dev*,int *,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;

int FUNC_7(struct ib_mr *VAR_2, struct ib_udata *VAR_3)
{
 struct qedr_mr *VAR_4 = FUNC_1(VAR_2);
 struct qedr_dev *VAR_5 = FUNC_0(VAR_2->device);
 int VAR_6 = 0;

 VAR_6 = VAR_5->ops->rdma_deregister_tid(VAR_5->rdma_ctx, VAR_4->hw_mr.itid);
 if (VAR_6)
  return VAR_6;

 VAR_5->ops->rdma_free_tid(VAR_5->rdma_ctx, VAR_4->hw_mr.itid);

 if ((VAR_4->type != VAR_0) && (VAR_4->type != VAR_1))
  FUNC_4(VAR_5, &VAR_4->info.pbl_info, VAR_4->info.pbl_table);


 FUNC_2(VAR_4->umem);

 FUNC_3(VAR_4);

 return VAR_6;
}
