
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pmbus_samples_reg {TYPE_1__* attr; int page; } ;
struct pmbus_data {int update_lock; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int parent; } ;
typedef size_t ssize_t ;
struct TYPE_2__ {int reg; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct i2c_client*,int ,int ,long) ;
 struct pmbus_data* FUNC_1 (struct i2c_client*) ;
 scalar_t__ FUNC_2 (char const*,int ,long*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct i2c_client* FUNC_5 (int ) ;
 struct pmbus_samples_reg* FUNC_6 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_1,
     struct device_attribute *VAR_2,
     const char *VAR_3, size_t VAR_4)
{
 int VAR_5;
 long VAR_6;
 struct i2c_client *VAR_7 = FUNC_5(VAR_1->parent);
 struct pmbus_samples_reg *VAR_8 = FUNC_6(VAR_2);
 struct pmbus_data *VAR_9 = FUNC_1(VAR_7);

 if (FUNC_2(VAR_3, 0, &VAR_6) < 0)
  return -VAR_0;

 FUNC_3(&VAR_9->update_lock);
 VAR_5 = FUNC_0(VAR_7, VAR_8->page, VAR_8->attr->reg, VAR_6);
 FUNC_4(&VAR_9->update_lock);

 return VAR_5 ? : VAR_4;
}
