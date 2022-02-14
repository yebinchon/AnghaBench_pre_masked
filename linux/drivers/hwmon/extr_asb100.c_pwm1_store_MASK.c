
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct asb100_data {int pwm; int update_lock; } ;
typedef int ssize_t ;


 int FUNC_0 (unsigned long) ;
 int VAR_0 ;
 int FUNC_1 (struct i2c_client*,int ,int) ;
 struct asb100_data* FUNC_2 (struct i2c_client*) ;
 int FUNC_3 (char const*,int,unsigned long*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct i2c_client* FUNC_6 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_1, struct device_attribute *VAR_2,
     const char *VAR_3, size_t VAR_4)
{
 struct i2c_client *VAR_5 = FUNC_6(VAR_1);
 struct asb100_data *VAR_6 = FUNC_2(VAR_5);
 unsigned long VAR_7;
 int VAR_8;

 VAR_8 = FUNC_3(VAR_3, 10, &VAR_7);
 if (VAR_8)
  return VAR_8;

 FUNC_4(&VAR_6->update_lock);
 VAR_6->pwm &= 0x80;
 VAR_6->pwm |= (0x0f & FUNC_0(VAR_7));
 FUNC_1(VAR_5, VAR_0, VAR_6->pwm);
 FUNC_5(&VAR_6->update_lock);
 return VAR_4;
}
