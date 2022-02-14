
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w83795_data {unsigned long* fan_min; int update_lock; } ;
struct sensor_device_attribute_2 {int index; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 unsigned long FUNC_2 (unsigned long) ;
 struct w83795_data* FUNC_3 (struct i2c_client*) ;
 scalar_t__ FUNC_4 (char const*,int,unsigned long*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 struct i2c_client* FUNC_7 (struct device*) ;
 struct sensor_device_attribute_2* FUNC_8 (struct device_attribute*) ;
 int FUNC_9 (struct i2c_client*,int ) ;
 int FUNC_10 (struct i2c_client*,int ,unsigned long) ;

__attribute__((used)) static ssize_t
FUNC_11(struct device *VAR_1, struct device_attribute *VAR_2,
       const char *VAR_3, size_t VAR_4)
{
 struct sensor_device_attribute_2 *VAR_5 =
     FUNC_8(VAR_2);
 int VAR_6 = VAR_5->index;
 struct i2c_client *VAR_7 = FUNC_7(VAR_1);
 struct w83795_data *VAR_8 = FUNC_3(VAR_7);
 unsigned long VAR_9;

 if (FUNC_4(VAR_3, 10, &VAR_9))
  return -VAR_0;
 VAR_9 = FUNC_2(VAR_9);

 FUNC_5(&VAR_8->update_lock);
 VAR_8->fan_min[VAR_6] = VAR_9;
 FUNC_10(VAR_7, FUNC_0(VAR_6), (VAR_9 >> 4) & 0xff);
 VAR_9 &= 0x0f;
 if (VAR_6 & 1) {
  VAR_9 <<= 4;
  VAR_9 |= FUNC_9(VAR_7, FUNC_1(VAR_6))
         & 0x0f;
 } else {
  VAR_9 |= FUNC_9(VAR_7, FUNC_1(VAR_6))
         & 0xf0;
 }
 FUNC_10(VAR_7, FUNC_1(VAR_6), VAR_9 & 0xff);
 FUNC_6(&VAR_8->update_lock);

 return VAR_4;
}
