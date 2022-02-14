
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int tx_submit; int flags; } ;
struct ep93xx_dma_desc {TYPE_2__ txd; int tx_list; } ;
struct ep93xx_dma_data {int port; scalar_t__ direction; char* name; } ;
struct ep93xx_dma_chan {int clk; int irq; int lock; TYPE_1__* edma; int chan; } ;
struct dma_chan {struct ep93xx_dma_data* private; } ;
struct TYPE_3__ {int (* hw_setup ) (struct ep93xx_dma_chan*) ;int m2m; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 int VAR_4 ;

 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct ep93xx_dma_chan*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (TYPE_2__*,struct dma_chan*) ;
 char* FUNC_6 (struct dma_chan*) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (struct dma_chan*) ;
 int FUNC_9 (struct ep93xx_dma_chan*,struct ep93xx_dma_desc*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_10 (int ,struct ep93xx_dma_chan*) ;
 int FUNC_11 (scalar_t__) ;
 struct ep93xx_dma_desc* FUNC_12 (int,int ) ;
 int FUNC_13 (int ,int ,int ,char const*,struct ep93xx_dma_chan*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (struct ep93xx_dma_chan*) ;
 struct ep93xx_dma_chan* FUNC_17 (struct dma_chan*) ;

__attribute__((used)) static int FUNC_18(struct dma_chan *VAR_8)
{
 struct ep93xx_dma_chan *VAR_9 = FUNC_17(VAR_8);
 struct ep93xx_dma_data *VAR_10 = VAR_8->private;
 const char *VAR_11 = FUNC_6(VAR_8);
 int VAR_12, VAR_13;


 if (!VAR_9->edma->m2m) {
  if (!VAR_10)
   return -VAR_2;
  if (VAR_10->port < VAR_3 ||
      VAR_10->port > VAR_4)
   return -VAR_2;
  if (VAR_10->direction != FUNC_8(VAR_8))
   return -VAR_2;
 } else {
  if (VAR_10) {
   switch (VAR_10->port) {
   case 128:
   case 129:
    if (!FUNC_11(VAR_10->direction))
     return -VAR_2;
    break;
   default:
    return -VAR_2;
   }
  }
 }

 if (VAR_10 && VAR_10->name)
  VAR_11 = VAR_10->name;

 VAR_12 = FUNC_3(VAR_9->clk);
 if (VAR_12)
  return VAR_12;

 VAR_12 = FUNC_13(VAR_9->irq, VAR_6, 0, VAR_11, VAR_9);
 if (VAR_12)
  goto fail_clk_disable;

 FUNC_14(&VAR_9->lock);
 FUNC_7(&VAR_9->chan);
 VAR_12 = VAR_9->edma->hw_setup(VAR_9);
 FUNC_15(&VAR_9->lock);

 if (VAR_12)
  goto fail_free_irq;

 for (VAR_13 = 0; VAR_13 < VAR_1; VAR_13++) {
  struct ep93xx_dma_desc *VAR_14;

  VAR_14 = FUNC_12(sizeof(*VAR_14), VAR_5);
  if (!VAR_14) {
   FUNC_4(FUNC_1(VAR_9), "not enough descriptors\n");
   break;
  }

  FUNC_0(&VAR_14->tx_list);

  FUNC_5(&VAR_14->txd, VAR_8);
  VAR_14->txd.flags = VAR_0;
  VAR_14->txd.tx_submit = VAR_7;

  FUNC_9(VAR_9, VAR_14);
 }

 return VAR_13;

fail_free_irq:
 FUNC_10(VAR_9->irq, VAR_9);
fail_clk_disable:
 FUNC_2(VAR_9->clk);

 return VAR_12;
}
