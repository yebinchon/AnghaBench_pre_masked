
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ value; } ;
union acpi_object {TYPE_1__ integer; int member_0; } ;
struct acpi_power_meter_resource {scalar_t__* trip; TYPE_2__* acpi_dev; } ;
struct acpi_object_list {int member_0; union acpi_object* member_1; } ;
typedef int acpi_status ;
struct TYPE_4__ {int handle; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,char*,struct acpi_object_list*,unsigned long long*) ;

__attribute__((used)) static int FUNC_3(struct acpi_power_meter_resource *VAR_3)
{
 union acpi_object VAR_4[] = {
  {VAR_0},
  {VAR_0}
 };
 struct acpi_object_list VAR_5 = { 2, VAR_4 };
 unsigned long long VAR_6;
 acpi_status VAR_7;


 if (VAR_3->trip[0] < 0 || VAR_3->trip[1] < 0)
  return 0;


 VAR_4[0].integer.value = VAR_3->trip[1];
 VAR_4[1].integer.value = VAR_3->trip[0];

 VAR_7 = FUNC_2(VAR_3->acpi_dev->handle, "_PTP",
           &VAR_5, &VAR_6);
 if (FUNC_1(VAR_7)) {
  FUNC_0((VAR_1, VAR_7, "Evaluating _PTP"));
  return -VAR_2;
 }


 if (VAR_6)
  return -VAR_2;

 return 0;
}
