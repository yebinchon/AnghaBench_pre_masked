
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void** dma_mask; void* coherent_dma_mask; } ;
struct platform_device {void* dma_mask; TYPE_1__ dev; } ;


 void* FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(struct platform_device *VAR_0)
{
 if (!VAR_0->dev.coherent_dma_mask)
  VAR_0->dev.coherent_dma_mask = FUNC_0(32);
 if (!VAR_0->dma_mask)
  VAR_0->dma_mask = FUNC_0(32);
 if (!VAR_0->dev.dma_mask)
  VAR_0->dev.dma_mask = &VAR_0->dma_mask;
}
