
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dynamic_status; int removable; int ejectable; } ;
struct acpi_device {TYPE_1__ flags; int handle; } ;


 scalar_t__ FUNC_0 (int ,char*) ;

__attribute__((used)) static void FUNC_1(struct acpi_device *VAR_0)
{

 if (FUNC_0(VAR_0->handle, "_STA"))
  VAR_0->flags.dynamic_status = 1;


 if (FUNC_0(VAR_0->handle, "_RMV"))
  VAR_0->flags.removable = 1;


 if (FUNC_0(VAR_0->handle, "_EJD") ||
     FUNC_0(VAR_0->handle, "_EJ0"))
  VAR_0->flags.ejectable = 1;
}
