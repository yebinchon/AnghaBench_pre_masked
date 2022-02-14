
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dev; } ;
struct dme1737_data {int hwmon_dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 struct dme1737_data* FUNC_2 (struct i2c_client*) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_0)
{
 struct dme1737_data *VAR_1 = FUNC_2(VAR_0);

 FUNC_1(VAR_1->hwmon_dev);
 FUNC_0(&VAR_0->dev);

 return 0;
}
