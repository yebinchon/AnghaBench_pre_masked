
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct stm32_adc {TYPE_2__* dma_chan; int rx_dma_buf; int rx_buf; } ;
struct platform_device {int dev; } ;
struct iio_dev {int dummy; } ;
struct TYPE_4__ {TYPE_1__* device; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (struct iio_dev*) ;
 struct iio_dev* FUNC_3 (struct stm32_adc*) ;
 int FUNC_4 (struct iio_dev*) ;
 struct stm32_adc* FUNC_5 (struct platform_device*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_1)
{
 struct stm32_adc *VAR_2 = FUNC_5(VAR_1);
 struct iio_dev *VAR_3 = FUNC_3(VAR_2);

 FUNC_7(&VAR_1->dev);
 FUNC_2(VAR_3);
 FUNC_10(&VAR_1->dev);
 FUNC_6(&VAR_1->dev);
 FUNC_9(&VAR_1->dev);
 FUNC_8(&VAR_1->dev);
 FUNC_4(VAR_3);
 if (VAR_2->dma_chan) {
  FUNC_0(VAR_2->dma_chan->device->dev,
      VAR_0,
      VAR_2->rx_buf, VAR_2->rx_dma_buf);
  FUNC_1(VAR_2->dma_chan);
 }

 return 0;
}
