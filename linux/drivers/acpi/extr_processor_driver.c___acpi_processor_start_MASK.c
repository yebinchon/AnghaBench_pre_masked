
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ need_hotplug_init; } ;
struct acpi_processor {TYPE_1__ flags; } ;
struct acpi_device {int handle; int dev; } ;
typedef int acpi_status ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct acpi_processor*) ;
 struct acpi_processor* FUNC_3 (struct acpi_device*) ;
 int VAR_3 ;
 int FUNC_4 (int ,int ,int ,struct acpi_device*) ;
 int VAR_4 ;
 int FUNC_5 (struct acpi_processor*) ;
 int FUNC_6 (struct acpi_processor*) ;
 int FUNC_7 (struct acpi_processor*,struct acpi_device*) ;
 int FUNC_8 (struct acpi_processor*,struct acpi_device*) ;
 int * FUNC_9 () ;
 int FUNC_10 (int *,char*) ;

__attribute__((used)) static int FUNC_11(struct acpi_device *VAR_5)
{
 struct acpi_processor *VAR_6 = FUNC_3(VAR_5);
 acpi_status VAR_7;
 int VAR_8 = 0;

 if (!VAR_6)
  return -VAR_2;

 if (VAR_6->flags.need_hotplug_init)
  return 0;

 VAR_8 = FUNC_2(VAR_6);
 if (VAR_8 && !FUNC_1(VAR_1))
  FUNC_10(&VAR_5->dev, "CPPC data invalid or not present\n");

 if (!FUNC_9() || FUNC_9() == &VAR_3)
  FUNC_6(VAR_6);

 VAR_8 = FUNC_8(VAR_6, VAR_5);
 if (VAR_8)
  goto err_power_exit;

 VAR_7 = FUNC_4(VAR_5->handle, VAR_0,
          VAR_4, VAR_5);
 if (FUNC_0(VAR_7))
  return 0;

 VAR_8 = -VAR_2;
 FUNC_7(VAR_6, VAR_5);

err_power_exit:
 FUNC_5(VAR_6);
 return VAR_8;
}
