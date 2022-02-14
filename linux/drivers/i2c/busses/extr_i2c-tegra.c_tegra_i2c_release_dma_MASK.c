
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_i2c_dev {int * rx_dma_chan; int * tx_dma_chan; int * dma_buf; int dma_phys; int dma_buf_size; int dev; } ;


 int FUNC_0 (int ,int ,int *,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct tegra_i2c_dev *VAR_0)
{
 if (VAR_0->dma_buf) {
  FUNC_0(VAR_0->dev, VAR_0->dma_buf_size,
      VAR_0->dma_buf, VAR_0->dma_phys);
  VAR_0->dma_buf = ((void*)0);
 }

 if (VAR_0->tx_dma_chan) {
  FUNC_1(VAR_0->tx_dma_chan);
  VAR_0->tx_dma_chan = ((void*)0);
 }

 if (VAR_0->rx_dma_chan) {
  FUNC_1(VAR_0->rx_dma_chan);
  VAR_0->rx_dma_chan = ((void*)0);
 }
}
