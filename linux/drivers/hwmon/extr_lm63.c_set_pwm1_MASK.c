
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sensor_device_attribute {int index; } ;
struct lm63_data {int config_fan; unsigned long* pwm1; unsigned long pwm1_freq; int update_lock; scalar_t__ pwm_highres; struct i2c_client* client; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 unsigned long FUNC_1 (unsigned long,int ,int) ;
 struct lm63_data* FUNC_2 (struct device*) ;
 int FUNC_3 (struct i2c_client*,int ,unsigned long) ;
 int FUNC_4 (char const*,int,unsigned long*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 struct sensor_device_attribute* FUNC_7 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_2, struct device_attribute *VAR_3,
   const char *VAR_4, size_t VAR_5)
{
 struct sensor_device_attribute *VAR_6 = FUNC_7(VAR_3);
 struct lm63_data *VAR_7 = FUNC_2(VAR_2);
 struct i2c_client *VAR_8 = VAR_7->client;
 int VAR_9 = VAR_6->index;
 unsigned long VAR_10;
 int VAR_11;
 u8 VAR_12;

 if (!(VAR_7->config_fan & 0x20))
  return -VAR_0;

 VAR_11 = FUNC_4(VAR_4, 10, &VAR_10);
 if (VAR_11)
  return VAR_11;

 VAR_12 = VAR_9 ? FUNC_0(VAR_9 - 1) : VAR_1;
 VAR_10 = FUNC_1(VAR_10, 0, 255);

 FUNC_5(&VAR_7->update_lock);
 VAR_7->pwm1[VAR_9] = VAR_7->pwm_highres ? VAR_10 :
   (VAR_10 * VAR_7->pwm1_freq * 2 + 127) / 255;
 FUNC_3(VAR_8, VAR_12, VAR_7->pwm1[VAR_9]);
 FUNC_6(&VAR_7->update_lock);
 return VAR_5;
}
