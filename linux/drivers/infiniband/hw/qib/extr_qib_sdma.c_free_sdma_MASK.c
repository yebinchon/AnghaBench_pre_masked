
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct qib_pportdata {void* sdma_descq; int sdma_descq_cnt; scalar_t__ sdma_descq_phys; scalar_t__ sdma_head_phys; int * sdma_head_dma; struct qib_devdata* dd; } ;
struct qib_devdata {TYPE_1__* pcidev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int,void*,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct qib_pportdata *VAR_1)
{
 struct qib_devdata *VAR_2 = VAR_1->dd;

 if (VAR_1->sdma_head_dma) {
  FUNC_0(&VAR_2->pcidev->dev, VAR_0,
      (void *)VAR_1->sdma_head_dma,
      VAR_1->sdma_head_phys);
  VAR_1->sdma_head_dma = ((void*)0);
  VAR_1->sdma_head_phys = 0;
 }

 if (VAR_1->sdma_descq) {
  FUNC_0(&VAR_2->pcidev->dev,
      VAR_1->sdma_descq_cnt * sizeof(u64[2]),
      VAR_1->sdma_descq, VAR_1->sdma_descq_phys);
  VAR_1->sdma_descq = ((void*)0);
  VAR_1->sdma_descq_phys = 0;
 }
}
