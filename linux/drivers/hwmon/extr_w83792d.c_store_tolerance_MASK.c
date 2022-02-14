
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct w83792d_data {int* tolerance; int update_lock; } ;
struct sensor_device_attribute {int index; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int * VAR_0 ;
 int FUNC_0 (unsigned long,int ,int) ;
 struct w83792d_data* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (char const*,int,unsigned long*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct i2c_client* FUNC_5 (struct device*) ;
 struct sensor_device_attribute* FUNC_6 (struct device_attribute*) ;
 int FUNC_7 (struct i2c_client*,int ) ;
 int FUNC_8 (struct i2c_client*,int ,int) ;

__attribute__((used)) static ssize_t
FUNC_9(struct device *VAR_1, struct device_attribute *VAR_2,
  const char *VAR_3, size_t VAR_4)
{
 struct sensor_device_attribute *VAR_5 = FUNC_6(VAR_2);
 int VAR_6 = VAR_5->index - 1;
 struct i2c_client *VAR_7 = FUNC_5(VAR_1);
 struct w83792d_data *VAR_8 = FUNC_1(VAR_7);
 u8 VAR_9, VAR_10;
 unsigned long VAR_11;
 int VAR_12;

 VAR_12 = FUNC_2(VAR_3, 10, &VAR_11);
 if (VAR_12)
  return VAR_12;

 FUNC_3(&VAR_8->update_lock);
 VAR_10 = FUNC_7(VAR_7,
  VAR_0[VAR_6]) & ((VAR_6 == 1) ? 0x0f : 0xf0);
 VAR_9 = FUNC_0(VAR_11, 0, 15);
 VAR_9 &= 0x0f;
 VAR_8->tolerance[VAR_6] = VAR_9;
 if (VAR_6 == 1)
  VAR_9 <<= 4;
 FUNC_8(VAR_7, VAR_0[VAR_6],
  VAR_10 | VAR_9);
 FUNC_4(&VAR_8->update_lock);

 return VAR_4;
}
