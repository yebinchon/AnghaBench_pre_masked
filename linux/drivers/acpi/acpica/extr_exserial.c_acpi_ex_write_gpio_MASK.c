
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int field_flags; } ;
struct TYPE_7__ {scalar_t__ value; } ;
struct TYPE_6__ {int bit_length; int pin_number_index; } ;
struct TYPE_5__ {scalar_t__ type; } ;
union acpi_operand_object {TYPE_4__ common_field; TYPE_3__ integer; TYPE_2__ field; TYPE_1__ common; } ;
typedef int u64 ;
typedef int u32 ;
typedef int acpi_status ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,union acpi_operand_object*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (union acpi_operand_object*,int ,int *,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__) ;
 int VAR_4 ;
 int FUNC_6 (int ) ;

acpi_status
FUNC_7(union acpi_operand_object *VAR_5,
     union acpi_operand_object *VAR_6,
     union acpi_operand_object **VAR_7)
{
 acpi_status VAR_8;
 void *VAR_9;

 FUNC_1(VAR_4, VAR_6);
 if (VAR_5->common.type != VAR_1) {
  FUNC_6(VAR_3);
 }

 FUNC_0((VAR_0,
     "GPIO FieldWrite [FROM]: (%s:%X), Value %.8X  [TO]: Pin %u Bits %u\n",
     FUNC_5(VAR_5->common.type),
     VAR_5->common.type,
     (u32)VAR_5->integer.value,
     VAR_6->field.pin_number_index,
     VAR_6->field.bit_length));

 VAR_9 = &VAR_5->integer.value;



 FUNC_3(VAR_6->common_field.field_flags);



 VAR_8 = FUNC_2(VAR_6, 0, (u64 *)VAR_9, VAR_2);
 FUNC_4(VAR_6->common_field.field_flags);
 FUNC_6(VAR_8);
}
