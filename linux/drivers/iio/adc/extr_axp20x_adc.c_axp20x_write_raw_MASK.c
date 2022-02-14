
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {int channel; } ;
struct axp20x_adc_iio {int regmap; } ;



 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (int) ;
 unsigned int VAR_2 ;
 unsigned int FUNC_1 (int) ;

 int VAR_3 ;
 long VAR_4 ;
 struct axp20x_adc_iio* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (int ,int ,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_5,
       struct iio_chan_spec const *VAR_6, int VAR_7, int VAR_8,
       long VAR_9)
{
 struct axp20x_adc_iio *VAR_10 = FUNC_2(VAR_5);
 unsigned int VAR_11, VAR_12;





 if (VAR_9 != VAR_4)
  return -VAR_3;

 if (VAR_7 != 0 && VAR_7 != 700000)
  return -VAR_3;

 VAR_7 = VAR_7 ? 1 : 0;

 switch (VAR_6->channel) {
 case 129:
  VAR_11 = VAR_1;
  VAR_12 = FUNC_0(VAR_7);
  break;

 case 128:
  VAR_11 = VAR_2;
  VAR_12 = FUNC_1(VAR_7);
  break;

 default:
  return -VAR_3;
 }

 return FUNC_3(VAR_10->regmap, VAR_0, VAR_11,
      VAR_12);
}
