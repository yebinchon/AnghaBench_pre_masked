
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smsc47m192_data {int update_lock; int * in_max; struct i2c_client* client; } ;
struct sensor_device_attribute {int index; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (unsigned long,int) ;
 int FUNC_1 (int) ;
 struct smsc47m192_data* FUNC_2 (struct device*) ;
 int FUNC_3 (struct i2c_client*,int ,int ) ;
 int FUNC_4 (char const*,int,unsigned long*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 struct sensor_device_attribute* FUNC_7 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_0, struct device_attribute *VAR_1,
       const char *VAR_2, size_t VAR_3)
{
 struct sensor_device_attribute *VAR_4 = FUNC_7(VAR_1);
 int VAR_5 = VAR_4->index;
 struct smsc47m192_data *VAR_6 = FUNC_2(VAR_0);
 struct i2c_client *VAR_7 = VAR_6->client;
 unsigned long VAR_8;
 int VAR_9;

 VAR_9 = FUNC_4(VAR_2, 10, &VAR_8);
 if (VAR_9)
  return VAR_9;

 FUNC_5(&VAR_6->update_lock);
 VAR_6->in_max[VAR_5] = FUNC_0(VAR_8, VAR_5);
 FUNC_3(VAR_7, FUNC_1(VAR_5),
       VAR_6->in_max[VAR_5]);
 FUNC_6(&VAR_6->update_lock);
 return VAR_3;
}
