
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {int channel; } ;
struct dln2_adc {int sample_period; int mutex; } ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct dln2_adc*,int ) ;
 struct dln2_adc* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_4,
        struct iio_chan_spec const *VAR_5,
        int *VAR_6,
        int *VAR_7,
        long VAR_8)
{
 int VAR_9;
 unsigned int VAR_10;
 struct dln2_adc *VAR_11 = FUNC_1(VAR_4);

 switch (VAR_8) {
 case 130:
  FUNC_2(&VAR_11->mutex);
  VAR_9 = FUNC_0(VAR_11, VAR_5->channel);
  FUNC_3(&VAR_11->mutex);

  if (VAR_9 < 0)
   return VAR_9;

  *VAR_6 = VAR_9;
  return VAR_1;

 case 128:




  *VAR_6 = 0;
  *VAR_7 = 3222656;
  return VAR_3;

 case 129:
  if (VAR_11->sample_period) {
   VAR_10 = 1000000000 / VAR_11->sample_period;
   *VAR_6 = VAR_10 / 1000000;
   *VAR_7 = VAR_10 % 1000000;
  } else {
   *VAR_6 = 0;
   *VAR_7 = 0;
  }

  return VAR_2;

 default:
  return -VAR_0;
 }
}
