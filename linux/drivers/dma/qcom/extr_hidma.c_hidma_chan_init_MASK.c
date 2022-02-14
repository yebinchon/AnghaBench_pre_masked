
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct dma_device {int chancnt; int channels; int dev; } ;
struct hidma_dev {struct dma_device ddev; } ;
struct TYPE_2__ {int device_node; struct dma_device* device; } ;
struct hidma_chan {TYPE_1__ chan; int lock; int queued; int completed; int active; int prepared; int free; struct hidma_dev* dmadev; int dma_sig; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct hidma_chan* FUNC_1 (int ,int,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct hidma_dev *VAR_2, u32 VAR_3)
{
 struct hidma_chan *VAR_4;
 struct dma_device *VAR_5;

 VAR_4 = FUNC_1(VAR_2->ddev.dev, sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 VAR_5 = &VAR_2->ddev;
 VAR_4->dma_sig = VAR_3;
 VAR_4->dmadev = VAR_2;
 VAR_4->chan.device = VAR_5;
 FUNC_2(&VAR_4->chan);

 FUNC_0(&VAR_4->free);
 FUNC_0(&VAR_4->prepared);
 FUNC_0(&VAR_4->active);
 FUNC_0(&VAR_4->completed);
 FUNC_0(&VAR_4->queued);

 FUNC_4(&VAR_4->lock);
 FUNC_3(&VAR_4->chan.device_node, &VAR_5->channels);
 VAR_2->ddev.chancnt++;
 return 0;
}
