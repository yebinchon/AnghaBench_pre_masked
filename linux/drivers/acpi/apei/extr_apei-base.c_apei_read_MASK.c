
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef int u32 ;
struct acpi_generic_address {int space_id; } ;
typedef int acpi_status ;
typedef int acpi_physical_address ;




 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,scalar_t__*,int ) ;
 int FUNC_2 (scalar_t__,int *,int ) ;
 int FUNC_3 (struct acpi_generic_address*,scalar_t__*,int *) ;

int FUNC_4(u64 *VAR_2, struct acpi_generic_address *VAR_3)
{
 int VAR_4;
 u32 VAR_5;
 u64 VAR_6;
 acpi_status VAR_7;

 VAR_4 = FUNC_3(VAR_3, &VAR_6, &VAR_5);
 if (VAR_4)
  return VAR_4;

 *VAR_2 = 0;
 switch(VAR_3->space_id) {
 case 128:
  VAR_7 = FUNC_1((acpi_physical_address) VAR_6,
            VAR_2, VAR_5);
  if (FUNC_0(VAR_7))
   return -VAR_1;
  break;
 case 129:
  VAR_7 = FUNC_2(VAR_6, (u32 *)VAR_2,
        VAR_5);
  if (FUNC_0(VAR_7))
   return -VAR_1;
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
