
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union acpi_operand_object {int dummy; } acpi_operand_object ;
struct acpi_evaluate_info {int dummy; } ;
typedef int acpi_status ;


 int VAR_0 ;
 int FUNC_0 (struct acpi_evaluate_info*,union acpi_operand_object*,int ,int,int,int ,char*) ;

__attribute__((used)) static acpi_status
FUNC_1(struct acpi_evaluate_info *VAR_1,
     union acpi_operand_object **VAR_2)
{
 union acpi_operand_object *VAR_3 = *VAR_2;
 acpi_status VAR_4;

 VAR_4 = FUNC_0(VAR_1, VAR_3, 0, 2, 1,
        VAR_0,
        "AmbientIlluminance");

 return (VAR_4);
}
