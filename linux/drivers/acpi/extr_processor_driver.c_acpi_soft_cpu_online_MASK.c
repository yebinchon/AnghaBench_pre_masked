
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ need_hotplug_init; } ;
struct acpi_processor {int id; TYPE_1__ flags; int handle; } ;
struct acpi_device {int dummy; } ;


 int FUNC_0 (int,char*,int ) ;
 int FUNC_1 (struct acpi_device*) ;
 scalar_t__ FUNC_2 (int ,struct acpi_device**) ;
 int FUNC_3 (struct acpi_processor*) ;
 int FUNC_4 (struct acpi_processor*,int ) ;
 int FUNC_5 (struct acpi_processor*,int) ;
 int FUNC_6 (struct acpi_processor*) ;
 struct acpi_processor* FUNC_7 (int ,unsigned int) ;
 int FUNC_8 (char*,int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_9(unsigned int VAR_1)
{
 struct acpi_processor *VAR_2 = FUNC_7(VAR_0, VAR_1);
 struct acpi_device *VAR_3;

 if (!VAR_2 || FUNC_2(VAR_2->handle, &VAR_3))
  return 0;




 if (VAR_2->flags.need_hotplug_init) {
  int VAR_4;

  FUNC_8("Will online and init hotplugged CPU: %d\n",
   VAR_2->id);
  VAR_2->flags.need_hotplug_init = 0;
  VAR_4 = FUNC_1(VAR_3);
  FUNC_0(VAR_4, "Failed to start CPU: %d\n", VAR_2->id);
 } else {

  FUNC_4(VAR_2, 0);
  FUNC_3(VAR_2);
  FUNC_5(VAR_2, 0);
  FUNC_6(VAR_2);
 }
 return 0;
}
