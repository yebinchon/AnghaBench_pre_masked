
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2c_device_id {int dummy; } ;
struct TYPE_2__ {int * platform_data; } ;
struct i2c_client {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct i2c_client*,struct i2c_device_id const*,int *) ;

__attribute__((used)) static int FUNC_1(struct i2c_client *VAR_2,
         const struct i2c_device_id *VAR_3)
{
 VAR_2->dev.platform_data = &VAR_1;
 return FUNC_0(VAR_2, VAR_3, &VAR_0);
}
