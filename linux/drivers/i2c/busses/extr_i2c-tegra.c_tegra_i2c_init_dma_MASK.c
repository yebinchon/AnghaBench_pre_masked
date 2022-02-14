
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tegra_i2c_dev {int dev; int dma_phys; int * dma_buf; int dma_buf_size; struct dma_chan* tx_dma_chan; struct dma_chan* rx_dma_chan; TYPE_1__* hw; } ;
struct dma_chan {int dummy; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {int has_apb_dma; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct dma_chan*) ;
 int FUNC_2 (struct dma_chan*) ;
 int VAR_4 ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,char*,...) ;
 int * FUNC_5 (int ,int ,int *,int) ;
 struct dma_chan* FUNC_6 (int ,char*) ;
 int FUNC_7 (struct tegra_i2c_dev*) ;

__attribute__((used)) static int FUNC_8(struct tegra_i2c_dev *VAR_5)
{
 struct dma_chan *VAR_6;
 u32 *VAR_7;
 dma_addr_t VAR_8;
 int VAR_9;

 if (!VAR_5->hw->has_apb_dma)
  return 0;

 if (!FUNC_0(VAR_0)) {
  FUNC_3(VAR_5->dev, "Support for APB DMA not enabled!\n");
  return 0;
 }

 VAR_6 = FUNC_6(VAR_5->dev, "rx");
 if (FUNC_1(VAR_6)) {
  VAR_9 = FUNC_2(VAR_6);
  goto err_out;
 }

 VAR_5->rx_dma_chan = VAR_6;

 VAR_6 = FUNC_6(VAR_5->dev, "tx");
 if (FUNC_1(VAR_6)) {
  VAR_9 = FUNC_2(VAR_6);
  goto err_out;
 }

 VAR_5->tx_dma_chan = VAR_6;

 VAR_7 = FUNC_5(VAR_5->dev, VAR_5->dma_buf_size,
         &VAR_8, VAR_3 | VAR_4);
 if (!VAR_7) {
  FUNC_4(VAR_5->dev, "failed to allocate the DMA buffer\n");
  VAR_9 = -VAR_1;
  goto err_out;
 }

 VAR_5->dma_buf = VAR_7;
 VAR_5->dma_phys = VAR_8;
 return 0;

err_out:
 FUNC_7(VAR_5);
 if (VAR_9 != -VAR_2) {
  FUNC_4(VAR_5->dev, "cannot use DMA: %d\n", VAR_9);
  FUNC_4(VAR_5->dev, "falling back to PIO\n");
  return 0;
 }

 return VAR_9;
}
