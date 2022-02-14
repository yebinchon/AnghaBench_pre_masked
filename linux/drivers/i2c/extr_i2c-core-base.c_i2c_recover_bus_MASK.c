
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2c_adapter {TYPE_1__* bus_recovery_info; int dev; } ;
struct TYPE_2__ {int (* recover_bus ) (struct i2c_adapter*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct i2c_adapter*) ;

int FUNC_2(struct i2c_adapter *VAR_1)
{
 if (!VAR_1->bus_recovery_info)
  return -VAR_0;

 FUNC_0(&VAR_1->dev, "Trying i2c bus recovery\n");
 return VAR_1->bus_recovery_info->recover_bus(VAR_1);
}
