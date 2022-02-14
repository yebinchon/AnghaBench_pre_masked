
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sc27xx_adc_data {int* channel_scale; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {size_t channel; } ;


 int VAR_0 ;

 int VAR_1 ;
 struct sc27xx_adc_data* FUNC_0 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_1(struct iio_dev *VAR_2,
    struct iio_chan_spec const *VAR_3,
    int VAR_4, int VAR_5, long VAR_6)
{
 struct sc27xx_adc_data *VAR_7 = FUNC_0(VAR_2);

 switch (VAR_6) {
 case 128:
  VAR_7->channel_scale[VAR_3->channel] = VAR_4;
  return VAR_1;

 default:
  return -VAR_0;
 }
}
