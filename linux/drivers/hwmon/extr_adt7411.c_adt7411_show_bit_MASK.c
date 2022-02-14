
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute_2 {int nr; int index; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct adt7411_data {struct i2c_client* client; } ;
typedef int ssize_t ;


 struct adt7411_data* FUNC_0 (struct device*) ;
 int FUNC_1 (struct i2c_client*,int ) ;
 int FUNC_2 (char*,char*,int) ;
 struct sensor_device_attribute_2* FUNC_3 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_0,
    struct device_attribute *VAR_1, char *VAR_2)
{
 struct sensor_device_attribute_2 *VAR_3 = FUNC_3(VAR_1);
 struct adt7411_data *VAR_4 = FUNC_0(VAR_0);
 struct i2c_client *VAR_5 = VAR_4->client;
 int VAR_6 = FUNC_1(VAR_5, VAR_3->index);

 return VAR_6 < 0 ? VAR_6 : FUNC_2(VAR_2, "%u\n", !!(VAR_6 & VAR_3->nr));
}
