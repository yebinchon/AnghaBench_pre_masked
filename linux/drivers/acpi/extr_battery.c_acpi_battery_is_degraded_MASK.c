
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_battery {scalar_t__ full_charge_capacity; scalar_t__ design_capacity; } ;



__attribute__((used)) static bool FUNC_0(struct acpi_battery *VAR_0)
{
 return VAR_0->full_charge_capacity && VAR_0->design_capacity &&
  VAR_0->full_charge_capacity < VAR_0->design_capacity;
}
