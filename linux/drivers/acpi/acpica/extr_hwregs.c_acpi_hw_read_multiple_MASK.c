
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef int u32 ;
struct acpi_generic_address {scalar_t__ address; } ;
typedef int acpi_status ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__*,struct acpi_generic_address*) ;

__attribute__((used)) static acpi_status
FUNC_2(u32 *VAR_1,
        struct acpi_generic_address *VAR_2,
        struct acpi_generic_address *VAR_3)
{
 u32 VAR_4 = 0;
 u32 VAR_5 = 0;
 u64 VAR_6;
 acpi_status VAR_7;



 VAR_7 = FUNC_1(&VAR_6, VAR_2);
 if (FUNC_0(VAR_7)) {
  return (VAR_7);
 }
 VAR_4 = (u32)VAR_6;



 if (VAR_3->address) {
  VAR_7 = FUNC_1(&VAR_6, VAR_3);
  if (FUNC_0(VAR_7)) {
   return (VAR_7);
  }
  VAR_5 = (u32)VAR_6;
 }
 *VAR_1 = (VAR_4 | VAR_5);
 return (VAR_0);
}
