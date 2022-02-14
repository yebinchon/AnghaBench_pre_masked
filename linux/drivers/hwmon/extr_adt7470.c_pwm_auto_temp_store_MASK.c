
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sensor_device_attribute {size_t index; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct adt7470_data {long* pwm_automatic; int lock; struct i2c_client* client; } ;
typedef long ssize_t ;


 int FUNC_0 (size_t) ;
 long VAR_0 ;
 long FUNC_1 (long) ;
 struct adt7470_data* FUNC_2 (struct device*) ;
 int FUNC_3 (struct i2c_client*,int) ;
 int FUNC_4 (struct i2c_client*,int,int) ;
 scalar_t__ FUNC_5 (char const*,int,long*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 struct sensor_device_attribute* FUNC_8 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_9(struct device *VAR_1,
       struct device_attribute *VAR_2,
       const char *VAR_3, size_t VAR_4)
{
 struct sensor_device_attribute *VAR_5 = FUNC_8(VAR_2);
 struct adt7470_data *VAR_6 = FUNC_2(VAR_1);
 struct i2c_client *VAR_7 = VAR_6->client;
 int VAR_8 = FUNC_0(VAR_5->index);
 long VAR_9;
 u8 VAR_10;

 if (FUNC_5(VAR_3, 10, &VAR_9))
  return -VAR_0;

 VAR_9 = FUNC_1(VAR_9);
 if (VAR_9 < 0)
  return VAR_9;

 FUNC_6(&VAR_6->lock);
 VAR_6->pwm_automatic[VAR_5->index] = VAR_9;
 VAR_10 = FUNC_3(VAR_7, VAR_8);

 if (!(VAR_5->index % 2)) {
  VAR_10 &= 0xF;
  VAR_10 |= (VAR_9 << 4) & 0xF0;
 } else {
  VAR_10 &= 0xF0;
  VAR_10 |= VAR_9 & 0xF;
 }

 FUNC_4(VAR_7, VAR_8, VAR_10);
 FUNC_7(&VAR_6->lock);

 return VAR_4;
}
