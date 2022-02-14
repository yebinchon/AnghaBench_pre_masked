
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ length; int pointer; } ;
struct TYPE_3__ {int flags; } ;
union acpi_operand_object {TYPE_2__ string; TYPE_1__ common; } ;
typedef scalar_t__ u32 ;
typedef int acpi_status ;
typedef scalar_t__ acpi_size ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,union acpi_operand_object*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int ,int,scalar_t__) ;
 int FUNC_5 (int ,int ,scalar_t__) ;
 int FUNC_6 (int ) ;
 int VAR_5 ;

acpi_status
FUNC_7(union acpi_operand_object *VAR_6,
          union acpi_operand_object *VAR_7)
{
 u32 VAR_8;
 VAR_5 *VAR_3;

 FUNC_3(VAR_4, VAR_6);



 if (VAR_6 == VAR_7) {
  FUNC_6(VAR_1);
 }



 VAR_3 = FUNC_1(VAR_5, VAR_6->string.pointer);
 VAR_8 = VAR_6->string.length;





 if ((VAR_8 < VAR_7->string.length) &&
     (!(VAR_7->common.flags & VAR_2))) {




  FUNC_5(VAR_7->string.pointer, 0,
         (acpi_size)VAR_7->string.length + 1);
  FUNC_4(VAR_7->string.pointer, VAR_3, VAR_8);
 } else {




  if (VAR_7->string.pointer &&
      (!(VAR_7->common.flags & VAR_2))) {



   FUNC_2(VAR_7->string.pointer);
  }

  VAR_7->string.pointer =
      FUNC_0((acpi_size)VAR_8 + 1);

  if (!VAR_7->string.pointer) {
   FUNC_6(VAR_0);
  }

  VAR_7->common.flags &= ~VAR_2;
  FUNC_4(VAR_7->string.pointer, VAR_3, VAR_8);
 }



 VAR_7->string.length = VAR_8;
 FUNC_6(VAR_1);
}
