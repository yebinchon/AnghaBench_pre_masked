
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_device {int * handler; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct acpi_device*) ;

bool FUNC_1(struct acpi_device *VAR_1)
{
 return VAR_1->handler == &VAR_0 || FUNC_0(VAR_1);
}
