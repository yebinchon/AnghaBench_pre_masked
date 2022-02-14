
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_i2c_dev {int dev; int dma_phys; struct dma_chan* tx_dma_chan; struct dma_chan* rx_dma_chan; scalar_t__ msg_read; int dma_complete; } ;
struct dma_chan {int dummy; } ;
struct dma_async_tx_descriptor {struct tegra_i2c_dev* callback_param; int callback; } ;
typedef enum dma_transfer_direction { ____Placeholder_dma_transfer_direction } dma_transfer_direction ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,size_t) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct dma_chan*) ;
 struct dma_async_tx_descriptor* FUNC_3 (struct dma_chan*,int ,size_t,int,int) ;
 int FUNC_4 (struct dma_async_tx_descriptor*) ;
 int FUNC_5 (int *) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_6(struct tegra_i2c_dev *VAR_6, size_t VAR_7)
{
 struct dma_async_tx_descriptor *VAR_8;
 enum dma_transfer_direction VAR_9;
 struct dma_chan *VAR_10;

 FUNC_0(VAR_6->dev, "starting DMA for length: %zu\n", VAR_7);
 FUNC_5(&VAR_6->dma_complete);
 VAR_9 = VAR_6->msg_read ? VAR_1 : VAR_2;
 VAR_10 = VAR_6->msg_read ? VAR_6->rx_dma_chan : VAR_6->tx_dma_chan;
 VAR_8 = FUNC_3(VAR_10, VAR_6->dma_phys,
            VAR_7, VAR_9, VAR_3 |
            VAR_0);
 if (!VAR_8) {
  FUNC_1(VAR_6->dev, "failed to get DMA descriptor\n");
  return -VAR_4;
 }

 VAR_8->callback = VAR_5;
 VAR_8->callback_param = VAR_6;
 FUNC_4(VAR_8);
 FUNC_2(VAR_10);
 return 0;
}
