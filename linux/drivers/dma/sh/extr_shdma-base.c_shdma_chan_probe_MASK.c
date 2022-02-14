
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int channels; int dev; } ;
struct shdma_dev {struct shdma_chan** schan; TYPE_1__ dma_dev; } ;
struct TYPE_4__ {int device_node; TYPE_1__* device; } ;
struct shdma_chan {int id; TYPE_2__ dma_chan; int ld_free; int ld_queue; int chan_lock; scalar_t__ max_xfer_len; int dev; int pm_state; } ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct shdma_dev *VAR_2,
      struct shdma_chan *VAR_3, int VAR_4)
{
 VAR_3->pm_state = VAR_1;


 VAR_3->dma_chan.device = &VAR_2->dma_dev;
 FUNC_1(&VAR_3->dma_chan);

 VAR_3->dev = VAR_2->dma_dev.dev;
 VAR_3->id = VAR_4;

 if (!VAR_3->max_xfer_len)
  VAR_3->max_xfer_len = VAR_0;

 FUNC_3(&VAR_3->chan_lock);


 FUNC_0(&VAR_3->ld_queue);
 FUNC_0(&VAR_3->ld_free);


 FUNC_2(&VAR_3->dma_chan.device_node,
   &VAR_2->dma_dev.channels);
 VAR_2->schan[VAR_4] = VAR_3;
}
