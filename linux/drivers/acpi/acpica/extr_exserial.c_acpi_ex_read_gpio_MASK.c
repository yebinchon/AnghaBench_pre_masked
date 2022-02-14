
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int field_flags; } ;
struct TYPE_3__ {int bit_length; int pin_number_index; } ;
union acpi_operand_object {TYPE_2__ common_field; TYPE_1__ field; } ;
typedef int u64 ;
typedef int acpi_status ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,union acpi_operand_object*) ;
 int VAR_1 ;
 int FUNC_2 (union acpi_operand_object*,int ,int *,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_2 ;
 int FUNC_5 (int ) ;

acpi_status FUNC_6(union acpi_operand_object *VAR_3, void *VAR_4)
{
 acpi_status VAR_5;

 FUNC_1(VAR_2, VAR_3);







 FUNC_0((VAR_0,
     "GPIO FieldRead [FROM]:  Pin %u Bits %u\n",
     VAR_3->field.pin_number_index,
     VAR_3->field.bit_length));



 FUNC_3(VAR_3->common_field.field_flags);



 VAR_5 = FUNC_2(VAR_3, 0, (u64 *)VAR_4, VAR_1);

 FUNC_4(VAR_3->common_field.field_flags);
 FUNC_5(VAR_5);
}
