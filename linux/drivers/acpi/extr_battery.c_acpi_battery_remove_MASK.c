
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_device {int dev; } ;
struct acpi_battery {int sysfs_lock; int lock; int pm_nb; } ;


 int VAR_0 ;
 int FUNC_0 (struct acpi_device*) ;
 struct acpi_battery* FUNC_1 (struct acpi_device*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct acpi_battery*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct acpi_battery*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct acpi_device *VAR_1)
{
 struct acpi_battery *VAR_2 = ((void*)0);

 if (!VAR_1 || !FUNC_1(VAR_1))
  return -VAR_0;
 FUNC_2(&VAR_1->dev, 0);
 VAR_2 = FUNC_1(VAR_1);
 FUNC_6(&VAR_2->pm_nb);



 FUNC_5(VAR_2);
 FUNC_4(&VAR_2->lock);
 FUNC_4(&VAR_2->sysfs_lock);
 FUNC_3(VAR_2);
 return 0;
}
