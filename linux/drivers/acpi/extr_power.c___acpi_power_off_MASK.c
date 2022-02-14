
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int handle; } ;
struct acpi_power_resource {int name; TYPE_1__ device; } ;
typedef int acpi_status ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ,char*,int *,int *) ;

__attribute__((used)) static int FUNC_3(struct acpi_power_resource *VAR_2)
{
 acpi_status VAR_3;

 VAR_3 = FUNC_2(VAR_2->device.handle, "_OFF",
          ((void*)0), ((void*)0));
 if (FUNC_1(VAR_3))
  return -VAR_1;

 FUNC_0((VAR_0, "Power resource [%s] turned off\n",
     VAR_2->name));
 return 0;
}
