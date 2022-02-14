
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ib_udata {int dummy; } ;
struct ib_cq {int device; } ;
struct efa_dev {TYPE_1__* pdev; int ibdev; } ;
struct efa_cq {int size; int dma_addr; int cq_idx; int cpu_addr; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ,int ) ;
 int FUNC_1 (struct efa_dev*,int ) ;
 int FUNC_2 (int *,char*,int ,int ,int ,int *) ;
 struct efa_cq* FUNC_3 (struct ib_cq*) ;
 struct efa_dev* FUNC_4 (int ) ;

void FUNC_5(struct ib_cq *VAR_1, struct ib_udata *VAR_2)
{
 struct efa_dev *VAR_3 = FUNC_4(VAR_1->device);
 struct efa_cq *VAR_4 = FUNC_3(VAR_1);

 FUNC_2(&VAR_3->ibdev,
    "Destroy cq[%d] virt[0x%p] freed: size[%lu], dma[%pad]\n",
    VAR_4->cq_idx, VAR_4->cpu_addr, VAR_4->size, &VAR_4->dma_addr);

 FUNC_1(VAR_3, VAR_4->cq_idx);
 FUNC_0(&VAR_3->pdev->dev, VAR_4->dma_addr, VAR_4->size,
    VAR_0);
}
