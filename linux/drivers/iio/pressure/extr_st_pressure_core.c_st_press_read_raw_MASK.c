
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct st_sensor_data {int odr; TYPE_1__* current_fullscale; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int type; } ;
struct TYPE_2__ {int gain; int gain2; } ;


 int VAR_0 ;






 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct st_sensor_data* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (struct iio_dev*,struct iio_chan_spec const*,int*) ;

__attribute__((used)) static int FUNC_2(struct iio_dev *VAR_6,
   struct iio_chan_spec const *VAR_7, int *VAR_8,
       int *VAR_9, long VAR_10)
{
 int VAR_11;
 struct st_sensor_data *VAR_12 = FUNC_0(VAR_6);

 switch (VAR_10) {
 case 132:
  VAR_11 = FUNC_1(VAR_6, VAR_7, VAR_8);
  if (VAR_11 < 0)
   goto read_error;

  return VAR_2;
 case 130:
  switch (VAR_7->type) {
  case 129:
   *VAR_8 = 0;
   *VAR_9 = VAR_12->current_fullscale->gain;
   return VAR_3;
  case 128:
   *VAR_8 = VAR_4;
   *VAR_9 = VAR_12->current_fullscale->gain2;
   return VAR_1;
  default:
   VAR_11 = -VAR_0;
   goto read_error;
  }

 case 133:
  switch (VAR_7->type) {
  case 128:
   *VAR_8 = VAR_5 *
          VAR_12->current_fullscale->gain2;
   *VAR_9 = VAR_4;
   break;
  default:
   VAR_11 = -VAR_0;
   goto read_error;
  }

  return VAR_1;
 case 131:
  *VAR_8 = VAR_12->odr;
  return VAR_2;
 default:
  return -VAR_0;
 }

read_error:
 return VAR_11;
}
