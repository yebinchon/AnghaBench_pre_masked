
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute {size_t index; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct adt7462_data {int* pwm_tmin; int* pwm_trange; int lock; struct i2c_client* client; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (size_t) ;
 int VAR_2 ;
 struct adt7462_data* FUNC_1 (struct device*) ;
 int FUNC_2 (long) ;
 int FUNC_3 (struct i2c_client*,int ,int) ;
 scalar_t__ FUNC_4 (char const*,int,long*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 struct sensor_device_attribute* FUNC_7 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_3,
         struct device_attribute *VAR_4,
         const char *VAR_5, size_t VAR_6)
{
 int VAR_7;
 struct sensor_device_attribute *VAR_8 = FUNC_7(VAR_4);
 struct adt7462_data *VAR_9 = FUNC_1(VAR_3);
 struct i2c_client *VAR_10 = VAR_9->client;
 int VAR_11, VAR_12;
 long VAR_13;

 if (FUNC_4(VAR_5, 10, &VAR_13))
  return -VAR_2;


 VAR_11 = (VAR_9->pwm_tmin[VAR_8->index] - 64) * 1000;
 VAR_12 = FUNC_2(VAR_13 - VAR_11);
 if (VAR_12 < 0)
  return VAR_12;

 VAR_7 = VAR_12 << VAR_1;
 VAR_7 |= VAR_9->pwm_trange[VAR_8->index] & VAR_0;

 FUNC_5(&VAR_9->lock);
 VAR_9->pwm_trange[VAR_8->index] = VAR_7;
 FUNC_3(VAR_10, FUNC_0(VAR_8->index),
      VAR_7);
 FUNC_6(&VAR_9->lock);

 return VAR_6;
}
