
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int value; } ;
union acpi_object {TYPE_1__ integer; int type; } ;
struct dock_station {int handle; } ;
struct acpi_object_list {int count; union acpi_object* pointer; } ;
typedef scalar_t__ acpi_status ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int ,char*,struct acpi_object_list*,unsigned long long*) ;
 int FUNC_2 (int ,char*,scalar_t__) ;
 int FUNC_3 (int ,char*,char*) ;

__attribute__((used)) static void FUNC_4(struct dock_station *VAR_2, int VAR_3)
{
 acpi_status VAR_4;
 struct acpi_object_list VAR_5;
 union acpi_object VAR_6;
 unsigned long long VAR_7;

 FUNC_3(VAR_2->handle, "%s\n", VAR_3 ? "docking" : "undocking");


 VAR_5.count = 1;
 VAR_5.pointer = &VAR_6;
 VAR_6.type = VAR_0;
 VAR_6.integer.value = VAR_3;
 VAR_4 = FUNC_1(VAR_2->handle, "_DCK", &VAR_5, &VAR_7);
 if (FUNC_0(VAR_4) && VAR_4 != VAR_1)
  FUNC_2(VAR_2->handle, "Failed to execute _DCK (0x%x)\n",
    VAR_4);
}
