
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_hardware_id {int * id; } ;
struct acpi_device_id {int cls; int cls_msk; } ;


 int FUNC_0 (char*,char*,int) ;
 scalar_t__ FUNC_1 (char*,int *,int) ;

__attribute__((used)) static bool FUNC_2(const struct acpi_device_id *VAR_0,
        struct acpi_hardware_id *VAR_1)
{
 int VAR_2, VAR_3, VAR_4;
 char VAR_5[3];

 if (!VAR_0->cls)
  return 0;


 for (VAR_2 = 1; VAR_2 <= 3; VAR_2++) {
  VAR_4 = 8 * (3 - VAR_2);
  VAR_3 = (VAR_0->cls_msk >> VAR_4) & 0xFF;
  if (!VAR_3)
   continue;

  FUNC_0(VAR_5, "%02x", (VAR_0->cls >> VAR_4) & VAR_3);
  if (FUNC_1(VAR_5, &VAR_1->id[(VAR_2 - 1) * 2], 2))
   return 0;
 }
 return 1;
}
