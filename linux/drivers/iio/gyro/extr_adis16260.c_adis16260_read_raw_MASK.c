
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {size_t scan_index; int channel; int type; } ;
struct adis16260_chip_info {int gyro_max_scale; int gyro_max_val; } ;
struct adis {int spi; } ;
struct adis16260 {struct adis adis; struct adis16260_chip_info* info; } ;
typedef int s16 ;
struct TYPE_2__ {int driver_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;







 int FUNC_0 (int) ;


 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

 int ** VAR_8 ;
 int FUNC_1 (struct adis*,int ,int*) ;
 int FUNC_2 (struct iio_dev*,struct iio_chan_spec const*,int ,int*) ;
 struct adis16260* FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (int,int) ;
 TYPE_1__* FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct iio_dev *VAR_9,
         struct iio_chan_spec const *VAR_10,
         int *VAR_11, int *VAR_12,
         long VAR_13)
{
 struct adis16260 *VAR_14 = FUNC_3(VAR_9);
 const struct adis16260_chip_info *VAR_15 = VAR_14->info;
 struct adis *VAR_16 = &VAR_14->adis;
 int VAR_17;
 u8 VAR_18;
 s16 VAR_19;

 switch (VAR_13) {
 case 133:
  return FUNC_2(VAR_9, VAR_10,
    VAR_0, VAR_11);
 case 131:
  switch (VAR_10->type) {
  case 137:
   *VAR_11 = VAR_15->gyro_max_scale;
   *VAR_12 = VAR_15->gyro_max_val;
   return VAR_5;
  case 130:
   *VAR_11 = 0;
   *VAR_12 = FUNC_0(36630);
   return VAR_7;
  case 128:
   if (VAR_10->channel == 0) {
    *VAR_11 = 1;
    *VAR_12 = 831500;
   } else {
    *VAR_11 = 0;
    *VAR_12 = 610500;
   }
   return VAR_7;
  case 129:
   *VAR_11 = 145;
   *VAR_12 = 300000;
   return VAR_7;
  default:
   return -VAR_4;
  }
 case 134:
  *VAR_11 = 250000 / 1453;
  return VAR_6;
 case 136:
  VAR_18 = VAR_8[VAR_10->scan_index][0];
  VAR_17 = FUNC_1(VAR_16, VAR_18, &VAR_19);
  if (VAR_17)
   return VAR_17;

  *VAR_11 = FUNC_4(VAR_19, 11);
  return VAR_6;
 case 135:
  VAR_18 = VAR_8[VAR_10->scan_index][1];
  VAR_17 = FUNC_1(VAR_16, VAR_18, &VAR_19);
  if (VAR_17)
   return VAR_17;

  *VAR_11 = VAR_19;
  return VAR_6;
 case 132:
  VAR_17 = FUNC_1(VAR_16, VAR_1, &VAR_19);
  if (VAR_17)
   return VAR_17;

  if (FUNC_5(VAR_16->spi)->driver_data)

   *VAR_11 = (VAR_19 & VAR_3) ?
    8 : 256;
  else
   *VAR_11 = (VAR_19 & VAR_3) ?
    66 : 2048;
  *VAR_11 /= (VAR_19 & VAR_2) + 1;
  return VAR_6;
 }
 return -VAR_4;
}
