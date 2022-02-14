
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2c_adapter {TYPE_1__* bus_recovery_info; } ;
struct TYPE_2__ {int scl_gpiod; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct i2c_adapter *VAR_0)
{
 return FUNC_0(VAR_0->bus_recovery_info->scl_gpiod);
}
