
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm32_adc {int trigger_polarity; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;


 struct stm32_adc* FUNC_0 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_1(struct iio_dev *VAR_0,
      const struct iio_chan_spec *VAR_1)
{
 struct stm32_adc *VAR_2 = FUNC_0(VAR_0);

 return VAR_2->trigger_polarity;
}
