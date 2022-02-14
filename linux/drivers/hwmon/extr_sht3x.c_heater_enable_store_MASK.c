
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sht3x_data {int i2c_lock; struct i2c_client* client; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct sht3x_data* FUNC_0 (struct device*) ;
 int FUNC_1 (struct i2c_client*,char*,int ) ;
 int FUNC_2 (char const*,int*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_3,
       struct device_attribute *VAR_4,
       const char *VAR_5,
       size_t VAR_6)
{
 struct sht3x_data *VAR_7 = FUNC_0(VAR_3);
 struct i2c_client *VAR_8 = VAR_7->client;
 int VAR_9;
 bool VAR_10;

 VAR_9 = FUNC_2(VAR_5, &VAR_10);
 if (VAR_9)
  return VAR_9;

 FUNC_3(&VAR_7->i2c_lock);

 if (VAR_10)
  VAR_9 = FUNC_1(VAR_8, (char *)&VAR_2,
          VAR_0);
 else
  VAR_9 = FUNC_1(VAR_8, (char *)&VAR_1,
          VAR_0);

 FUNC_4(&VAR_7->i2c_lock);

 return VAR_9;
}
