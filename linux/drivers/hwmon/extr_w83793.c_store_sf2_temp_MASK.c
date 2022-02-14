
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w83793_data {int** sf2_temp; int update_lock; } ;
struct sensor_device_attribute_2 {int nr; int index; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 long FUNC_0 (long,int ,int) ;
 int FUNC_1 (int,int) ;
 struct w83793_data* FUNC_2 (struct i2c_client*) ;
 int FUNC_3 (char const*,int,long*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct i2c_client* FUNC_6 (struct device*) ;
 struct sensor_device_attribute_2* FUNC_7 (struct device_attribute*) ;
 int FUNC_8 (struct i2c_client*,int ) ;
 int FUNC_9 (struct i2c_client*,int ,long) ;

__attribute__((used)) static ssize_t
FUNC_10(struct device *VAR_0, struct device_attribute *VAR_1,
        const char *VAR_2, size_t VAR_3)
{
 struct i2c_client *VAR_4 = FUNC_6(VAR_0);
 struct w83793_data *VAR_5 = FUNC_2(VAR_4);
 struct sensor_device_attribute_2 *VAR_6 =
     FUNC_7(VAR_1);
 int VAR_7 = VAR_6->nr;
 int VAR_8 = VAR_6->index;
 long VAR_9;
 int VAR_10;

 VAR_10 = FUNC_3(VAR_2, 10, &VAR_9);
 if (VAR_10)
  return VAR_10;
 VAR_9 = FUNC_0(VAR_9, 0, 0x7f);

 FUNC_4(&VAR_5->update_lock);
 VAR_5->sf2_temp[VAR_8][VAR_7] =
     FUNC_8(VAR_4, FUNC_1(VAR_8, VAR_7)) & 0x80;
 VAR_5->sf2_temp[VAR_8][VAR_7] |= VAR_9;
 FUNC_9(VAR_4, FUNC_1(VAR_8, VAR_7),
          VAR_5->sf2_temp[VAR_8][VAR_7]);
 FUNC_5(&VAR_5->update_lock);
 return VAR_3;
}
