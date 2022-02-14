
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmbus_data {struct dentry* debugfs; } ;
struct i2c_client {int dummy; } ;
struct dentry {int dummy; } ;


 struct pmbus_data* FUNC_0 (struct i2c_client*) ;

struct dentry *FUNC_1(struct i2c_client *VAR_0)
{
 struct pmbus_data *VAR_1 = FUNC_0(VAR_0);

 return VAR_1->debugfs;
}
