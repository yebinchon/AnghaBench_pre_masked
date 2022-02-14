
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w83795_data {int hwmon_dev; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct w83795_data* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_1)
{
 struct w83795_data *VAR_2 = FUNC_1(VAR_1);

 FUNC_0(VAR_2->hwmon_dev);
 FUNC_2(&VAR_1->dev, VAR_0);

 return 0;
}
