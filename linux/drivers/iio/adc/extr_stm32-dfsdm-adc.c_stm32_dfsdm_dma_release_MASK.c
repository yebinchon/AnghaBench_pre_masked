
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct stm32_dfsdm_adc {TYPE_2__* dma_chan; int dma_buf; int rx_buf; } ;
struct iio_dev {int dummy; } ;
struct TYPE_4__ {TYPE_1__* device; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 struct stm32_dfsdm_adc* FUNC_2 (struct iio_dev*) ;

__attribute__((used)) static void FUNC_3(struct iio_dev *VAR_1)
{
 struct stm32_dfsdm_adc *VAR_2 = FUNC_2(VAR_1);

 if (VAR_2->dma_chan) {
  FUNC_0(VAR_2->dma_chan->device->dev,
      VAR_0,
      VAR_2->rx_buf, VAR_2->dma_buf);
  FUNC_1(VAR_2->dma_chan);
 }
}
