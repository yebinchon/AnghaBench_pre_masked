
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int pbl; } ;
struct TYPE_6__ {int pbl; } ;
struct qedr_qp {int rqe_wr_id; TYPE_1__ rq; int wqe_wr_id; TYPE_2__ sq; } ;
struct qedr_dev {int cdev; TYPE_4__* ops; } ;
struct TYPE_8__ {TYPE_3__* common; } ;
struct TYPE_7__ {int (* chain_free ) (int ,int *) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct qedr_dev *VAR_0, struct qedr_qp *VAR_1)
{
 VAR_0->ops->common->chain_free(VAR_0->cdev, &VAR_1->sq.pbl);
 FUNC_0(VAR_1->wqe_wr_id);

 VAR_0->ops->common->chain_free(VAR_0->cdev, &VAR_1->rq.pbl);
 FUNC_0(VAR_1->rqe_wr_id);
}
