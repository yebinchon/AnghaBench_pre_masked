
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mxs_dma_engine {int nr_channels; TYPE_1__* mxs_chans; } ;
struct TYPE_2__ {int chan_irq; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct mxs_dma_engine *VAR_1, int VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 != VAR_1->nr_channels; ++VAR_3)
  if (VAR_1->mxs_chans[VAR_3].chan_irq == VAR_2)
   return VAR_3;

 return -VAR_0;
}
