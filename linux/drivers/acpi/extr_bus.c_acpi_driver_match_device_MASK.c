
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_driver {int of_match_table; int acpi_match_table; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*) ;
 int FUNC_1 (int ,int ,int ,int *,int *) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (int ,int ,int *) ;

bool FUNC_4(struct device *VAR_0,
         const struct device_driver *VAR_1)
{
 if (!VAR_1->acpi_match_table)
  return FUNC_3(FUNC_0(VAR_0),
         VAR_1->of_match_table,
         ((void*)0));

 return FUNC_1(FUNC_2(VAR_0),
       VAR_1->acpi_match_table, VAR_1->of_match_table,
       ((void*)0), ((void*)0));
}
