
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct acpi_battery {scalar_t__ design_capacity_warning; scalar_t__ alarm; int flags; TYPE_1__* device; } ;
struct TYPE_2__ {int handle; } ;


 int VAR_0 ;
 int FUNC_0 (struct acpi_battery*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static int FUNC_4(struct acpi_battery *VAR_1)
{

 if (!FUNC_1(VAR_1->device->handle, "_BTP")) {
  FUNC_2(VAR_0, &VAR_1->flags);
  return 0;
 }
 FUNC_3(VAR_0, &VAR_1->flags);
 if (!VAR_1->alarm)
  VAR_1->alarm = VAR_1->design_capacity_warning;
 return FUNC_0(VAR_1);
}
