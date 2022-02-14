
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* base_byte_offset; void* start_field_bit_offset; void* access_byte_width; void* bit_length; void* attribute; void* field_flags; } ;
union acpi_operand_object {TYPE_1__ common_field; } ;
typedef void* u8 ;
typedef void* u32 ;
typedef int acpi_status ;


 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (void*) ;
 void* FUNC_3 (void*) ;
 scalar_t__ FUNC_4 (void*,void*) ;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_5 (union acpi_operand_object*,void*,void**) ;
 int VAR_2 ;
 int FUNC_6 (int ) ;

acpi_status
FUNC_7(union acpi_operand_object *VAR_3,
     u8 VAR_4,
     u8 VAR_5,
     u32 VAR_6, u32 VAR_7)
{
 u32 VAR_8;
 u32 VAR_9;
 u32 VAR_10;

 FUNC_1(VAR_2);






 VAR_3->common_field.field_flags = VAR_4;
 VAR_3->common_field.attribute = VAR_5;
 VAR_3->common_field.bit_length = VAR_7;
 VAR_8 =
     FUNC_5(VAR_3, VAR_4, &VAR_9);
 if (!VAR_8) {
  FUNC_6(VAR_0);
 }



 VAR_3->common_field.access_byte_width = (u8)
     FUNC_0(VAR_8);
 VAR_10 =
     FUNC_3(VAR_6);
 VAR_3->common_field.base_byte_offset = (u32)
     FUNC_4(VAR_10, VAR_9);





 VAR_3->common_field.start_field_bit_offset = (u8)
     (VAR_6 -
      FUNC_2(VAR_3->common_field.base_byte_offset));

 FUNC_6(VAR_1);
}
