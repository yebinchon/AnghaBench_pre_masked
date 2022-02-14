
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dma_chan {unsigned int chan_id; TYPE_1__* device; } ;
struct TYPE_2__ {unsigned int dev_id; } ;


 unsigned int VAR_0 ;

bool FUNC_0(struct dma_chan *VAR_1, void *VAR_2)
{
 unsigned int VAR_3 = (unsigned int) VAR_2;

 if (VAR_3 == VAR_1->chan_id +
  VAR_1->device->dev_id * VAR_0)
  return 1;

 return 0;
}
