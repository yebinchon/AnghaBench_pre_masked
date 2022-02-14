
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u8 ;
struct w83793_data {unsigned long* temp_mode; int update_lock; } ;
struct sensor_device_attribute_2 {int index; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int * VAR_1 ;
 struct w83793_data* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (char const*,int,unsigned long*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct i2c_client* FUNC_4 (struct device*) ;
 struct sensor_device_attribute_2* FUNC_5 (struct device_attribute*) ;
 unsigned long FUNC_6 (struct i2c_client*,int ) ;
 int FUNC_7 (struct i2c_client*,int ,unsigned long) ;

__attribute__((used)) static ssize_t
FUNC_8(struct device *VAR_2, struct device_attribute *VAR_3,
  const char *VAR_4, size_t VAR_5)
{
 struct i2c_client *VAR_6 = FUNC_4(VAR_2);
 struct w83793_data *VAR_7 = FUNC_0(VAR_6);
 struct sensor_device_attribute_2 *VAR_8 =
     FUNC_5(VAR_3);
 int VAR_9 = VAR_8->index;
 u8 VAR_10 = (VAR_9 < 4) ? 0x03 : 0x01;
 u8 VAR_11 = (VAR_9 < 4) ? (2 * VAR_9) : (VAR_9 - 4);
 unsigned long VAR_12;
 int VAR_13;

 VAR_13 = FUNC_1(VAR_4, 10, &VAR_12);
 if (VAR_13)
  return VAR_13;


 if ((VAR_12 == 6) && (VAR_9 < 4)) {
  VAR_12 -= 3;
 } else if ((VAR_12 == 3 && VAR_9 < 4)
  || (VAR_12 == 4 && VAR_9 >= 4)) {

  VAR_12 = !!VAR_12;
 } else {
  return -VAR_0;
 }

 VAR_9 = (VAR_9 < 4) ? 0 : 1;
 FUNC_2(&VAR_7->update_lock);
 VAR_7->temp_mode[VAR_9] =
     FUNC_6(VAR_6, VAR_1[VAR_9]);
 VAR_7->temp_mode[VAR_9] &= ~(VAR_10 << VAR_11);
 VAR_7->temp_mode[VAR_9] |= VAR_12 << VAR_11;
 FUNC_7(VAR_6, VAR_1[VAR_9],
       VAR_7->temp_mode[VAR_9]);
 FUNC_3(&VAR_7->update_lock);

 return VAR_5;
}
