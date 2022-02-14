
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int value; } ;
struct TYPE_3__ {scalar_t__ type; } ;
union acpi_operand_object {TYPE_2__ integer; TYPE_1__ common; } ;
typedef int u8 ;
typedef int u64 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (union acpi_operand_object*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

u8 FUNC_2(union acpi_operand_object *VAR_6)
{

 FUNC_0();





 if ((!VAR_6) ||
     (FUNC_1(VAR_6) != VAR_0) ||
     (VAR_6->common.type != VAR_1)) {
  return (VAR_3);
 }

 if ((VAR_5 == 4) &&
     (VAR_6->integer.value > (u64)VAR_2)) {




  VAR_6->integer.value &= (u64)VAR_2;
  return (VAR_4);
 }

 return (VAR_3);
}
