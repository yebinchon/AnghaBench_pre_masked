
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct w83791d_data {int hwmon_dev; } ;
struct TYPE_2__ {int kobj; } ;
struct i2c_client {TYPE_1__ dev; } ;


 int FUNC_0 (int ) ;
 struct w83791d_data* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (int *,int *) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_1)
{
 struct w83791d_data *VAR_2 = FUNC_1(VAR_1);

 FUNC_0(VAR_2->hwmon_dev);
 FUNC_2(&VAR_1->dev.kobj, &VAR_0);

 return 0;
}
