
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inv_mpu6050_state {int lock; TYPE_1__* reg; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int channel2; int type; } ;
struct TYPE_2__ {int accl_offset; int gyro_offset; } ;


 int VAR_0 ;




 int FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (struct iio_dev*) ;
 struct inv_mpu6050_state* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (struct inv_mpu6050_state*,int ,int ,int) ;
 int FUNC_4 (struct inv_mpu6050_state*,int) ;
 int FUNC_5 (struct inv_mpu6050_state*,int) ;
 int FUNC_6 (struct inv_mpu6050_state*,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct iio_dev *VAR_1,
     struct iio_chan_spec const *VAR_2,
     int VAR_3, int VAR_4, long VAR_5)
{
 struct inv_mpu6050_state *VAR_6 = FUNC_2(VAR_1);
 int VAR_7;





 VAR_7 = FUNC_0(VAR_1);
 if (VAR_7)
  return VAR_7;

 FUNC_7(&VAR_6->lock);
 VAR_7 = FUNC_4(VAR_6, 1);
 if (VAR_7)
  goto error_write_raw_unlock;

 switch (VAR_5) {
 case 128:
  switch (VAR_2->type) {
  case 130:
   VAR_7 = FUNC_6(VAR_6, VAR_4);
   break;
  case 131:
   VAR_7 = FUNC_5(VAR_6, VAR_4);
   break;
  default:
   VAR_7 = -VAR_0;
   break;
  }
  break;
 case 129:
  switch (VAR_2->type) {
  case 130:
   VAR_7 = FUNC_3(VAR_6,
       VAR_6->reg->gyro_offset,
       VAR_2->channel2, VAR_3);
   break;
  case 131:
   VAR_7 = FUNC_3(VAR_6,
       VAR_6->reg->accl_offset,
       VAR_2->channel2, VAR_3);
   break;
  default:
   VAR_7 = -VAR_0;
   break;
  }
  break;
 default:
  VAR_7 = -VAR_0;
  break;
 }

 VAR_7 |= FUNC_4(VAR_6, 0);
error_write_raw_unlock:
 FUNC_8(&VAR_6->lock);
 FUNC_1(VAR_1);

 return VAR_7;
}
