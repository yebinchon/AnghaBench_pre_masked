
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct rdma_srq_producers {int dummy; } ;
struct qedr_srq_hwq_info {int num_elems; int pbl; void* virt_prod_pair_addr; int phy_prod_pair_addr; } ;
struct qedr_srq {struct qedr_srq_hwq_info hw_srq; } ;
struct qedr_dev {TYPE_4__* pdev; int cdev; TYPE_3__* ops; } ;
struct TYPE_5__ {int max_wr; } ;
struct ib_srq_init_attr {TYPE_1__ attr; } ;
typedef int dma_addr_t ;
struct TYPE_8__ {int dev; } ;
struct TYPE_7__ {TYPE_2__* common; } ;
struct TYPE_6__ {int (* chain_alloc ) (int ,int ,int ,int ,int,int ,int *,int *) ;} ;


 int FUNC_0 (struct qedr_dev*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_1 (int *,int,int *,int ) ;
 int FUNC_2 (int *,int,void*,int ) ;
 int FUNC_3 (int ,int ,int ,int ,int,int ,int *,int *) ;

__attribute__((used)) static int FUNC_4(struct qedr_srq *VAR_7,
     struct qedr_dev *VAR_8,
     struct ib_srq_init_attr *VAR_9)
{
 struct qedr_srq_hwq_info *VAR_10 = &VAR_7->hw_srq;
 dma_addr_t VAR_11;
 u32 VAR_12;
 void *VAR_13;
 int VAR_14;

 VAR_13 = FUNC_1(&VAR_8->pdev->dev,
    sizeof(struct rdma_srq_producers),
    &VAR_11, VAR_1);
 if (!VAR_13) {
  FUNC_0(VAR_8,
         "create srq: failed to allocate dma memory for producer\n");
  return -VAR_0;
 }

 VAR_10->phy_prod_pair_addr = VAR_11;
 VAR_10->virt_prod_pair_addr = VAR_13;

 VAR_12 = VAR_9->attr.max_wr * VAR_6;
 VAR_14 = VAR_8->ops->common->chain_alloc(VAR_8->cdev,
        VAR_5,
        VAR_4,
        VAR_3,
        VAR_12,
        VAR_2,
        &VAR_10->pbl, ((void*)0));
 if (VAR_14)
  goto err0;

 VAR_10->num_elems = VAR_12;

 return 0;

err0:
 FUNC_2(&VAR_8->pdev->dev, sizeof(struct rdma_srq_producers),
     VAR_13, VAR_11);
 return VAR_14;
}
