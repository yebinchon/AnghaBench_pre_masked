
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sc27xx_adc_data {int* channel_scale; } ;
struct iio_dev {int mlock; } ;
struct iio_chan_spec {size_t channel; } ;


 int VAR_0 ;



 int VAR_1 ;
 struct sc27xx_adc_data* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct sc27xx_adc_data*,size_t,int,int*) ;
 int FUNC_4 (struct sc27xx_adc_data*,size_t,int,int*) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_2,
          struct iio_chan_spec const *VAR_3,
          int *VAR_4, int *VAR_5, long VAR_6)
{
 struct sc27xx_adc_data *VAR_7 = FUNC_0(VAR_2);
 int VAR_8 = VAR_7->channel_scale[VAR_3->channel];
 int VAR_9, VAR_10;

 switch (VAR_6) {
 case 129:
  FUNC_1(&VAR_2->mlock);
  VAR_9 = FUNC_3(VAR_7, VAR_3->channel, VAR_8, &VAR_10);
  FUNC_2(&VAR_2->mlock);

  if (VAR_9)
   return VAR_9;

  *VAR_4 = VAR_10;
  return VAR_1;

 case 130:
  FUNC_1(&VAR_2->mlock);
  VAR_9 = FUNC_4(VAR_7, VAR_3->channel, VAR_8,
      &VAR_10);
  FUNC_2(&VAR_2->mlock);

  if (VAR_9)
   return VAR_9;

  *VAR_4 = VAR_10;
  return VAR_1;

 case 128:
  *VAR_4 = VAR_8;
  return VAR_1;

 default:
  return -VAR_0;
 }
}
