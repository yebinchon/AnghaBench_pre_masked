
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct w83795_data {int* temp_src; int update_lock; } ;
struct sensor_device_attribute_2 {int index; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int FUNC_0 (size_t) ;
 scalar_t__ FUNC_1 (char const*,int,unsigned long*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct i2c_client* FUNC_4 (struct device*) ;
 struct sensor_device_attribute_2* FUNC_5 (struct device_attribute*) ;
 unsigned long** VAR_1 ;
 struct w83795_data* FUNC_6 (struct device*) ;
 int FUNC_7 (struct i2c_client*,int ,int) ;

__attribute__((used)) static ssize_t
FUNC_8(struct device *VAR_2, struct device_attribute *VAR_3,
   const char *VAR_4, size_t VAR_5)
{
 struct i2c_client *VAR_6 = FUNC_4(VAR_2);
 struct w83795_data *VAR_7 = FUNC_6(VAR_2);
 struct sensor_device_attribute_2 *VAR_8 =
     FUNC_5(VAR_3);
 int VAR_9 = VAR_8->index;
 int VAR_10;
 unsigned long VAR_11;
 u8 VAR_12 = VAR_9 / 2;

 if (FUNC_1(VAR_4, 10, &VAR_11) < 0 ||
     VAR_11 < 1 || VAR_11 > 14)
  return -VAR_0;


 for (VAR_10 = 0; VAR_10 < 4; VAR_10++) {
  if (VAR_1[VAR_10][VAR_9] == VAR_11 - 1)
   break;
 }
 if (VAR_10 == 4)
  return -VAR_0;

 FUNC_2(&VAR_7->update_lock);
 if (VAR_9 & 1) {
  VAR_10 <<= 4;
  VAR_7->temp_src[VAR_12] &= 0x0f;
 } else {
  VAR_7->temp_src[VAR_12] &= 0xf0;
 }
 VAR_7->temp_src[VAR_12] |= VAR_10;
 FUNC_7(VAR_6, FUNC_0(VAR_12), VAR_7->temp_src[VAR_12]);
 FUNC_3(&VAR_7->update_lock);

 return VAR_5;
}
