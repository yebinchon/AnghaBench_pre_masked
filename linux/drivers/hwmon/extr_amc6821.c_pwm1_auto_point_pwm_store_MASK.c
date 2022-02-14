
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dev; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct amc6821_data {int* pwm1_auto_point_pwm; int update_lock; scalar_t__ valid; int temp2_auto_point_temp; int temp1_auto_point_temp; struct i2c_client* client; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (long,int ,int) ;
 int FUNC_1 (int *,char*) ;
 struct amc6821_data* FUNC_2 (struct device*) ;
 scalar_t__ FUNC_3 (struct i2c_client*,int ,int) ;
 int FUNC_4 (char const*,int,long*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (struct i2c_client*,int ,int,int ) ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_4,
      struct device_attribute *VAR_5,
      const char *VAR_6, size_t VAR_7)
{
 struct amc6821_data *VAR_8 = FUNC_2(VAR_4);
 struct i2c_client *VAR_9 = VAR_8->client;
 int VAR_10;
 long VAR_11;
 int VAR_12 = FUNC_4(VAR_6, 10, &VAR_11);
 if (VAR_12)
  return VAR_12;

 FUNC_5(&VAR_8->update_lock);
 VAR_8->pwm1_auto_point_pwm[1] = FUNC_0(VAR_11, 0, 254);
 if (FUNC_3(VAR_9, VAR_0,
   VAR_8->pwm1_auto_point_pwm[1])) {
  FUNC_1(&VAR_9->dev, "Register write error, aborting.\n");
  VAR_7 = -VAR_3;
  goto EXIT;
 }
 VAR_10 = VAR_8->pwm1_auto_point_pwm[2] - VAR_8->pwm1_auto_point_pwm[1];
 if (FUNC_7(VAR_9, VAR_1, VAR_10,
   VAR_8->temp1_auto_point_temp)) {
  VAR_7 = -VAR_3;
  goto EXIT;
 }
 if (FUNC_7(VAR_9, VAR_2, VAR_10,
   VAR_8->temp2_auto_point_temp)) {
  VAR_7 = -VAR_3;
  goto EXIT;
 }

EXIT:
 VAR_8->valid = 0;
 FUNC_6(&VAR_8->update_lock);
 return VAR_7;
}
