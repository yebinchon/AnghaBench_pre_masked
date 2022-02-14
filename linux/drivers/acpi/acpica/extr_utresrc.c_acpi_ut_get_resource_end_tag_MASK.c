
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int length; int * pointer; } ;
union acpi_operand_object {TYPE_1__ buffer; } ;
typedef int u8 ;
typedef int acpi_status ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *,int ,int *,void**) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;

acpi_status
FUNC_3(union acpi_operand_object *VAR_2, u8 **VAR_3)
{
 acpi_status VAR_4;

 FUNC_0(VAR_1);



 if (!VAR_2->buffer.length) {
  *VAR_3 = VAR_2->buffer.pointer;
  FUNC_2(VAR_0);
 }



 VAR_4 = FUNC_1(((void*)0), VAR_2->buffer.pointer,
         VAR_2->buffer.length, ((void*)0),
         (void **)VAR_3);

 FUNC_2(VAR_4);
}
