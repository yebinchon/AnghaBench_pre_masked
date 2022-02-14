
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mcp3021_data {int hwmon_dev; } ;
struct TYPE_3__ {int kobj; } ;
struct i2c_client {TYPE_1__ dev; } ;
struct TYPE_4__ {int attr; } ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (int ) ;
 struct mcp3021_data* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_1)
{
 struct mcp3021_data *VAR_2 = FUNC_1(VAR_1);

 FUNC_0(VAR_2->hwmon_dev);
 FUNC_2(&VAR_1->dev.kobj, &VAR_0.attr);

 return 0;
}
