
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct acpi_battery {int alarm; int lock; TYPE_1__* device; int flags; } ;
typedef int acpi_status ;
struct TYPE_2__ {int handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (struct acpi_battery*) ;
 int FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int *) ;

__attribute__((used)) static int FUNC_7(struct acpi_battery *VAR_3)
{
 acpi_status VAR_4 = 0;

 if (!FUNC_2(VAR_3) ||
     !FUNC_6(VAR_0, &VAR_3->flags))
  return -VAR_2;

 FUNC_4(&VAR_3->lock);
 VAR_4 = FUNC_3(VAR_3->device->handle, "_BTP",
         VAR_3->alarm);
 FUNC_5(&VAR_3->lock);

 if (FUNC_1(VAR_4))
  return -VAR_2;

 FUNC_0((VAR_1, "Alarm set to %d\n", VAR_3->alarm));
 return 0;
}
