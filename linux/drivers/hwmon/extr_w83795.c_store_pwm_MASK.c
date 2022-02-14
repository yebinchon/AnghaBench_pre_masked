
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w83795_data {unsigned long** pwm; int update_lock; int clkin; } ;
struct sensor_device_attribute_2 {int nr; int index; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;


 int FUNC_0 (int,int) ;
 unsigned long FUNC_1 (unsigned long,int ,int) ;
 struct w83795_data* FUNC_2 (struct i2c_client*) ;
 scalar_t__ FUNC_3 (char const*,int,unsigned long*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 unsigned long FUNC_6 (unsigned long,int ) ;
 unsigned long FUNC_7 (unsigned long) ;
 struct i2c_client* FUNC_8 (struct device*) ;
 struct sensor_device_attribute_2* FUNC_9 (struct device_attribute*) ;
 int FUNC_10 (struct i2c_client*,int ,unsigned long) ;

__attribute__((used)) static ssize_t
FUNC_11(struct device *VAR_1, struct device_attribute *VAR_2,
   const char *VAR_3, size_t VAR_4)
{
 struct i2c_client *VAR_5 = FUNC_8(VAR_1);
 struct w83795_data *VAR_6 = FUNC_2(VAR_5);
 struct sensor_device_attribute_2 *VAR_7 =
     FUNC_9(VAR_2);
 int VAR_8 = VAR_7->nr;
 int VAR_9 = VAR_7->index;
 unsigned long VAR_10;

 if (FUNC_3(VAR_3, 10, &VAR_10) < 0)
  return -VAR_0;

 FUNC_4(&VAR_6->update_lock);
 switch (VAR_8) {
 case 128:
  VAR_10 = FUNC_7(VAR_10);
  break;
 case 129:
  VAR_10 = FUNC_6(VAR_10, VAR_6->clkin);
  break;
 default:
  VAR_10 = FUNC_1(VAR_10, 0, 0xff);
  break;
 }
 FUNC_10(VAR_5, FUNC_0(VAR_9, VAR_8), VAR_10);
 VAR_6->pwm[VAR_9][VAR_8] = VAR_10;
 FUNC_5(&VAR_6->update_lock);
 return VAR_4;
}
