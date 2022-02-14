
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int attr; } ;
struct device {int kobj; } ;
struct attribute_container {scalar_t__ grp; struct device_attribute** attrs; } ;


 int FUNC_0 (int) ;
 struct attribute_container* FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*,struct device_attribute*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,scalar_t__) ;

int
FUNC_5(struct device *VAR_0)
{
 struct attribute_container *VAR_1 =
  FUNC_1(VAR_0);
 struct device_attribute **VAR_2 = VAR_1->attrs;
 int VAR_3, VAR_4;

 FUNC_0(VAR_2 && VAR_1->grp);

 if (!VAR_2 && !VAR_1->grp)
  return 0;

 if (VAR_1->grp)
  return FUNC_4(&VAR_0->kobj, VAR_1->grp);

 for (VAR_3 = 0; VAR_2[VAR_3]; VAR_3++) {
  FUNC_3(&VAR_2[VAR_3]->attr);
  VAR_4 = FUNC_2(VAR_0, VAR_2[VAR_3]);
  if (VAR_4)
   return VAR_4;
 }

 return 0;
}
