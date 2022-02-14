
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int flags; } ;
struct TYPE_3__ {scalar_t__ length; int flags; int pointer; } ;
union acpi_operand_object {TYPE_2__ common; TYPE_1__ buffer; } ;
typedef scalar_t__ u32 ;
typedef int acpi_status ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,int ) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,union acpi_operand_object*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int ,int,scalar_t__) ;
 int FUNC_5 (int ,int ,scalar_t__) ;
 scalar_t__ VAR_7 ;
 int FUNC_6 (int ) ;
 int VAR_8 ;

acpi_status
FUNC_7(union acpi_operand_object *VAR_9,
          union acpi_operand_object *VAR_10)
{
 u32 VAR_11;
 VAR_8 *VAR_5;

 FUNC_3(VAR_6, VAR_9);



 if (VAR_9 == VAR_10) {
  FUNC_6(VAR_3);
 }



 VAR_5 = FUNC_1(VAR_8, VAR_9->buffer.pointer);
 VAR_11 = VAR_9->buffer.length;





 if ((VAR_10->buffer.length == 0) ||
     (VAR_10->common.flags & VAR_4)) {
  VAR_10->buffer.pointer = FUNC_0(VAR_11);
  if (!VAR_10->buffer.pointer) {
   FUNC_6(VAR_2);
  }

  VAR_10->buffer.length = VAR_11;
 }



 if (VAR_11 <= VAR_10->buffer.length) {



  FUNC_5(VAR_10->buffer.pointer, 0,
         VAR_10->buffer.length);
  FUNC_4(VAR_10->buffer.pointer, VAR_5, VAR_11);
 } else {


  FUNC_4(VAR_10->buffer.pointer, VAR_5,
         VAR_10->buffer.length);

  FUNC_2((VAR_0,
      "Truncating source buffer from %X to %X\n",
      VAR_11, VAR_10->buffer.length));
 }



 VAR_10->buffer.flags = VAR_9->buffer.flags;
 VAR_10->common.flags &= ~VAR_4;
 FUNC_6(VAR_3);
}
