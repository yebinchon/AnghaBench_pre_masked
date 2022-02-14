
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ type; int flags; } ;
struct TYPE_3__ {int value; } ;
union acpi_operand_object {TYPE_2__ common; TYPE_1__ reference; } ;
typedef int u32 ;
typedef int acpi_status ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (union acpi_operand_object*) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;
 int VAR_7 ;
 int FUNC_8 (int ) ;

acpi_status FUNC_9(union acpi_operand_object *VAR_8)
{
 acpi_status VAR_9 = VAR_5;
 union acpi_operand_object *VAR_10 = VAR_8;
 u32 VAR_11;

 FUNC_1(VAR_7);






 FUNC_4((VAR_3, "Received request to unload an ACPI table"));
 FUNC_0((VAR_3, VAR_4,
   "AML Unload operator is not supported"));
 if ((!VAR_8) ||
     (FUNC_2(VAR_8) != VAR_0) ||
     (VAR_8->common.type != VAR_1) ||
     (!(VAR_8->common.flags & VAR_6))) {
  FUNC_8(VAR_2);
 }



 VAR_11 = VAR_10->reference.value;





 FUNC_6();
 VAR_9 = FUNC_7(VAR_11);
 FUNC_5();





 if (FUNC_3(VAR_9)) {
  VAR_8->common.flags &= ~VAR_6;
 }
 FUNC_8(VAR_9);
}
