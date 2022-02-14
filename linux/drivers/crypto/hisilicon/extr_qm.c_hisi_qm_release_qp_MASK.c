
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qm_dma {int dma; scalar_t__ va; int size; } ;
struct hisi_qp {size_t qp_id; struct qm_dma qdma; struct hisi_qm* qm; } ;
struct hisi_qm {int qps_lock; int qp_bitmap; int ** qp_array; scalar_t__ use_dma_api; TYPE_1__* pdev; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int FUNC_0 (size_t,int ) ;
 int FUNC_1 (struct device*,int ,scalar_t__,int ) ;
 int FUNC_2 (struct hisi_qp*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct hisi_qp *VAR_0)
{
 struct hisi_qm *VAR_1 = VAR_0->qm;
 struct qm_dma *VAR_2 = &VAR_0->qdma;
 struct device *VAR_3 = &VAR_1->pdev->dev;

 if (VAR_1->use_dma_api && VAR_2->va)
  FUNC_1(VAR_3, VAR_2->size, VAR_2->va, VAR_2->dma);

 FUNC_3(&VAR_1->qps_lock);
 VAR_1->qp_array[VAR_0->qp_id] = ((void*)0);
 FUNC_0(VAR_0->qp_id, VAR_1->qp_bitmap);
 FUNC_4(&VAR_1->qps_lock);

 FUNC_2(VAR_0);
}
