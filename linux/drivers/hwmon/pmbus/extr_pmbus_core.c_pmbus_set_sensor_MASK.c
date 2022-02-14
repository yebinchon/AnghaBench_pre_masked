
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pmbus_sensor {int data; int reg; int page; } ;
struct pmbus_data {int update_lock; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int parent; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct i2c_client*,int ,int ,int ) ;
 struct pmbus_data* FUNC_1 (struct i2c_client*) ;
 scalar_t__ FUNC_2 (char const*,int,long*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct pmbus_data*,struct pmbus_sensor*,long) ;
 struct i2c_client* FUNC_6 (int ) ;
 struct pmbus_sensor* FUNC_7 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_1,
    struct device_attribute *VAR_2,
    const char *VAR_3, size_t VAR_4)
{
 struct i2c_client *VAR_5 = FUNC_6(VAR_1->parent);
 struct pmbus_data *VAR_6 = FUNC_1(VAR_5);
 struct pmbus_sensor *VAR_7 = FUNC_7(VAR_2);
 ssize_t VAR_8 = VAR_4;
 long VAR_9 = 0;
 int VAR_10;
 u16 VAR_11;

 if (FUNC_2(VAR_3, 10, &VAR_9) < 0)
  return -VAR_0;

 FUNC_3(&VAR_6->update_lock);
 VAR_11 = FUNC_5(VAR_6, VAR_7, VAR_9);
 VAR_10 = FUNC_0(VAR_5, VAR_7->page, VAR_7->reg, VAR_11);
 if (VAR_10 < 0)
  VAR_8 = VAR_10;
 else
  VAR_7->data = VAR_11;
 FUNC_4(&VAR_6->update_lock);
 return VAR_8;
}
