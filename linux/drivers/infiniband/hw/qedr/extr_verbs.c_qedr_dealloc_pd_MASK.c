
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qedr_pd {int pd_id; } ;
struct qedr_dev {int rdma_ctx; TYPE_1__* ops; } ;
struct ib_udata {int dummy; } ;
struct ib_pd {int device; } ;
struct TYPE_2__ {int (* rdma_dealloc_pd ) (int ,int ) ;} ;


 int FUNC_0 (struct qedr_dev*,int ,char*,int ) ;
 int VAR_0 ;
 struct qedr_dev* FUNC_1 (int ) ;
 struct qedr_pd* FUNC_2 (struct ib_pd*) ;
 int FUNC_3 (int ,int ) ;

void FUNC_4(struct ib_pd *VAR_1, struct ib_udata *VAR_2)
{
 struct qedr_dev *VAR_3 = FUNC_1(VAR_1->device);
 struct qedr_pd *VAR_4 = FUNC_2(VAR_1);

 FUNC_0(VAR_3, VAR_0, "Deallocating PD %d\n", VAR_4->pd_id);
 VAR_3->ops->rdma_dealloc_pd(VAR_3->rdma_ctx, VAR_4->pd_id);
}
