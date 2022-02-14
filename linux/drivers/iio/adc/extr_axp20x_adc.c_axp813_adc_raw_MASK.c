
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {int address; } ;
struct axp20x_adc_iio {int regmap; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;
 struct axp20x_adc_iio* FUNC_1 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_2(struct iio_dev *VAR_1,
     struct iio_chan_spec const *VAR_2, int *VAR_3)
{
 struct axp20x_adc_iio *VAR_4 = FUNC_1(VAR_1);

 *VAR_3 = FUNC_0(VAR_4->regmap, VAR_2->address, 12);
 if (*VAR_3 < 0)
  return *VAR_3;

 return VAR_0;
}
