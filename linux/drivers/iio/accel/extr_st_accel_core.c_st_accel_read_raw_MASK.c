
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct st_sensor_data {int odr; TYPE_1__* current_fullscale; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;
struct TYPE_2__ {int gain; } ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 struct st_sensor_data* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (struct iio_dev*,struct iio_chan_spec const*,int*) ;

__attribute__((used)) static int FUNC_2(struct iio_dev *VAR_3,
   struct iio_chan_spec const *VAR_4, int *VAR_5,
       int *VAR_6, long VAR_7)
{
 int VAR_8;
 struct st_sensor_data *VAR_9 = FUNC_0(VAR_3);

 switch (VAR_7) {
 case 130:
  VAR_8 = FUNC_1(VAR_3, VAR_4, VAR_5);
  if (VAR_8 < 0)
   goto read_error;

  return VAR_1;
 case 128:
  *VAR_5 = VAR_9->current_fullscale->gain / 1000000;
  *VAR_6 = VAR_9->current_fullscale->gain % 1000000;
  return VAR_2;
 case 129:
  *VAR_5 = VAR_9->odr;
  return VAR_1;
 default:
  return -VAR_0;
 }

read_error:
 return VAR_8;
}
