
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bit_length; } ;
union acpi_operand_object {TYPE_1__ common_field; } ;
typedef int u8 ;
typedef int u64 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static u8
FUNC_2(union acpi_operand_object *VAR_4, u64 VAR_5)
{

 if (VAR_4->common_field.bit_length >= VAR_0) {




  return (VAR_2);
 }

 if (VAR_5 >= ((u64) 1 << VAR_4->common_field.bit_length)) {




  FUNC_0((VAR_1,
       "Index value 0x%8.8X%8.8X overflows field width 0x%X",
       FUNC_1(VAR_5),
       VAR_4->common_field.bit_length));

  return (VAR_3);
 }



 return (VAR_2);
}
