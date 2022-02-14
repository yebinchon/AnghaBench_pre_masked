
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int wait; int done; int active; int pending; int free; } ;
struct dma_chan {int device_node; TYPE_2__* device; } ;
struct rcar_dmac_chan {unsigned int index; int irq; TYPE_1__ desc; int lock; int mid_rid; scalar_t__ iomem; struct dma_chan chan; } ;
struct TYPE_4__ {int channels; } ;
struct rcar_dmac {int dev; TYPE_2__ engine; scalar_t__ iomem; } ;
struct platform_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (unsigned int) ;
 int FUNC_2 (int ,char*,int ,int) ;
 int FUNC_3 (int ) ;
 char* FUNC_4 (int ,int ,char*,int ,unsigned int) ;
 int FUNC_5 (int ,int ,int ,int ,int ,char*,struct rcar_dmac_chan*) ;
 int FUNC_6 (struct dma_chan*) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (struct platform_device*,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (char*,char*,unsigned int) ;
 struct platform_device* FUNC_11 (int ) ;

__attribute__((used)) static int FUNC_12(struct rcar_dmac *VAR_6,
    struct rcar_dmac_chan *VAR_7,
    unsigned int VAR_8)
{
 struct platform_device *VAR_9 = FUNC_11(VAR_6->dev);
 struct dma_chan *VAR_10 = &VAR_7->chan;
 char VAR_11[5];
 char *VAR_12;
 int VAR_13;

 VAR_7->index = VAR_8;
 VAR_7->iomem = VAR_6->iomem + FUNC_1(VAR_8);
 VAR_7->mid_rid = -VAR_0;

 FUNC_9(&VAR_7->lock);

 FUNC_0(&VAR_7->desc.free);
 FUNC_0(&VAR_7->desc.pending);
 FUNC_0(&VAR_7->desc.active);
 FUNC_0(&VAR_7->desc.done);
 FUNC_0(&VAR_7->desc.wait);


 FUNC_10(VAR_11, "ch%u", VAR_8);
 VAR_7->irq = FUNC_8(VAR_9, VAR_11);
 if (VAR_7->irq < 0)
  return -VAR_1;

 VAR_12 = FUNC_4(VAR_6->dev, VAR_3, "%s:%u",
     FUNC_3(VAR_6->dev), VAR_8);
 if (!VAR_12)
  return -VAR_2;





 VAR_10->device = &VAR_6->engine;
 FUNC_6(VAR_10);

 FUNC_7(&VAR_10->device_node, &VAR_6->engine.channels);

 VAR_13 = FUNC_5(VAR_6->dev, VAR_7->irq,
     VAR_4,
     VAR_5, 0,
     VAR_12, VAR_7);
 if (VAR_13) {
  FUNC_2(VAR_6->dev, "failed to request IRQ %u (%d)\n",
   VAR_7->irq, VAR_13);
  return VAR_13;
 }

 return 0;
}
