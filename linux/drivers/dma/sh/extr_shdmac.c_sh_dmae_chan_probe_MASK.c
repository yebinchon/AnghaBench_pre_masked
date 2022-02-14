
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int dev; } ;
struct shdma_dev {TYPE_2__ dma_dev; } ;
struct shdma_chan {scalar_t__ max_xfer_len; } ;
struct sh_dmae_device {struct sh_dmae_chan** chan; scalar_t__ chan_reg; struct shdma_dev shdma_dev; TYPE_1__* pdata; } ;
struct sh_dmae_channel {scalar_t__ offset; } ;
struct sh_dmae_chan {int dev_id; scalar_t__ base; struct shdma_chan shdma_chan; } ;
struct platform_device {scalar_t__ id; } ;
struct TYPE_3__ {struct sh_dmae_channel* channel; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*,int,int) ;
 struct sh_dmae_chan* FUNC_1 (int ,int,int ) ;
 int FUNC_2 (struct shdma_dev*,struct shdma_chan*,int) ;
 int FUNC_3 (struct shdma_chan*) ;
 int FUNC_4 (struct shdma_chan*,int,unsigned long,int ) ;
 int FUNC_5 (int ,int,char*,int,...) ;
 struct platform_device* FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct sh_dmae_device *VAR_3, int VAR_4,
     int VAR_5, unsigned long VAR_6)
{
 const struct sh_dmae_channel *VAR_7 = &VAR_3->pdata->channel[VAR_4];
 struct shdma_dev *VAR_8 = &VAR_3->shdma_dev;
 struct platform_device *VAR_9 = FUNC_6(VAR_8->dma_dev.dev);
 struct sh_dmae_chan *VAR_10;
 struct shdma_chan *VAR_11;
 int VAR_12;

 VAR_10 = FUNC_1(VAR_8->dma_dev.dev, sizeof(struct sh_dmae_chan),
          VAR_1);
 if (!VAR_10)
  return -VAR_0;

 VAR_11 = &VAR_10->shdma_chan;
 VAR_11->max_xfer_len = VAR_2 + 1;

 FUNC_2(VAR_8, VAR_11, VAR_4);

 VAR_10->base = VAR_3->chan_reg + VAR_7->offset;


 if (VAR_9->id >= 0)
  FUNC_5(VAR_10->dev_id, sizeof(VAR_10->dev_id),
    "sh-dmae%d.%d", VAR_9->id, VAR_4);
 else
  FUNC_5(VAR_10->dev_id, sizeof(VAR_10->dev_id),
    "sh-dma%d", VAR_4);

 VAR_12 = FUNC_4(VAR_11, VAR_5, VAR_6, VAR_10->dev_id);
 if (VAR_12) {
  FUNC_0(VAR_8->dma_dev.dev,
   "DMA channel %d request_irq error %d\n",
   VAR_4, VAR_12);
  goto err_no_irq;
 }

 VAR_3->chan[VAR_4] = VAR_10;
 return 0;

err_no_irq:

 FUNC_3(VAR_11);
 return VAR_12;
}
