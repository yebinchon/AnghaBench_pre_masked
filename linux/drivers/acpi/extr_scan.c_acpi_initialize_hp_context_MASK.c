
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_hotplug_context {int (* notify ) (struct acpi_device*,VAR_0) ;void (* uevent ) (struct acpi_device*,VAR_1) ;} ;
struct acpi_device {int dummy; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct acpi_device*,struct acpi_hotplug_context*) ;
 int FUNC_2 () ;

void FUNC_3(struct acpi_device *VAR_2,
    struct acpi_hotplug_context *VAR_3,
    int (*VAR_4)(struct acpi_device *, VAR_5),
    void (*VAR_6)(struct acpi_device *, VAR_7))
{
 FUNC_0();
 VAR_3->notify = VAR_4;
 VAR_3->uevent = VAR_6;
 FUNC_1(VAR_2, VAR_3);
 FUNC_2();
}
