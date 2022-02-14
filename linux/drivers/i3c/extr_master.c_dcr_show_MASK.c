
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dcr; } ;
struct i3c_dev_desc {TYPE_1__ info; } ;
struct i3c_bus {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct i3c_bus* FUNC_0 (struct device*) ;
 struct i3c_dev_desc* FUNC_1 (struct device*) ;
 int FUNC_2 (struct i3c_bus*) ;
 int FUNC_3 (struct i3c_bus*) ;
 int FUNC_4 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_0,
   struct device_attribute *VAR_1,
   char *VAR_2)
{
 struct i3c_bus *VAR_3 = FUNC_0(VAR_0);
 struct i3c_dev_desc *VAR_4;
 ssize_t VAR_5;

 FUNC_2(VAR_3);
 VAR_4 = FUNC_1(VAR_0);
 VAR_5 = FUNC_4(VAR_2, "%x\n", VAR_4->info.dcr);
 FUNC_3(VAR_3);

 return VAR_5;
}
