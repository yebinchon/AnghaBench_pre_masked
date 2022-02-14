
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct iio_dev {int dummy; } ;
struct axp20x_adc_iio {int regmap; TYPE_1__* data; } ;
struct TYPE_2__ {scalar_t__ adc_en2; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (struct iio_dev*) ;
 struct axp20x_adc_iio* FUNC_2 (struct iio_dev*) ;
 struct iio_dev* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_2)
{
 struct iio_dev *VAR_3 = FUNC_3(VAR_2);
 struct axp20x_adc_iio *VAR_4 = FUNC_2(VAR_3);

 FUNC_0(VAR_3);
 FUNC_1(VAR_3);

 FUNC_4(VAR_4->regmap, VAR_0, 0);

 if (VAR_4->data->adc_en2)
  FUNC_4(VAR_4->regmap, VAR_1, 0);

 return 0;
}
