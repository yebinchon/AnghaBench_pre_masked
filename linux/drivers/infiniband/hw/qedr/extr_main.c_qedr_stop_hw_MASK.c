
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qedr_dev {int rdma_ctx; TYPE_1__* ops; int dpi; } ;
struct TYPE_2__ {int (* rdma_stop ) (int ) ;int (* rdma_remove_user ) (int ,int ) ;} ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct qedr_dev *VAR_0)
{
 VAR_0->ops->rdma_remove_user(VAR_0->rdma_ctx, VAR_0->dpi);
 VAR_0->ops->rdma_stop(VAR_0->rdma_ctx);
}
