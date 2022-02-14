
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct st_sensor_data {int odr; TYPE_1__* current_fullscale; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int scan_index; } ;
struct TYPE_2__ {int gain2; int gain; } ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct st_sensor_data* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (struct iio_dev*,struct iio_chan_spec const*,int*) ;

__attribute__((used)) static int FUNC_2(struct iio_dev *VAR_4,
   struct iio_chan_spec const *VAR_5, int *VAR_6,
       int *VAR_7, long VAR_8)
{
 int VAR_9;
 struct st_sensor_data *VAR_10 = FUNC_0(VAR_4);

 switch (VAR_8) {
 case 130:
  VAR_9 = FUNC_1(VAR_4, VAR_5, VAR_6);
  if (VAR_9 < 0)
   goto read_error;

  return VAR_1;
 case 128:
  *VAR_6 = 0;
  if ((VAR_5->scan_index == VAR_3) &&
     (VAR_10->current_fullscale->gain2 != 0))
   *VAR_7 = VAR_10->current_fullscale->gain2;
  else
   *VAR_7 = VAR_10->current_fullscale->gain;
  return VAR_2;
 case 129:
  *VAR_6 = VAR_10->odr;
  return VAR_1;
 default:
  return -VAR_0;
 }

read_error:
 return VAR_9;
}
