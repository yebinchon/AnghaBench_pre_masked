
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2c_client {int dummy; } ;
struct f75375_data {scalar_t__ kind; int update_lock; int * fan_target; int * pwm_enable; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int index; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct i2c_client*,int ,int ) ;
 scalar_t__ VAR_1 ;
 struct f75375_data* FUNC_4 (struct i2c_client*) ;
 int FUNC_5 (char const*,int,unsigned long*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (unsigned long) ;
 struct i2c_client* FUNC_9 (struct device*) ;
 TYPE_1__* FUNC_10 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_11(struct device *VAR_2, struct device_attribute *VAR_3,
  const char *VAR_4, size_t VAR_5)
{
 int VAR_6 = FUNC_10(VAR_3)->index;
 struct i2c_client *VAR_7 = FUNC_9(VAR_2);
 struct f75375_data *VAR_8 = FUNC_4(VAR_7);
 unsigned long VAR_9;
 int VAR_10;

 VAR_10 = FUNC_5(VAR_4, 10, &VAR_9);
 if (VAR_10 < 0)
  return VAR_10;

 if (FUNC_1(VAR_8->pwm_enable[VAR_6]))
  return -VAR_0;
 if (VAR_8->kind == VAR_1 && FUNC_2(VAR_8->pwm_enable[VAR_6]))
  return -VAR_0;

 FUNC_6(&VAR_8->update_lock);
 VAR_8->fan_target[VAR_6] = FUNC_8(VAR_9);
 FUNC_3(VAR_7, FUNC_0(VAR_6), VAR_8->fan_target[VAR_6]);
 FUNC_7(&VAR_8->update_lock);
 return VAR_5;
}
