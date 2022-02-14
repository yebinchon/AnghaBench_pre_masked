
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct edma_chan {unsigned int ch_num; int hw_triggered; } ;
struct dma_chan {TYPE_2__* device; } ;
struct TYPE_6__ {int driver; } ;
struct TYPE_5__ {TYPE_1__* dev; } ;
struct TYPE_4__ {int * driver; } ;


 TYPE_3__ VAR_0 ;
 struct edma_chan* FUNC_0 (struct dma_chan*) ;

__attribute__((used)) static bool FUNC_1(struct dma_chan *VAR_1, void *VAR_2)
{
 bool VAR_3 = 0;

 if (VAR_1->device->dev->driver == &VAR_0.driver) {
  struct edma_chan *VAR_4 = FUNC_0(VAR_1);
  unsigned VAR_5 = *(unsigned *)VAR_2;
  if (VAR_5 == VAR_4->ch_num) {

   VAR_4->hw_triggered = 1;
   VAR_3 = 1;
  }
 }
 return VAR_3;
}
