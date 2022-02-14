
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_adapter {int dummy; } ;
struct i3c_master_controller {struct i2c_adapter i2c; } ;



__attribute__((used)) static struct i2c_adapter *
FUNC_0(struct i3c_master_controller *VAR_0)
{
 return &VAR_0->i2c;
}
