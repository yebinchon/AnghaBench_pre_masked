
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct omap_dmadev {unsigned int dma_requests; } ;
struct omap_chan {unsigned int dma_sig; } ;
struct dma_chan {TYPE_2__* device; } ;
struct TYPE_6__ {int driver; } ;
struct TYPE_5__ {TYPE_1__* dev; } ;
struct TYPE_4__ {int * driver; } ;


 TYPE_3__ VAR_0 ;
 struct omap_chan* FUNC_0 (struct dma_chan*) ;
 struct omap_dmadev* FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static bool FUNC_2(struct dma_chan *VAR_1, void *VAR_2)
{
 if (VAR_1->device->dev->driver == &VAR_0.driver) {
  struct omap_dmadev *VAR_3 = FUNC_1(VAR_1->device);
  struct omap_chan *VAR_4 = FUNC_0(VAR_1);
  unsigned VAR_5 = *(unsigned *)VAR_2;

  if (VAR_5 <= VAR_3->dma_requests) {
   VAR_4->dma_sig = VAR_5;
   return 1;
  }
 }
 return 0;
}
