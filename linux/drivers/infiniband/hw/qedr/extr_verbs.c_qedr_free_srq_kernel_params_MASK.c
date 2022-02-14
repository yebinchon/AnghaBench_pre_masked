
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rdma_srq_producers {int dummy; } ;
struct qedr_srq_hwq_info {int phy_prod_pair_addr; int virt_prod_pair_addr; int pbl; } ;
struct qedr_srq {struct qedr_dev* dev; struct qedr_srq_hwq_info hw_srq; } ;
struct qedr_dev {TYPE_1__* pdev; int cdev; TYPE_3__* ops; } ;
struct TYPE_6__ {TYPE_2__* common; } ;
struct TYPE_5__ {int (* chain_free ) (int ,int *) ;} ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (int *,int,int ,int ) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(struct qedr_srq *VAR_0)
{
 struct qedr_srq_hwq_info *VAR_1 = &VAR_0->hw_srq;
 struct qedr_dev *VAR_2 = VAR_0->dev;

 VAR_2->ops->common->chain_free(VAR_2->cdev, &VAR_1->pbl);

 FUNC_0(&VAR_2->pdev->dev, sizeof(struct rdma_srq_producers),
     VAR_1->virt_prod_pair_addr,
     VAR_1->phy_prod_pair_addr);
}
