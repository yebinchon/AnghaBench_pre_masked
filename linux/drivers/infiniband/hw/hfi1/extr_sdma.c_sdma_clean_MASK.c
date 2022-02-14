
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct sdma_engine {void* descq; int descq_cnt; int * tx_ring; scalar_t__ descq_phys; scalar_t__ head_phys; int * head_dma; } ;
struct hfi1_devdata {int sdma_heads_size; struct sdma_engine* sdma_rht; struct sdma_engine* per_sdma; int sde_map_lock; int sdma_map; TYPE_1__* pcidev; scalar_t__ sdma_heads_phys; int * sdma_heads_dma; scalar_t__ sdma_pad_phys; int * sdma_pad_dma; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int ,int *) ;
 int VAR_0 ;
 int FUNC_1 (int *,int,void*,scalar_t__) ;
 int FUNC_2 (struct sdma_engine*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct sdma_engine*,int ,int *) ;
 int FUNC_6 (int ) ;
 int VAR_1 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 () ;

void FUNC_10(struct hfi1_devdata *VAR_2, size_t VAR_3)
{
 size_t VAR_4;
 struct sdma_engine *VAR_5;

 if (VAR_2->sdma_pad_dma) {
  FUNC_1(&VAR_2->pcidev->dev, VAR_0,
      (void *)VAR_2->sdma_pad_dma,
      VAR_2->sdma_pad_phys);
  VAR_2->sdma_pad_dma = ((void*)0);
  VAR_2->sdma_pad_phys = 0;
 }
 if (VAR_2->sdma_heads_dma) {
  FUNC_1(&VAR_2->pcidev->dev, VAR_2->sdma_heads_size,
      (void *)VAR_2->sdma_heads_dma,
      VAR_2->sdma_heads_phys);
  VAR_2->sdma_heads_dma = ((void*)0);
  VAR_2->sdma_heads_phys = 0;
 }
 for (VAR_4 = 0; VAR_2->per_sdma && VAR_4 < VAR_3; ++VAR_4) {
  VAR_5 = &VAR_2->per_sdma[VAR_4];

  VAR_5->head_dma = ((void*)0);
  VAR_5->head_phys = 0;

  if (VAR_5->descq) {
   FUNC_1(
    &VAR_2->pcidev->dev,
    VAR_5->descq_cnt * sizeof(u64[2]),
    VAR_5->descq,
    VAR_5->descq_phys
   );
   VAR_5->descq = ((void*)0);
   VAR_5->descq_phys = 0;
  }
  FUNC_3(VAR_5->tx_ring);
  VAR_5->tx_ring = ((void*)0);
 }
 FUNC_7(&VAR_2->sde_map_lock);
 FUNC_6(FUNC_4(VAR_2->sdma_map));
 FUNC_0(VAR_2->sdma_map, ((void*)0));
 FUNC_8(&VAR_2->sde_map_lock);
 FUNC_9();
 FUNC_2(VAR_2->per_sdma);
 VAR_2->per_sdma = ((void*)0);

 if (VAR_2->sdma_rht) {
  FUNC_5(VAR_2->sdma_rht, VAR_1, ((void*)0));
  FUNC_2(VAR_2->sdma_rht);
  VAR_2->sdma_rht = ((void*)0);
 }
}
