
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kobject {int dummy; } ;
struct TYPE_2__ {struct kobject* parent; } ;
struct device {int release; struct attribute_group const** groups; TYPE_1__ kobj; } ;
struct bus_type {struct device* dev_root; int name; } ;
struct attribute_group {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bus_type*) ;
 int FUNC_1 (struct bus_type*) ;
 int FUNC_2 (struct device*,char*,int ) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*) ;
 struct device* FUNC_5 (int,int ) ;
 int FUNC_6 (struct device*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_7(struct bus_type *VAR_3,
      const struct attribute_group **VAR_4,
      struct kobject *VAR_5)
{
 struct device *VAR_6;
 int VAR_7;

 VAR_7 = FUNC_0(VAR_3);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_6 = FUNC_5(sizeof(struct device), VAR_1);
 if (!VAR_6) {
  VAR_7 = -VAR_0;
  goto err_dev;
 }

 VAR_7 = FUNC_2(VAR_6, "%s", VAR_3->name);
 if (VAR_7 < 0)
  goto err_name;

 VAR_6->kobj.parent = VAR_5;
 VAR_6->groups = VAR_4;
 VAR_6->release = VAR_2;

 VAR_7 = FUNC_3(VAR_6);
 if (VAR_7 < 0)
  goto err_dev_reg;

 VAR_3->dev_root = VAR_6;
 return 0;

err_dev_reg:
 FUNC_6(VAR_6);
 VAR_6 = ((void*)0);
err_name:
 FUNC_4(VAR_6);
err_dev:
 FUNC_1(VAR_3);
 return VAR_7;
}
