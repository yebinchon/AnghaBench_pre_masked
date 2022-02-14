
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_battery {scalar_t__ state; scalar_t__ capacity_now; scalar_t__ full_charge_capacity; scalar_t__ design_capacity; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_0(struct acpi_battery *VAR_1)
{

 if (VAR_1->state != 0)
  return 0;


 if (VAR_1->capacity_now == VAR_0 ||
     VAR_1->capacity_now == 0)
  return 0;


 if (VAR_1->full_charge_capacity == VAR_1->capacity_now)
  return 1;


 if (VAR_1->design_capacity == VAR_1->capacity_now)
  return 1;


 return 0;
}
