
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int length; int * pointer; } ;
struct TYPE_6__ {int pointer; } ;
struct TYPE_5__ {int type; } ;
union acpi_operand_object {TYPE_1__ buffer; TYPE_3__ string; TYPE_2__ common; } ;
typedef size_t u64 ;
typedef size_t u32 ;
typedef int acpi_status ;


 int FUNC_0 (int ) ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 union acpi_operand_object* FUNC_1 (size_t) ;
 int FUNC_2 (int ,size_t*) ;

acpi_status
FUNC_3(union acpi_operand_object *VAR_3,
      union acpi_operand_object **VAR_4)
{
 union acpi_operand_object *VAR_5;
 acpi_status VAR_6;
 u64 VAR_7 = 0;
 u32 VAR_8;

 switch (VAR_3->common.type) {
 case 128:



  VAR_6 =
      FUNC_2(VAR_3->string.pointer, &VAR_7);
  if (FUNC_0(VAR_6)) {
   return (VAR_6);
  }
  break;

 case 129:



  if (VAR_3->buffer.length > 8) {
   return (VAR_0);
  }



  for (VAR_8 = 0; VAR_8 < VAR_3->buffer.length; VAR_8++) {
   VAR_7 |= ((u64)
      VAR_3->buffer.pointer[VAR_8] << (VAR_8 *
          8));
  }
  break;

 default:

  return (VAR_0);
 }

 VAR_5 = FUNC_1(VAR_7);
 if (!VAR_5) {
  return (VAR_1);
 }

 *VAR_4 = VAR_5;
 return (VAR_2);
}
