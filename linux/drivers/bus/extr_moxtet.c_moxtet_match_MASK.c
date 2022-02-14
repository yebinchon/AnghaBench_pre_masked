
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct moxtet_driver {int* id_table; } ;
struct moxtet_device {int const id; } ;
struct device_driver {int dummy; } ;
struct device {int dummy; } ;
typedef enum turris_mox_module_id { ____Placeholder_turris_mox_module_id } turris_mox_module_id ;


 scalar_t__ FUNC_0 (struct device*,struct device_driver*) ;
 struct moxtet_device* FUNC_1 (struct device*) ;
 struct moxtet_driver* FUNC_2 (struct device_driver*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0, struct device_driver *VAR_1)
{
 struct moxtet_device *VAR_2 = FUNC_1(VAR_0);
 struct moxtet_driver *VAR_3 = FUNC_2(VAR_1);
 const enum turris_mox_module_id *VAR_4;

 if (FUNC_0(VAR_0, VAR_1))
  return 1;

 if (!VAR_3->id_table)
  return 0;

 for (VAR_4 = VAR_3->id_table; *VAR_4; ++VAR_4)
  if (*VAR_4 == VAR_2->id)
   return 1;

 return 0;
}
