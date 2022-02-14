
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w83781d_data {int * lm75; int hwmon_dev; } ;
struct device {int dummy; } ;
struct i2c_client {struct device dev; } ;


 int FUNC_0 (int ) ;
 struct w83781d_data* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct device*) ;

__attribute__((used)) static int
FUNC_4(struct i2c_client *VAR_0)
{
 struct w83781d_data *VAR_1 = FUNC_1(VAR_0);
 struct device *VAR_2 = &VAR_0->dev;

 FUNC_0(VAR_1->hwmon_dev);
 FUNC_3(VAR_2);

 FUNC_2(VAR_1->lm75[0]);
 FUNC_2(VAR_1->lm75[1]);

 return 0;
}
