
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dma_channel {unsigned int chan; } ;
struct TYPE_4__ {TYPE_1__* channel; } ;
struct TYPE_3__ {int chan_enable; int xfer_enable; } ;


 TYPE_2__* VAR_0 ;

__attribute__((used)) static int FUNC_0(struct dma_channel *VAR_1)
{
 unsigned int VAR_2 = VAR_1->chan;

 VAR_0->channel[VAR_2].chan_enable = 1;
 VAR_0->channel[VAR_2].xfer_enable = 1;

 return 0;
}
