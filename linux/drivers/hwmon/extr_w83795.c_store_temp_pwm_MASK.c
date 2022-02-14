
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct w83795_data {unsigned long** pwm_temp; int update_lock; } ;
struct sensor_device_attribute_2 {int nr; int index; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;




 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 unsigned long FUNC_3 (unsigned long,int ,int) ;
 struct w83795_data* FUNC_4 (struct i2c_client*) ;
 scalar_t__ FUNC_5 (char const*,int,unsigned long*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 struct i2c_client* FUNC_8 (struct device*) ;
 struct sensor_device_attribute_2* FUNC_9 (struct device_attribute*) ;
 int FUNC_10 (struct i2c_client*,int ) ;
 int FUNC_11 (struct i2c_client*,int ,int) ;

__attribute__((used)) static ssize_t
FUNC_12(struct device *VAR_1, struct device_attribute *VAR_2,
   const char *VAR_3, size_t VAR_4)
{
 struct i2c_client *VAR_5 = FUNC_8(VAR_1);
 struct w83795_data *VAR_6 = FUNC_4(VAR_5);
 struct sensor_device_attribute_2 *VAR_7 =
     FUNC_9(VAR_2);
 int VAR_8 = VAR_7->nr;
 int VAR_9 = VAR_7->index;
 unsigned long VAR_10;
 u8 VAR_11;

 if (FUNC_5(VAR_3, 10, &VAR_10) < 0)
  return -VAR_0;
 VAR_10 /= 1000;

 FUNC_6(&VAR_6->update_lock);
 switch (VAR_8) {
 case 128:
  VAR_10 = FUNC_3(VAR_10, 0, 0x7f);
  FUNC_11(VAR_5, FUNC_2(VAR_9), VAR_10);
  break;
 case 131:
  VAR_10 = FUNC_3(VAR_10, 0, 0x7f);
  FUNC_11(VAR_5, FUNC_0(VAR_9), VAR_10);
  break;
 case 130:
  VAR_10 = FUNC_3(VAR_10, 0, 0x0f);
  VAR_11 = FUNC_10(VAR_5, FUNC_1(VAR_9));
  VAR_11 &= 0x0f;
  VAR_11 |= (VAR_10 << 4) & 0xf0;
  FUNC_11(VAR_5, FUNC_1(VAR_9), VAR_11);
  break;
 case 129:
  VAR_10 = FUNC_3(VAR_10, 0, 0x0f);
  VAR_11 = FUNC_10(VAR_5, FUNC_1(VAR_9));
  VAR_11 &= 0xf0;
  VAR_11 |= VAR_10 & 0x0f;
  FUNC_11(VAR_5, FUNC_1(VAR_9), VAR_11);
  break;
 }
 VAR_6->pwm_temp[VAR_9][VAR_8] = VAR_10;
 FUNC_7(&VAR_6->update_lock);

 return VAR_4;
}
