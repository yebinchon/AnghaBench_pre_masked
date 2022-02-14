
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union acpi_operand_object {int dummy; } acpi_operand_object ;
typedef scalar_t__ u8 ;
typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
typedef int acpi_status ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (union acpi_operand_object*,int *,int ,scalar_t__,int,scalar_t__*) ;

__attribute__((used)) static acpi_status
FUNC_2(union acpi_operand_object *VAR_2, u32 VAR_3, u8 *VAR_4)
{
 acpi_status VAR_5;
 u64 VAR_6;
 u32 VAR_7 = 0;
 u32 VAR_8;



 for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
  VAR_5 =
      FUNC_1(VAR_2, ((void*)0), VAR_0,
         VAR_7, 8, &VAR_6);
  if (FUNC_0(VAR_5)) {
   return (VAR_5);
  }

  *VAR_4 = (u8)VAR_6;
  VAR_4++;
  VAR_7++;
 }

 return (VAR_1);
}
