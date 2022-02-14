
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_4__ {scalar_t__ divider; } ;
struct inv_mpu6050_state {int lock; TYPE_2__ chip_config; TYPE_1__* reg; int map; } ;
struct iio_dev {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_3__ {int sample_rate_div; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 struct iio_dev* FUNC_2 (struct device*) ;
 int FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (struct iio_dev*) ;
 struct inv_mpu6050_state* FUNC_5 (struct iio_dev*) ;
 int FUNC_6 (struct inv_mpu6050_state*,int) ;
 int FUNC_7 (struct inv_mpu6050_state*,int) ;
 scalar_t__ FUNC_8 (char const*,int,int*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ,int ,scalar_t__) ;

__attribute__((used)) static ssize_t
FUNC_12(struct device *VAR_3, struct device_attribute *VAR_4,
       const char *VAR_5, size_t VAR_6)
{
 int VAR_7;
 u8 VAR_8;
 int VAR_9;
 struct iio_dev *VAR_10 = FUNC_2(VAR_3);
 struct inv_mpu6050_state *VAR_11 = FUNC_5(VAR_10);

 if (FUNC_8(VAR_5, 10, &VAR_7))
  return -VAR_0;
 if (VAR_7 < VAR_2 ||
     VAR_7 > VAR_1)
  return -VAR_0;

 VAR_9 = FUNC_3(VAR_10);
 if (VAR_9)
  return VAR_9;


 VAR_8 = FUNC_1(VAR_7);

 VAR_7 = FUNC_0(VAR_8);

 FUNC_9(&VAR_11->lock);
 if (VAR_8 == VAR_11->chip_config.divider) {
  VAR_9 = 0;
  goto fifo_rate_fail_unlock;
 }
 VAR_9 = FUNC_7(VAR_11, 1);
 if (VAR_9)
  goto fifo_rate_fail_unlock;

 VAR_9 = FUNC_11(VAR_11->map, VAR_11->reg->sample_rate_div, VAR_8);
 if (VAR_9)
  goto fifo_rate_fail_power_off;
 VAR_11->chip_config.divider = VAR_8;

 VAR_9 = FUNC_6(VAR_11, VAR_7);
 if (VAR_9)
  goto fifo_rate_fail_power_off;

fifo_rate_fail_power_off:
 VAR_9 |= FUNC_7(VAR_11, 0);
fifo_rate_fail_unlock:
 FUNC_10(&VAR_11->lock);
 FUNC_4(VAR_10);
 if (VAR_9)
  return VAR_9;

 return VAR_6;
}
