
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute {int index; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct adm1026_data {int update_lock; int * temp_min; struct i2c_client* client; } ;
typedef int ssize_t ;


 int * VAR_0 ;
 int FUNC_0 (long) ;
 int FUNC_1 (struct i2c_client*,int ,int ) ;
 struct adm1026_data* FUNC_2 (struct device*) ;
 int FUNC_3 (char const*,int,long*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct sensor_device_attribute* FUNC_6 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_1,
         struct device_attribute *VAR_2, const char *VAR_3,
         size_t VAR_4)
{
 struct sensor_device_attribute *VAR_5 = FUNC_6(VAR_2);
 int VAR_6 = VAR_5->index;
 struct adm1026_data *VAR_7 = FUNC_2(VAR_1);
 struct i2c_client *VAR_8 = VAR_7->client;
 long VAR_9;
 int VAR_10;

 VAR_10 = FUNC_3(VAR_3, 10, &VAR_9);
 if (VAR_10)
  return VAR_10;

 FUNC_4(&VAR_7->update_lock);
 VAR_7->temp_min[VAR_6] = FUNC_0(VAR_9);
 FUNC_1(VAR_8, VAR_0[VAR_6],
  VAR_7->temp_min[VAR_6]);
 FUNC_5(&VAR_7->update_lock);
 return VAR_4;
}
