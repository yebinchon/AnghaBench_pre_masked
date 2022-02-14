
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w83l786ng_data {int update_lock; int ** temp; struct i2c_client* client; } ;
struct sensor_device_attribute_2 {int nr; int index; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (long) ;
 int ** VAR_0 ;
 struct w83l786ng_data* FUNC_1 (struct device*) ;
 int FUNC_2 (char const*,int,long*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct sensor_device_attribute_2* FUNC_5 (struct device_attribute*) ;
 int FUNC_6 (struct i2c_client*,int ,int ) ;

__attribute__((used)) static ssize_t
FUNC_7(struct device *VAR_1, struct device_attribute *VAR_2,
    const char *VAR_3, size_t VAR_4)
{
 struct sensor_device_attribute_2 *VAR_5 =
     FUNC_5(VAR_2);
 int VAR_6 = VAR_5->nr;
 int VAR_7 = VAR_5->index;
 struct w83l786ng_data *VAR_8 = FUNC_1(VAR_1);
 struct i2c_client *VAR_9 = VAR_8->client;
 long VAR_10;
 int VAR_11;

 VAR_11 = FUNC_2(VAR_3, 10, &VAR_10);
 if (VAR_11)
  return VAR_11;

 FUNC_3(&VAR_8->update_lock);
 VAR_8->temp[VAR_6][VAR_7] = FUNC_0(VAR_10);
 FUNC_6(VAR_9, VAR_0[VAR_6][VAR_7],
         VAR_8->temp[VAR_6][VAR_7]);
 FUNC_4(&VAR_8->update_lock);

 return VAR_4;
}
