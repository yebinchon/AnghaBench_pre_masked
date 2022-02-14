
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct amc6821_data {int update_lock; int pwm1; struct i2c_client* client; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (long,int ,int) ;
 struct amc6821_data* FUNC_1 (struct device*) ;
 int FUNC_2 (struct i2c_client*,int ,int ) ;
 int FUNC_3 (char const*,int,long*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_1,
     struct device_attribute *VAR_2, const char *VAR_3,
     size_t VAR_4)
{
 struct amc6821_data *VAR_5 = FUNC_1(VAR_1);
 struct i2c_client *VAR_6 = VAR_5->client;
 long VAR_7;
 int VAR_8 = FUNC_3(VAR_3, 10, &VAR_7);
 if (VAR_8)
  return VAR_8;

 FUNC_4(&VAR_5->update_lock);
 VAR_5->pwm1 = FUNC_0(VAR_7 , 0, 255);
 FUNC_2(VAR_6, VAR_0, VAR_5->pwm1);
 FUNC_5(&VAR_5->update_lock);
 return VAR_4;
}
