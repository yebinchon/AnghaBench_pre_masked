
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute {int index; } ;
struct lm77_data {long* temp; int update_lock; struct i2c_client* client; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (long) ;
 long FUNC_1 (long,int ,int ) ;
 struct lm77_data* FUNC_2 (struct device*) ;
 int FUNC_3 (char const*,int,long*) ;
 int FUNC_4 (struct i2c_client*,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int * VAR_2 ;
 struct sensor_device_attribute* FUNC_7 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_3,
     struct device_attribute *VAR_4, const char *VAR_5,
     size_t VAR_6)
{
 struct sensor_device_attribute *VAR_7 = FUNC_7(VAR_4);
 struct lm77_data *VAR_8 = FUNC_2(VAR_3);
 struct i2c_client *VAR_9 = VAR_8->client;
 int VAR_10 = VAR_7->index;
 long VAR_11;
 int VAR_12;

 VAR_12 = FUNC_3(VAR_5, 10, &VAR_11);
 if (VAR_12)
  return VAR_12;

 VAR_11 = FUNC_1(VAR_11, VAR_1, VAR_0);
 FUNC_5(&VAR_8->update_lock);
 VAR_8->temp[VAR_10] = VAR_11;
 FUNC_4(VAR_9, VAR_2[VAR_10], FUNC_0(VAR_11));
 FUNC_6(&VAR_8->update_lock);
 return VAR_6;
}
