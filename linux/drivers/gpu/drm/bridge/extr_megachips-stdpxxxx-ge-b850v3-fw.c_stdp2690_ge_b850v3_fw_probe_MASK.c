
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct i2c_device_id {int dummy; } ;
struct device {int dummy; } ;
struct i2c_client {struct device dev; } ;
struct TYPE_3__ {struct i2c_client* stdp2690_i2c; } ;


 int FUNC_0 (struct device*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (struct i2c_client*,TYPE_1__*) ;

__attribute__((used)) static int FUNC_2(struct i2c_client *VAR_1,
           const struct i2c_device_id *VAR_2)
{
 struct device *VAR_3 = &VAR_1->dev;

 FUNC_0(VAR_3);

 VAR_0->stdp2690_i2c = VAR_1;
 FUNC_1(VAR_1, VAR_0);

 return 0;
}
