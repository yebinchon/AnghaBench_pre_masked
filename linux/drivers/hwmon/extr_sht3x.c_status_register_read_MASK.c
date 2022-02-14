
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sht3x_data {struct i2c_client* client; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;


 struct sht3x_data* FUNC_0 (struct device*) ;
 int VAR_0 ;
 int FUNC_1 (struct i2c_client*,struct sht3x_data*,int ,char*,int,int ) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_1,
    struct device_attribute *VAR_2,
    char *VAR_3, int VAR_4)
{
 int VAR_5;
 struct sht3x_data *VAR_6 = FUNC_0(VAR_1);
 struct i2c_client *VAR_7 = VAR_6->client;

 VAR_5 = FUNC_1(VAR_7, VAR_6, VAR_0,
          VAR_3, VAR_4, 0);

 return VAR_5;
}
