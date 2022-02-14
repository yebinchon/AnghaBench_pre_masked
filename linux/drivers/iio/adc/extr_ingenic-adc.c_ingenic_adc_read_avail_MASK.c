
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ingenic_adc {TYPE_1__* soc_data; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;
struct TYPE_2__ {int battery_raw_avail_size; int* battery_raw_avail; int battery_scale_avail_size; int* battery_scale_avail; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 struct ingenic_adc* FUNC_0 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_1(struct iio_dev *VAR_5,
      struct iio_chan_spec const *VAR_6,
      const int **VAR_7,
      int *VAR_8,
      int *VAR_9,
      long VAR_10)
{
 struct ingenic_adc *VAR_11 = FUNC_0(VAR_5);

 switch (VAR_10) {
 case 129:
  *VAR_8 = VAR_4;
  *VAR_9 = VAR_11->soc_data->battery_raw_avail_size;
  *VAR_7 = VAR_11->soc_data->battery_raw_avail;
  return VAR_2;
 case 128:
  *VAR_8 = VAR_3;
  *VAR_9 = VAR_11->soc_data->battery_scale_avail_size;
  *VAR_7 = VAR_11->soc_data->battery_scale_avail;
  return VAR_1;
 default:
  return -VAR_0;
 };
}
