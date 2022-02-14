
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {size_t length; int * pointer; } ;
struct TYPE_6__ {int pointer; } ;
struct TYPE_5__ {int value; } ;
struct TYPE_8__ {int type; } ;
union acpi_operand_object {TYPE_3__ buffer; TYPE_2__ string; TYPE_1__ integer; TYPE_4__ common; } ;
typedef int acpi_status ;
typedef size_t acpi_size ;


 int FUNC_0 (int ) ;
 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (union acpi_operand_object*,union acpi_operand_object**,int ) ;
 union acpi_operand_object* FUNC_2 (size_t) ;
 int FUNC_3 (int ,int *,size_t) ;

acpi_status
FUNC_4(union acpi_operand_object *VAR_4,
     union acpi_operand_object **VAR_5)
{
 union acpi_operand_object *VAR_6;
 acpi_size VAR_7;
 acpi_status VAR_8;

 switch (VAR_4->common.type) {
 case 128:





  if (VAR_4->integer.value == 0) {



   VAR_6 = FUNC_2(0);
   if (!VAR_6) {
    return (VAR_2);
   }
  } else {
   VAR_8 = FUNC_1(VAR_4,
          &VAR_6,
          VAR_0);
   if (FUNC_0(VAR_8)) {
    return (VAR_8);
   }
  }
  break;

 case 129:






  VAR_7 = 0;
  while ((VAR_7 < VAR_4->buffer.length) &&
         (VAR_4->buffer.pointer[VAR_7])) {
   VAR_7++;
  }



  VAR_6 = FUNC_2(VAR_7);
  if (!VAR_6) {
   return (VAR_2);
  }





  FUNC_3(VAR_6->string.pointer,
         VAR_4->buffer.pointer, VAR_7);
  break;

 default:

  return (VAR_1);
 }

 *VAR_5 = VAR_6;
 return (VAR_3);
}
