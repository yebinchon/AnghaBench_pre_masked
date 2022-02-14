
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dw_dma_slave {scalar_t__ dma_dev; } ;
struct dw_dma_chan {int dws; } ;
struct dma_chan {TYPE_1__* device; } ;
struct TYPE_2__ {scalar_t__ dev; } ;


 int FUNC_0 (int *,struct dw_dma_slave*,int) ;
 struct dw_dma_chan* FUNC_1 (struct dma_chan*) ;

bool FUNC_2(struct dma_chan *VAR_0, void *VAR_1)
{
 struct dw_dma_chan *VAR_2 = FUNC_1(VAR_0);
 struct dw_dma_slave *VAR_3 = VAR_1;

 if (VAR_3->dma_dev != VAR_0->device->dev)
  return 0;


 FUNC_0(&VAR_2->dws, VAR_3, sizeof(struct dw_dma_slave));

 return 1;
}
