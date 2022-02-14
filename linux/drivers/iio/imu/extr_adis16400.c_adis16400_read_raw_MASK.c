
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_dev {int mlock; } ;
struct iio_chan_spec {size_t scan_index; int channel; int type; } ;
struct adis16400_state {TYPE_1__* variant; int adis; } ;
typedef int int16_t ;
struct TYPE_2__ {int gyro_scale_micro; int accel_scale_micro; int temp_scale_nano; int temp_offset; int (* get_freq ) (struct adis16400_state*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 int* VAR_4 ;
 int * VAR_5 ;
 int FUNC_0 (int *,int ,int*) ;
 int FUNC_1 (struct iio_dev*,struct iio_chan_spec const*,int ,int*) ;
 struct adis16400_state* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (struct adis16400_state*) ;
 int FUNC_7 (struct adis16400_state*) ;

__attribute__((used)) static int FUNC_8(struct iio_dev *VAR_6,
 struct iio_chan_spec const *VAR_7, int *VAR_8, int *VAR_9, long VAR_10)
{
 struct adis16400_state *VAR_11 = FUNC_2(VAR_6);
 int16_t VAR_12;
 int VAR_13;

 switch (VAR_10) {
 case 134:
  return FUNC_1(VAR_6, VAR_7, 0, VAR_8);
 case 132:
  switch (VAR_7->type) {
  case 138:
   *VAR_8 = 0;
   *VAR_9 = VAR_11->variant->gyro_scale_micro;
   return VAR_3;
  case 128:
   *VAR_8 = 0;
   if (VAR_7->channel == 0) {
    *VAR_8 = 2;
    *VAR_9 = 418000;
   } else {
    *VAR_8 = 0;
    *VAR_9 = 805800;
   }
   return VAR_3;
  case 139:
   *VAR_8 = 0;
   *VAR_9 = VAR_11->variant->accel_scale_micro;
   return VAR_3;
  case 131:
   *VAR_8 = 0;
   *VAR_9 = 500;
   return VAR_3;
  case 129:
   *VAR_8 = VAR_11->variant->temp_scale_nano / 1000000;
   *VAR_9 = (VAR_11->variant->temp_scale_nano % 1000000);
   return VAR_3;
  case 130:

   *VAR_8 = 0;
   *VAR_9 = 2000;
   return VAR_3;
  default:
   return -VAR_1;
  }
 case 137:
  FUNC_3(&VAR_6->mlock);
  VAR_13 = FUNC_0(&VAR_11->adis,
    VAR_5[VAR_7->scan_index], &VAR_12);
  FUNC_4(&VAR_6->mlock);
  if (VAR_13)
   return VAR_13;
  VAR_12 = FUNC_5(VAR_12, 11);
  *VAR_8 = VAR_12;
  return VAR_2;
 case 135:

  *VAR_8 = VAR_11->variant->temp_offset;
  return VAR_2;
 case 136:
  FUNC_3(&VAR_6->mlock);

  VAR_13 = FUNC_0(&VAR_11->adis,
      VAR_0,
      &VAR_12);
  if (VAR_13 < 0) {
   FUNC_4(&VAR_6->mlock);
   return VAR_13;
  }
  VAR_13 = VAR_11->variant->get_freq(VAR_11);
  if (VAR_13 >= 0) {
   VAR_13 /= VAR_4[VAR_12 & 0x07];
   *VAR_8 = VAR_13 / 1000;
   *VAR_9 = (VAR_13 % 1000) * 1000;
  }
  FUNC_4(&VAR_6->mlock);
  if (VAR_13 < 0)
   return VAR_13;
  return VAR_3;
 case 133:
  VAR_13 = VAR_11->variant->get_freq(VAR_11);
  if (VAR_13 < 0)
   return VAR_13;
  *VAR_8 = VAR_13 / 1000;
  *VAR_9 = (VAR_13 % 1000) * 1000;
  return VAR_3;
 default:
  return -VAR_1;
 }
}
