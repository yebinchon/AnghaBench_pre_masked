
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pmbus_samples_reg {TYPE_1__* attr; int page; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int parent; } ;
typedef int ssize_t ;
struct TYPE_2__ {int reg; } ;


 int VAR_0 ;
 int FUNC_0 (struct i2c_client*,int ,int ) ;
 int FUNC_1 (char*,int ,char*,int) ;
 struct i2c_client* FUNC_2 (int ) ;
 struct pmbus_samples_reg* FUNC_3 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1,
      struct device_attribute *VAR_2, char *VAR_3)
{
 int VAR_4;
 struct i2c_client *VAR_5 = FUNC_2(VAR_1->parent);
 struct pmbus_samples_reg *VAR_6 = FUNC_3(VAR_2);

 VAR_4 = FUNC_0(VAR_5, VAR_6->page, VAR_6->attr->reg);
 if (VAR_4 < 0)
  return VAR_4;

 return FUNC_1(VAR_3, VAR_0, "%d\n", VAR_4);
}
