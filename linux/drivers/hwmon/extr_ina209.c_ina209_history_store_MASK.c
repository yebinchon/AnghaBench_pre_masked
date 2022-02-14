
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sensor_device_attribute {int index; } ;
struct ina209_data {int valid; int update_lock; struct i2c_client* client; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (int *) ;
 struct ina209_data* FUNC_1 (struct device*) ;
 int FUNC_2 (struct i2c_client*,int ,int) ;
 int * VAR_0 ;
 int FUNC_3 (char const*,int,long*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct sensor_device_attribute* FUNC_6 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_1,
        struct device_attribute *VAR_2,
        const char *VAR_3, size_t VAR_4)
{
 struct sensor_device_attribute *VAR_5 = FUNC_6(VAR_2);
 struct ina209_data *VAR_6 = FUNC_1(VAR_1);
 struct i2c_client *VAR_7 = VAR_6->client;
 u32 VAR_8 = VAR_5->index;
 long VAR_9;
 int VAR_10, VAR_11;

 VAR_11 = FUNC_3(VAR_3, 10, &VAR_9);
 if (VAR_11 < 0)
  return VAR_11;

 FUNC_4(&VAR_6->update_lock);
 for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_0); VAR_10++) {
  if (VAR_8 & (1 << VAR_10))
   FUNC_2(VAR_7,
     VAR_0[VAR_10], 1);
 }
 VAR_6->valid = 0;
 FUNC_5(&VAR_6->update_lock);
 return VAR_4;
}
