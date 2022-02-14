
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2c_client {int dummy; } ;
struct f75375_data {int update_lock; int * pwm; int * pwm_enable; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int index; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (unsigned long,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct i2c_client*,int) ;
 struct f75375_data* FUNC_4 (struct i2c_client*) ;
 int FUNC_5 (char const*,int,unsigned long*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 struct i2c_client* FUNC_8 (struct device*) ;
 TYPE_1__* FUNC_9 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_10(struct device *VAR_1, struct device_attribute *VAR_2,
  const char *VAR_3, size_t VAR_4)
{
 int VAR_5 = FUNC_9(VAR_2)->index;
 struct i2c_client *VAR_6 = FUNC_8(VAR_1);
 struct f75375_data *VAR_7 = FUNC_4(VAR_6);
 unsigned long VAR_8;
 int VAR_9;

 VAR_9 = FUNC_5(VAR_3, 10, &VAR_8);
 if (VAR_9 < 0)
  return VAR_9;

 if (FUNC_0(VAR_7->pwm_enable[VAR_5]) ||
     !FUNC_2(VAR_7->pwm_enable[VAR_5]))
  return -VAR_0;

 FUNC_6(&VAR_7->update_lock);
 VAR_7->pwm[VAR_5] = FUNC_1(VAR_8, 0, 255);
 FUNC_3(VAR_6, VAR_5);
 FUNC_7(&VAR_7->update_lock);
 return VAR_4;
}
