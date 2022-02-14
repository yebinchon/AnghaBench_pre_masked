
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2c_driver {int (* command ) (struct i2c_client*,int ,int ) ;} ;
struct i2c_cmd_arg {int arg; int cmd; } ;
struct TYPE_2__ {int driver; } ;
struct i2c_client {TYPE_1__ dev; } ;
struct device {int dummy; } ;


 struct i2c_client* FUNC_0 (struct device*) ;
 int FUNC_1 (struct i2c_client*,int ,int ) ;
 struct i2c_driver* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0, void *VAR_1)
{
 struct i2c_client *VAR_2 = FUNC_0(VAR_0);
 struct i2c_cmd_arg *VAR_3 = VAR_1;
 struct i2c_driver *VAR_4;

 if (!VAR_2 || !VAR_2->dev.driver)
  return 0;

 VAR_4 = FUNC_2(VAR_2->dev.driver);
 if (VAR_4->command)
  VAR_4->command(VAR_2, VAR_3->cmd, VAR_3->arg);
 return 0;
}
