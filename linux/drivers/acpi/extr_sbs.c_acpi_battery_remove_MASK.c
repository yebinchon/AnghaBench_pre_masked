
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct acpi_sbs {struct acpi_battery* battery; } ;
struct acpi_battery {TYPE_1__* bat; scalar_t__ have_sysfs_alarm; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(struct acpi_sbs *VAR_1, int VAR_2)
{
 struct acpi_battery *VAR_3 = &VAR_1->battery[VAR_2];

 if (VAR_3->bat) {
  if (VAR_3->have_sysfs_alarm)
   FUNC_0(&VAR_3->bat->dev, &VAR_0);
  FUNC_1(VAR_3->bat);
 }
}
