
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ swdma_mask; scalar_t__ mwdma_mask; scalar_t__ ultra_mask; int dma_base; } ;
typedef TYPE_1__ ide_hwif_t ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_0(ide_hwif_t *VAR_1)
{
 if (!VAR_1->dma_base)
  return;

 if (VAR_0)
  VAR_1->ultra_mask = VAR_1->mwdma_mask = VAR_1->swdma_mask = 0;
}
