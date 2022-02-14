
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ length; int * pointer; int flags; } ;
union acpi_operand_object {TYPE_1__ buffer; } ;
typedef int u8 ;
typedef scalar_t__ u32 ;
typedef scalar_t__ acpi_size ;


 int * FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 union acpi_operand_object* FUNC_3 (int ) ;
 int FUNC_4 (union acpi_operand_object*) ;
 int FUNC_5 (union acpi_operand_object*) ;
 int VAR_3 ;

union acpi_operand_object *FUNC_6(acpi_size VAR_4)
{
 union acpi_operand_object *VAR_5;
 u8 *VAR_6 = ((void*)0);

 FUNC_2(VAR_3, VAR_4);



 VAR_5 = FUNC_3(VAR_0);
 if (!VAR_5) {
  FUNC_5(((void*)0));
 }



 if (VAR_4 > 0) {



  VAR_6 = FUNC_0(VAR_4);
  if (!VAR_6) {
   FUNC_1((VAR_1, "Could not allocate size %u",
        (u32)VAR_4));

   FUNC_4(VAR_5);
   FUNC_5(((void*)0));
  }
 }



 VAR_5->buffer.flags |= VAR_2;
 VAR_5->buffer.pointer = VAR_6;
 VAR_5->buffer.length = (u32) VAR_4;



 FUNC_5(VAR_5);
}
