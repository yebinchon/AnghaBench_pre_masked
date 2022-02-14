
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union device_attr_group_devres {struct attribute_group const** groups; } ;
struct device {int kobj; } ;
struct attribute_group {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,union device_attr_group_devres*) ;
 union device_attr_group_devres* FUNC_1 (int ,int,int ) ;
 int FUNC_2 (union device_attr_group_devres*) ;
 int FUNC_3 (int *,struct attribute_group const**) ;

int FUNC_4(struct device *VAR_3,
      const struct attribute_group **VAR_4)
{
 union device_attr_group_devres *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_1(VAR_2,
         sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_6 = FUNC_3(&VAR_3->kobj, VAR_4);
 if (VAR_6) {
  FUNC_2(VAR_5);
  return VAR_6;
 }

 VAR_5->groups = VAR_4;
 FUNC_0(VAR_3, VAR_5);
 return 0;
}
