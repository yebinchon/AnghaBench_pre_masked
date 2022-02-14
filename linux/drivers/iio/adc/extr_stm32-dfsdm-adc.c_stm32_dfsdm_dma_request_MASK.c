
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct stm32_dfsdm_adc {TYPE_2__* dma_chan; int rx_buf; int dma_buf; } ;
struct iio_dev {int * setup_ops; int modes; int dev; } ;
struct TYPE_5__ {TYPE_1__* device; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int *,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_2__* FUNC_2 (int *,char*) ;
 struct stm32_dfsdm_adc* FUNC_3 (struct iio_dev*) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_6)
{
 struct stm32_dfsdm_adc *VAR_7 = FUNC_3(VAR_6);

 VAR_7->dma_chan = FUNC_2(&VAR_6->dev, "rx");
 if (!VAR_7->dma_chan)
  return -VAR_1;

 VAR_7->rx_buf = FUNC_0(VAR_7->dma_chan->device->dev,
      VAR_0,
      &VAR_7->dma_buf, VAR_3);
 if (!VAR_7->rx_buf) {
  FUNC_1(VAR_7->dma_chan);
  return -VAR_2;
 }

 VAR_6->modes |= VAR_4;
 VAR_6->setup_ops = &VAR_5;

 return 0;
}
