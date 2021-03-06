
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int name; } ;


 scalar_t__ acpi_base ;
 int mfd_cell_disable (struct platform_device*) ;
 int * pm_power_off ;
 scalar_t__ pms_base ;
 scalar_t__ strcmp (int ,char*) ;

__attribute__((used)) static int xo1_pm_remove(struct platform_device *pdev)
{
 mfd_cell_disable(pdev);

 if (strcmp(pdev->name, "cs5535-pms") == 0)
  pms_base = 0;
 else if (strcmp(pdev->name, "olpc-xo1-pm-acpi") == 0)
  acpi_base = 0;

 pm_power_off = ((void*)0);
 return 0;
}
