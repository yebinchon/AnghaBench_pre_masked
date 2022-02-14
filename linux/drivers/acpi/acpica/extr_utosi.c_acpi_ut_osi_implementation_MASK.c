
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ value; } ;
struct TYPE_7__ {int pointer; } ;
struct TYPE_6__ {scalar_t__ type; } ;
union acpi_operand_object {TYPE_4__ integer; TYPE_3__ string; TYPE_2__ common; } ;
typedef scalar_t__ u64 ;
typedef int u32 ;
struct acpi_walk_state {union acpi_operand_object* return_desc; TYPE_1__* arguments; } ;
struct acpi_interface_info {int flags; scalar_t__ value; } ;
typedef int acpi_status ;
typedef scalar_t__ (* acpi_interface_handler ) (int ,int ) ;
struct TYPE_5__ {union acpi_operand_object* object; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_3 (int ,int ) ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 union acpi_operand_object* FUNC_6 (int ) ;
 struct acpi_interface_info* FUNC_7 (int ) ;
 int FUNC_8 (union acpi_operand_object*) ;
 int FUNC_9 (int ) ;
 int VAR_11 ;

acpi_status FUNC_10(struct acpi_walk_state *VAR_12)
{
 union acpi_operand_object *VAR_13;
 union acpi_operand_object *VAR_14;
 struct acpi_interface_info *VAR_15;
 acpi_interface_handler VAR_16;
 acpi_status VAR_17;
 u64 VAR_18;

 FUNC_2(VAR_11);



 VAR_13 = VAR_12->arguments[0].object;
 if (!VAR_13 || (VAR_13->common.type != VAR_3)) {
  FUNC_9(VAR_8);
 }



 VAR_14 = FUNC_6(VAR_2);
 if (!VAR_14) {
  FUNC_9(VAR_6);
 }



 VAR_18 = 0;
 VAR_17 = FUNC_4(VAR_10, VAR_5);
 if (FUNC_1(VAR_17)) {
  FUNC_8(VAR_14);
  FUNC_9(VAR_17);
 }



 VAR_15 = FUNC_7(VAR_13->string.pointer);
 if (VAR_15 && !(VAR_15->flags & VAR_1)) {





  if (VAR_15->value > VAR_9) {
   VAR_9 = VAR_15->value;
  }

  VAR_18 = VAR_4;
 }

 FUNC_5(VAR_10);






 VAR_16 = FUNC_3;
 if (VAR_16) {
  if (VAR_16
      (VAR_13->string.pointer, (u32)VAR_18)) {
   VAR_18 = VAR_4;
  }
 }

 FUNC_0((VAR_0,
         "ACPI: BIOS _OSI(\"%s\") is %ssupported\n",
         VAR_13->string.pointer,
         VAR_18 == 0 ? "not " : ""));



 VAR_14->integer.value = VAR_18;
 VAR_12->return_desc = VAR_14;
 FUNC_9(VAR_7);
}
