
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* string; } ;
struct acpi_device_info {int valid; TYPE_1__ hardware_id; } ;
typedef int acpi_status ;
typedef int acpi_handle ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,struct acpi_device_info**) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct acpi_device_info*) ;
 scalar_t__ FUNC_4 (char*,char*) ;

__attribute__((used)) static bool FUNC_5(acpi_handle VAR_1, char **VAR_2)
{
 acpi_status VAR_3;
 struct acpi_device_info *VAR_4;
 char *VAR_5 = ((void*)0);
 bool VAR_6 = 0;

 if (!FUNC_2(VAR_1, "_GSB"))
  return 0;

 VAR_3 = FUNC_1(VAR_1, &VAR_4);
 if (FUNC_0(VAR_3)) {
  if (VAR_4->valid & VAR_0)
   VAR_5 = VAR_4->hardware_id.string;
  if (VAR_5) {
   if (FUNC_4(VAR_5, "ACPI0009") == 0) {
    *VAR_2 = "IOxAPIC";
    VAR_6 = 1;
   } else if (FUNC_4(VAR_5, "ACPI000A") == 0) {
    *VAR_2 = "IOAPIC";
    VAR_6 = 1;
   }
  }
  FUNC_3(VAR_4);
 }

 return VAR_6;
}
