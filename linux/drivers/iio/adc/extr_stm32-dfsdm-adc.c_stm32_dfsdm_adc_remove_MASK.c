
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stm32_dfsdm_adc {TYPE_1__* dev_data; } ;
struct platform_device {int dev; } ;
struct iio_dev {int dummy; } ;
struct TYPE_2__ {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct iio_dev*) ;
 struct iio_dev* FUNC_1 (struct stm32_dfsdm_adc*) ;
 int FUNC_2 (int *) ;
 struct stm32_dfsdm_adc* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_1)
{
 struct stm32_dfsdm_adc *VAR_2 = FUNC_3(VAR_1);
 struct iio_dev *VAR_3 = FUNC_1(VAR_2);

 if (VAR_2->dev_data->type == VAR_0)
  FUNC_2(&VAR_1->dev);
 FUNC_0(VAR_3);
 FUNC_4(VAR_3);

 return 0;
}
