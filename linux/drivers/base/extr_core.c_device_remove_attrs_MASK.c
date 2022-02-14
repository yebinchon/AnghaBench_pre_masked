
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_type {int groups; } ;
struct device {int groups; struct device_type* type; struct class* class; } ;
struct class {int dev_groups; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,int *) ;
 int FUNC_1 (struct device*,int ) ;

__attribute__((used)) static void FUNC_2(struct device *VAR_1)
{
 struct class *VAR_2 = VAR_1->class;
 const struct device_type *VAR_3 = VAR_1->type;

 FUNC_0(VAR_1, &VAR_0);
 FUNC_1(VAR_1, VAR_1->groups);

 if (VAR_3)
  FUNC_1(VAR_1, VAR_3->groups);

 if (VAR_2)
  FUNC_1(VAR_1, VAR_2->dev_groups);
}
