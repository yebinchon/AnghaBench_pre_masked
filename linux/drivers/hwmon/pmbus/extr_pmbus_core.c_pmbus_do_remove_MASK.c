
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int attrs; } ;
struct pmbus_data {TYPE_1__ group; int hwmon_dev; int debugfs; } ;
struct i2c_client {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct pmbus_data* FUNC_2 (struct i2c_client*) ;
 int FUNC_3 (int ) ;

int FUNC_4(struct i2c_client *VAR_0)
{
 struct pmbus_data *VAR_1 = FUNC_2(VAR_0);

 FUNC_0(VAR_1->debugfs);

 FUNC_1(VAR_1->hwmon_dev);
 FUNC_3(VAR_1->group.attrs);
 return 0;
}
