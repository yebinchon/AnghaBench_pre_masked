
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {scalar_t__ type; scalar_t__ channel; int address; } ;
struct axp20x_adc_iio {int regmap; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int) ;
 struct axp20x_adc_iio* FUNC_1 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_2(struct iio_dev *VAR_3,
     struct iio_chan_spec const *VAR_4, int *VAR_5)
{
 struct axp20x_adc_iio *VAR_6 = FUNC_1(VAR_3);
 int VAR_7;






 if (VAR_4->type == VAR_1 && VAR_4->channel == VAR_0)
  VAR_7 = 13;
 else
  VAR_7 = 12;

 *VAR_5 = FUNC_0(VAR_6->regmap, VAR_4->address, VAR_7);
 if (*VAR_5 < 0)
  return *VAR_5;

 return VAR_2;
}
