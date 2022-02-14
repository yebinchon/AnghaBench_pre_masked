
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int user_ctrl; } ;
struct inv_mpu6050_state {TYPE_1__ chip_config; TYPE_2__* reg; int map; } ;
struct iio_dev {int dummy; } ;
struct TYPE_4__ {scalar_t__ user_ctrl; scalar_t__ i2c_if; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct inv_mpu6050_state* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (struct inv_mpu6050_state*,int) ;
 int FUNC_2 (int ,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_3(struct iio_dev *VAR_2)
{
 struct inv_mpu6050_state *VAR_3 = FUNC_0(VAR_2);
 int VAR_4 = 0;

 VAR_4 = FUNC_1(VAR_3, 1);
 if (VAR_4)
  return VAR_4;

 if (VAR_3->reg->i2c_if) {
  VAR_4 = FUNC_2(VAR_3->map, VAR_3->reg->i2c_if,
       VAR_0);
 } else {
  VAR_3->chip_config.user_ctrl |= VAR_1;
  VAR_4 = FUNC_2(VAR_3->map, VAR_3->reg->user_ctrl,
       VAR_3->chip_config.user_ctrl);
 }
 if (VAR_4) {
  FUNC_1(VAR_3, 0);
  return VAR_4;
 }

 return FUNC_1(VAR_3, 0);
}
