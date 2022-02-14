
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct tiadc_dma {TYPE_2__* chan; int addr; int buf; } ;
struct tiadc_device {int mfd_tscadc; struct tiadc_dma dma; } ;
struct platform_device {int dummy; } ;
struct iio_dev {int dummy; } ;
struct TYPE_4__ {TYPE_1__* device; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (struct tiadc_device*) ;
 int FUNC_4 (struct iio_dev*) ;
 struct tiadc_device* FUNC_5 (struct iio_dev*) ;
 struct iio_dev* FUNC_6 (struct platform_device*) ;
 int FUNC_7 (struct iio_dev*) ;
 int FUNC_8 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_1)
{
 struct iio_dev *VAR_2 = FUNC_6(VAR_1);
 struct tiadc_device *VAR_3 = FUNC_5(VAR_2);
 struct tiadc_dma *VAR_4 = &VAR_3->dma;
 u32 VAR_5;

 if (VAR_4->chan) {
  FUNC_1(VAR_4->chan->device->dev, VAR_0,
      VAR_4->buf, VAR_4->addr);
  FUNC_2(VAR_4->chan);
 }
 FUNC_4(VAR_2);
 FUNC_8(VAR_2);
 FUNC_7(VAR_2);

 VAR_5 = FUNC_3(VAR_3);
 FUNC_0(VAR_3->mfd_tscadc, VAR_5);

 return 0;
}
