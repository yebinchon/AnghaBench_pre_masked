
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w83795_data {unsigned long* target_speed; unsigned long tol_speed; int update_lock; } ;
struct sensor_device_attribute_2 {int nr; int index; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 unsigned long FUNC_2 (unsigned long,int ,int) ;
 unsigned long FUNC_3 (unsigned long) ;
 struct w83795_data* FUNC_4 (struct i2c_client*) ;
 scalar_t__ FUNC_5 (char const*,int,unsigned long*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 struct i2c_client* FUNC_8 (struct device*) ;
 struct sensor_device_attribute_2* FUNC_9 (struct device_attribute*) ;
 int FUNC_10 (struct i2c_client*,int ,unsigned long) ;

__attribute__((used)) static ssize_t
FUNC_11(struct device *VAR_2, struct device_attribute *VAR_3,
   const char *VAR_4, size_t VAR_5)
{
 struct i2c_client *VAR_6 = FUNC_8(VAR_2);
 struct w83795_data *VAR_7 = FUNC_4(VAR_6);
 struct sensor_device_attribute_2 *VAR_8 =
     FUNC_9(VAR_3);
 int VAR_9 = VAR_8->nr;
 int VAR_10 = VAR_8->index;
 unsigned long VAR_11;

 if (FUNC_5(VAR_4, 10, &VAR_11) < 0)
  return -VAR_0;

 FUNC_6(&VAR_7->update_lock);
 switch (VAR_9) {
 case 129:
  VAR_11 = FUNC_3(FUNC_2(VAR_11, 0, 0xfff));
  FUNC_10(VAR_6, FUNC_0(VAR_10), VAR_11 >> 4);
  FUNC_10(VAR_6, FUNC_1(VAR_10), (VAR_11 << 4) & 0xf0);
  VAR_7->target_speed[VAR_10] = VAR_11;
  break;
 case 128:
  VAR_11 = FUNC_2(VAR_11, 0, 0x3f);
  FUNC_10(VAR_6, VAR_1, VAR_11);
  VAR_7->tol_speed = VAR_11;
  break;
 }
 FUNC_7(&VAR_7->update_lock);

 return VAR_5;
}
