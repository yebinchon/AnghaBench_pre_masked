
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcf8591_data {int hwmon_dev; } ;
struct TYPE_2__ {int kobj; } ;
struct i2c_client {TYPE_1__ dev; } ;


 int FUNC_0 (int ) ;
 struct pcf8591_data* FUNC_1 (struct i2c_client*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_2)
{
 struct pcf8591_data *VAR_3 = FUNC_1(VAR_2);

 FUNC_0(VAR_3->hwmon_dev);
 FUNC_2(&VAR_2->dev.kobj, &VAR_1);
 FUNC_2(&VAR_2->dev.kobj, &VAR_0);
 return 0;
}
