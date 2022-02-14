
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_driver {int probe_type; int owner; int name; } ;




 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

bool FUNC_2(struct device_driver *VAR_0)
{
 switch (VAR_0->probe_type) {
 case 128:
  return 1;

 case 129:
  return 0;

 default:
  if (FUNC_0(VAR_0->name))
   return 1;

  if (FUNC_1(VAR_0->owner))
   return 1;

  return 0;
 }
}
