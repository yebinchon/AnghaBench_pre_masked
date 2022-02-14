
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inv_mpu6050_state {TYPE_1__* reg; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int type; int channel2; } ;
struct TYPE_2__ {int temperature; int raw_accl; int raw_gyro; } ;


 int VAR_0 ;


 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct inv_mpu6050_state* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (struct inv_mpu6050_state*,int ,int ,int*) ;
 int FUNC_2 (struct inv_mpu6050_state*,int) ;
 int FUNC_3 (struct inv_mpu6050_state*,int,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_5,
      struct iio_chan_spec const *VAR_6,
      int *VAR_7)
{
 struct inv_mpu6050_state *VAR_8 = FUNC_0(VAR_5);
 int VAR_9;
 int VAR_10;

 VAR_9 = FUNC_2(VAR_8, 1);
 if (VAR_9)
  return VAR_9;

 switch (VAR_6->type) {
 case 129:
  VAR_9 = FUNC_3(VAR_8, 1,
    VAR_3);
  if (VAR_9)
   goto error_power_off;
  VAR_10 = FUNC_1(VAR_8, VAR_8->reg->raw_gyro,
           VAR_6->channel2, VAR_7);
  VAR_9 = FUNC_3(VAR_8, 0,
    VAR_3);
  if (VAR_9)
   goto error_power_off;
  break;
 case 130:
  VAR_9 = FUNC_3(VAR_8, 1,
    VAR_2);
  if (VAR_9)
   goto error_power_off;
  VAR_10 = FUNC_1(VAR_8, VAR_8->reg->raw_accl,
           VAR_6->channel2, VAR_7);
  VAR_9 = FUNC_3(VAR_8, 0,
    VAR_2);
  if (VAR_9)
   goto error_power_off;
  break;
 case 128:

  FUNC_4(VAR_4);
  VAR_10 = FUNC_1(VAR_8, VAR_8->reg->temperature,
           VAR_1, VAR_7);
  break;
 default:
  VAR_10 = -VAR_0;
  break;
 }

 VAR_9 = FUNC_2(VAR_8, 0);
 if (VAR_9)
  goto error_power_off;

 return VAR_10;

error_power_off:
 FUNC_2(VAR_8, 0);
 return VAR_9;
}
