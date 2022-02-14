
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct stm32_adc {TYPE_5__* dma_chan; int rx_dma_buf; int rx_buf; TYPE_3__* cfg; scalar_t__ offset; TYPE_1__* common; } ;
struct iio_dev {int dev; } ;
struct dma_slave_config {int src_addr_width; scalar_t__ src_addr; } ;
typedef scalar_t__ dma_addr_t ;
typedef int config ;
struct TYPE_12__ {TYPE_4__* device; } ;
struct TYPE_11__ {int dev; } ;
struct TYPE_10__ {TYPE_2__* regs; } ;
struct TYPE_9__ {scalar_t__ dr; } ;
struct TYPE_8__ {scalar_t__ phys_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int *,int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (TYPE_5__*) ;
 TYPE_5__* FUNC_3 (int *,char*) ;
 int FUNC_4 (TYPE_5__*,struct dma_slave_config*) ;
 struct stm32_adc* FUNC_5 (struct iio_dev*) ;
 int FUNC_6 (struct dma_slave_config*,int ,int) ;

__attribute__((used)) static int FUNC_7(struct iio_dev *VAR_4)
{
 struct stm32_adc *VAR_5 = FUNC_5(VAR_4);
 struct dma_slave_config VAR_6;
 int VAR_7;

 VAR_5->dma_chan = FUNC_3(&VAR_4->dev, "rx");
 if (!VAR_5->dma_chan)
  return 0;

 VAR_5->rx_buf = FUNC_0(VAR_5->dma_chan->device->dev,
      VAR_3,
      &VAR_5->rx_dma_buf, VAR_2);
 if (!VAR_5->rx_buf) {
  VAR_7 = -VAR_1;
  goto err_release;
 }


 FUNC_6(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.src_addr = (dma_addr_t)VAR_5->common->phys_base;
 VAR_6.src_addr += VAR_5->offset + VAR_5->cfg->regs->dr;
 VAR_6.src_addr_width = VAR_0;

 VAR_7 = FUNC_4(VAR_5->dma_chan, &VAR_6);
 if (VAR_7)
  goto err_free;

 return 0;

err_free:
 FUNC_1(VAR_5->dma_chan->device->dev, VAR_3,
     VAR_5->rx_buf, VAR_5->rx_dma_buf);
err_release:
 FUNC_2(VAR_5->dma_chan);

 return VAR_7;
}
