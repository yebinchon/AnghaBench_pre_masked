
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct imxdma_filter_data {int request; TYPE_2__* imxdma; } ;
struct imxdma_channel {int dma_request; } ;
struct dma_chan {int * private; TYPE_1__* device; } ;
struct TYPE_4__ {scalar_t__ dev; } ;
struct TYPE_3__ {scalar_t__ dev; } ;


 struct imxdma_channel* FUNC_0 (struct dma_chan*) ;

__attribute__((used)) static bool FUNC_1(struct dma_chan *VAR_0, void *VAR_1)
{
 struct imxdma_filter_data *VAR_2 = VAR_1;
 struct imxdma_channel *VAR_3 = FUNC_0(VAR_0);

 if (VAR_0->device->dev != VAR_2->imxdma->dev)
  return 0;

 VAR_3->dma_request = VAR_2->request;
 VAR_0->private = ((void*)0);

 return 1;
}
