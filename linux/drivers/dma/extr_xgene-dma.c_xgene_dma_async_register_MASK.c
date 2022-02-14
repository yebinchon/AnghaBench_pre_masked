
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int device_node; struct dma_device* device; } ;
struct xgene_dma_chan {TYPE_1__ dma_chan; int tasklet; int * desc_pool; scalar_t__ pending; int ld_completed; int ld_running; int ld_pending; int lock; } ;
struct xgene_dma {int dev; struct dma_device* dma_dev; struct xgene_dma_chan* chan; } ;
struct dma_device {int cap_mask; int channels; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct xgene_dma_chan*,char*,int) ;
 int FUNC_2 (int ,char*,int ,char*,char*) ;
 int FUNC_3 (struct dma_device*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int ,unsigned long) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct xgene_dma_chan*,struct dma_device*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_12(struct xgene_dma *VAR_3, int VAR_4)
{
 struct xgene_dma_chan *VAR_5 = &VAR_3->chan[VAR_4];
 struct dma_device *VAR_6 = &VAR_3->dma_dev[VAR_4];
 int VAR_7;

 VAR_5->dma_chan.device = VAR_6;

 FUNC_8(&VAR_5->lock);
 FUNC_0(&VAR_5->ld_pending);
 FUNC_0(&VAR_5->ld_running);
 FUNC_0(&VAR_5->ld_completed);
 FUNC_9(&VAR_5->tasklet, VAR_2,
       (unsigned long)VAR_5);

 VAR_5->pending = 0;
 VAR_5->desc_pool = ((void*)0);
 FUNC_5(&VAR_5->dma_chan);


 FUNC_11(VAR_5, VAR_6);


 FUNC_0(&VAR_6->channels);
 FUNC_7(&VAR_5->dma_chan.device_node, &VAR_6->channels);


 VAR_7 = FUNC_3(VAR_6);
 if (VAR_7) {
  FUNC_1(VAR_5, "Failed to register async device %d", VAR_7);
  FUNC_10(&VAR_5->tasklet);

  return VAR_7;
 }


 FUNC_2(VAR_3->dev,
   "%s: CAPABILITY ( %s%s)\n", FUNC_4(&VAR_5->dma_chan),
   FUNC_6(VAR_1, VAR_6->cap_mask) ? "XOR " : "",
   FUNC_6(VAR_0, VAR_6->cap_mask) ? "PQ " : "");

 return 0;
}
