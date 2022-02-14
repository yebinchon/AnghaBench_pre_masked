
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_type {int groups; } ;
struct device {int groups; int offline_disabled; struct device_type* type; struct class* class; } ;
struct class {int dev_groups; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,int ) ;
 int FUNC_1 (struct device*,int *) ;
 int FUNC_2 (struct device*,int ) ;
 scalar_t__ FUNC_3 (struct device*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_1)
{
 struct class *VAR_2 = VAR_1->class;
 const struct device_type *VAR_3 = VAR_1->type;
 int VAR_4;

 if (VAR_2) {
  VAR_4 = FUNC_0(VAR_1, VAR_2->dev_groups);
  if (VAR_4)
   return VAR_4;
 }

 if (VAR_3) {
  VAR_4 = FUNC_0(VAR_1, VAR_3->groups);
  if (VAR_4)
   goto err_remove_class_groups;
 }

 VAR_4 = FUNC_0(VAR_1, VAR_1->groups);
 if (VAR_4)
  goto err_remove_type_groups;

 if (FUNC_3(VAR_1) && !VAR_1->offline_disabled) {
  VAR_4 = FUNC_1(VAR_1, &VAR_0);
  if (VAR_4)
   goto err_remove_dev_groups;
 }

 return 0;

 err_remove_dev_groups:
 FUNC_2(VAR_1, VAR_1->groups);
 err_remove_type_groups:
 if (VAR_3)
  FUNC_2(VAR_1, VAR_3->groups);
 err_remove_class_groups:
 if (VAR_2)
  FUNC_2(VAR_1, VAR_2->dev_groups);

 return VAR_4;
}
