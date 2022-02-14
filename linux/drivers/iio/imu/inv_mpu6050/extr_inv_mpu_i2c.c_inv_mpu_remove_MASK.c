
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inv_mpu6050_state {scalar_t__ muxc; } ;
struct iio_dev {int dummy; } ;
struct i2c_client {int dummy; } ;


 struct iio_dev* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (scalar_t__) ;
 struct inv_mpu6050_state* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (struct i2c_client*) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_0)
{
 struct iio_dev *VAR_1 = FUNC_0(VAR_0);
 struct inv_mpu6050_state *VAR_2 = FUNC_2(VAR_1);

 if (VAR_2->muxc) {
  FUNC_3(VAR_0);
  FUNC_1(VAR_2->muxc);
 }

 return 0;
}
