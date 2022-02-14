
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w83795_data {unsigned long*** sf4_reg; int update_lock; } ;
struct sensor_device_attribute_2 {int nr; int index; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int,int) ;
 struct w83795_data* FUNC_1 (struct i2c_client*) ;
 scalar_t__ FUNC_2 (char const*,int,unsigned long*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct i2c_client* FUNC_5 (struct device*) ;
 struct sensor_device_attribute_2* FUNC_6 (struct device_attribute*) ;
 int FUNC_7 (struct i2c_client*,int ,unsigned long) ;

__attribute__((used)) static ssize_t
FUNC_8(struct device *VAR_2, struct device_attribute *VAR_3,
   const char *VAR_4, size_t VAR_5)
{
 struct i2c_client *VAR_6 = FUNC_5(VAR_2);
 struct w83795_data *VAR_7 = FUNC_1(VAR_6);
 struct sensor_device_attribute_2 *VAR_8 =
     FUNC_6(VAR_3);
 int VAR_9 = VAR_8->nr;
 int VAR_10 = VAR_8->index;
 unsigned long VAR_11;

 if (FUNC_2(VAR_4, 10, &VAR_11) < 0)
  return -VAR_0;
 VAR_11 /= 1000;

 FUNC_3(&VAR_7->update_lock);
 FUNC_7(VAR_6, FUNC_0(VAR_10, VAR_9), VAR_11);
 VAR_7->sf4_reg[VAR_10][VAR_1][VAR_9] = VAR_11;
 FUNC_4(&VAR_7->update_lock);

 return VAR_5;
}
