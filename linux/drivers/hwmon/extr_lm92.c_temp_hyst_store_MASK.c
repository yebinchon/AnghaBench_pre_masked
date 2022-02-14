
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute {size_t index; } ;
struct lm92_data {int update_lock; int * temp; struct i2c_client* client; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 long FUNC_2 (long,int,int) ;
 struct lm92_data* FUNC_3 (struct device*) ;
 int FUNC_4 (struct i2c_client*,int ,int ) ;
 int FUNC_5 (char const*,int,long*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 size_t VAR_1 ;
 struct sensor_device_attribute* FUNC_8 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_9(struct device *VAR_2,
          struct device_attribute *VAR_3,
          const char *VAR_4, size_t VAR_5)
{
 struct sensor_device_attribute *VAR_6 = FUNC_8(VAR_3);
 struct lm92_data *VAR_7 = FUNC_3(VAR_2);
 struct i2c_client *VAR_8 = VAR_7->client;
 long VAR_9;
 int VAR_10;

 VAR_10 = FUNC_5(VAR_4, 10, &VAR_9);
 if (VAR_10)
  return VAR_10;

 VAR_9 = FUNC_2(VAR_9, -120000, 220000);
 FUNC_6(&VAR_7->update_lock);
 VAR_7->temp[VAR_1] =
  FUNC_1(FUNC_0(VAR_7->temp[VAR_6->index]) - VAR_9);
 FUNC_4(VAR_8, VAR_0,
         VAR_7->temp[VAR_1]);
 FUNC_7(&VAR_7->update_lock);
 return VAR_5;
}
