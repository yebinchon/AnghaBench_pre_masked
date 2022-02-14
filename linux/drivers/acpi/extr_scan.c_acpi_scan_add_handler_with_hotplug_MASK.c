
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_scan_handler {int hotplug; } ;


 int FUNC_0 (struct acpi_scan_handler*) ;
 int FUNC_1 (int *,char const*) ;

int FUNC_2(struct acpi_scan_handler *VAR_0,
           const char *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(VAR_0);
 if (VAR_2)
  return VAR_2;

 FUNC_1(&VAR_0->hotplug, VAR_1);
 return 0;
}
