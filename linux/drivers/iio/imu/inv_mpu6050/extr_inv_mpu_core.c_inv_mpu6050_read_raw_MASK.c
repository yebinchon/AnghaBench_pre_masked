
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t fsr; size_t accl_fs; } ;
struct inv_mpu6050_state {int lock; TYPE_2__* reg; int chip_type; TYPE_1__ chip_config; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int channel2; int type; } ;
struct TYPE_4__ {int accl_offset; int gyro_offset; } ;


 int VAR_0 ;







 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int* VAR_9 ;
 int* VAR_10 ;
 int FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (struct iio_dev*) ;
 struct inv_mpu6050_state* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (struct iio_dev*,struct iio_chan_spec const*,int*) ;
 int FUNC_4 (struct inv_mpu6050_state*,int ,int ,int*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int
FUNC_7(struct iio_dev *VAR_11,
       struct iio_chan_spec const *VAR_12,
       int *VAR_13, int *VAR_14, long VAR_15)
{
 struct inv_mpu6050_state *VAR_16 = FUNC_2(VAR_11);
 int VAR_17 = 0;

 switch (VAR_15) {
 case 130:
  VAR_17 = FUNC_0(VAR_11);
  if (VAR_17)
   return VAR_17;
  FUNC_5(&VAR_16->lock);
  VAR_17 = FUNC_3(VAR_11, VAR_12, VAR_13);
  FUNC_6(&VAR_16->lock);
  FUNC_1(VAR_11);
  return VAR_17;
 case 129:
  switch (VAR_12->type) {
  case 133:
   FUNC_5(&VAR_16->lock);
   *VAR_13 = 0;
   *VAR_14 = VAR_10[VAR_16->chip_config.fsr];
   FUNC_6(&VAR_16->lock);

   return VAR_3;
  case 134:
   FUNC_5(&VAR_16->lock);
   *VAR_13 = 0;
   *VAR_14 = VAR_9[VAR_16->chip_config.accl_fs];
   FUNC_6(&VAR_16->lock);

   return VAR_2;
  case 128:
   *VAR_13 = 0;
   if (VAR_16->chip_type == VAR_4)
    *VAR_14 = VAR_6;
   else
    *VAR_14 = VAR_8;

   return VAR_2;
  default:
   return -VAR_0;
  }
 case 131:
  switch (VAR_12->type) {
  case 128:
   if (VAR_16->chip_type == VAR_4)
    *VAR_13 = VAR_5;
   else
    *VAR_13 = VAR_7;

   return VAR_1;
  default:
   return -VAR_0;
  }
 case 132:
  switch (VAR_12->type) {
  case 133:
   FUNC_5(&VAR_16->lock);
   VAR_17 = FUNC_4(VAR_16, VAR_16->reg->gyro_offset,
      VAR_12->channel2, VAR_13);
   FUNC_6(&VAR_16->lock);
   return VAR_1;
  case 134:
   FUNC_5(&VAR_16->lock);
   VAR_17 = FUNC_4(VAR_16, VAR_16->reg->accl_offset,
      VAR_12->channel2, VAR_13);
   FUNC_6(&VAR_16->lock);
   return VAR_1;

  default:
   return -VAR_0;
  }
 default:
  return -VAR_0;
 }
}
