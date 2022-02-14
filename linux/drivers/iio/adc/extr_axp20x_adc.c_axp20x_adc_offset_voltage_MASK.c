
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct axp20x_adc_iio {int regmap; } ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;
 int VAR_4 ;
 struct axp20x_adc_iio* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (int ,int ,int*) ;

__attribute__((used)) static int FUNC_2(struct iio_dev *VAR_5, int VAR_6,
         int *VAR_7)
{
 struct axp20x_adc_iio *VAR_8 = FUNC_0(VAR_5);
 int VAR_9;

 VAR_9 = FUNC_1(VAR_8->regmap, VAR_0, VAR_7);
 if (VAR_9 < 0)
  return VAR_9;

 switch (VAR_6) {
 case 129:
  *VAR_7 &= VAR_1;
  break;

 case 128:
  *VAR_7 &= VAR_2;
  break;

 default:
  return -VAR_3;
 }

 *VAR_7 = *VAR_7 ? 700000 : 0;

 return VAR_4;
}
