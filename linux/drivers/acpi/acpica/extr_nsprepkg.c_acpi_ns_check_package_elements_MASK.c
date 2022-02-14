
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union acpi_operand_object {int dummy; } acpi_operand_object ;
typedef int u8 ;
typedef scalar_t__ u32 ;
struct acpi_evaluate_info {int dummy; } ;
typedef int acpi_status ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct acpi_evaluate_info*,union acpi_operand_object**,int ,scalar_t__) ;

__attribute__((used)) static acpi_status
FUNC_2(struct acpi_evaluate_info *VAR_1,
          union acpi_operand_object **VAR_2,
          u8 VAR_3,
          u32 VAR_4,
          u8 VAR_5, u32 VAR_6, u32 VAR_7)
{
 union acpi_operand_object **VAR_8 = VAR_2;
 acpi_status VAR_9;
 u32 VAR_10;






 for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++) {
  VAR_9 = FUNC_1(VAR_1, VAR_8,
         VAR_3, VAR_10 + VAR_7);
  if (FUNC_0(VAR_9)) {
   return (VAR_9);
  }

  VAR_8++;
 }

 for (VAR_10 = 0; VAR_10 < VAR_6; VAR_10++) {
  VAR_9 = FUNC_1(VAR_1, VAR_8,
         VAR_5,
         (VAR_10 + VAR_4 + VAR_7));
  if (FUNC_0(VAR_9)) {
   return (VAR_9);
  }

  VAR_8++;
 }

 return (VAR_0);
}
