
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int has_lpi; int power; } ;
struct TYPE_5__ {int count; TYPE_1__* lpi_states; } ;
struct acpi_processor {TYPE_3__ flags; TYPE_2__ power; int handle; } ;
struct acpi_lpi_states_array {int dummy; } ;
struct acpi_device {int dummy; } ;
typedef int acpi_status ;
typedef int acpi_handle ;
struct TYPE_4__ {int index; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,struct acpi_device**) ;
 int FUNC_2 (struct acpi_device*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,struct acpi_lpi_states_array*) ;
 int VAR_3 ;
 int FUNC_6 (struct acpi_processor*,struct acpi_lpi_states_array*,struct acpi_lpi_states_array*) ;
 int VAR_4 ;
 scalar_t__ FUNC_7 (int ,int ) ;

__attribute__((used)) static int FUNC_8(struct acpi_processor *VAR_5)
{
 int VAR_6, VAR_7;
 acpi_status VAR_8;
 acpi_handle VAR_9 = VAR_5->handle, VAR_10;
 struct acpi_device *VAR_11 = ((void*)0);
 struct acpi_lpi_states_array VAR_12[2], *VAR_13, *VAR_14, *VAR_15;

 if (!VAR_4)
  return -VAR_2;

 if (!FUNC_4(VAR_9, "_LPI"))
  return -VAR_1;

 VAR_3 = 0;
 VAR_14 = &VAR_12[0];
 VAR_15 = &VAR_12[1];
 VAR_9 = VAR_5->handle;
 VAR_6 = FUNC_5(VAR_9, VAR_14);
 if (VAR_6)
  return VAR_6;
 FUNC_6(VAR_5, VAR_14, ((void*)0));

 VAR_8 = FUNC_3(VAR_9, &VAR_10);
 while (FUNC_0(VAR_8)) {
  FUNC_1(VAR_10, &VAR_11);
  VAR_9 = VAR_10;

  if (FUNC_7(FUNC_2(VAR_11), VAR_0))
   break;


  if (!FUNC_4(VAR_9, "_LPI"))
   break;

  VAR_6 = FUNC_5(VAR_9, VAR_15);
  if (VAR_6)
   break;


  FUNC_6(VAR_5, VAR_15, VAR_14);

  VAR_13 = VAR_14, VAR_14 = VAR_15, VAR_15 = VAR_13;

  VAR_8 = FUNC_3(VAR_9, &VAR_10);
 }

 VAR_5->power.count = VAR_3;

 for (VAR_7 = 0; VAR_7 < VAR_5->power.count; VAR_7++)
  VAR_5->power.lpi_states[VAR_7].index = VAR_7;


 VAR_5->flags.has_lpi = 1;
 VAR_5->flags.power = 1;

 return 0;
}
