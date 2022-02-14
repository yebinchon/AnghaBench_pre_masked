
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int value; int class; } ;
struct TYPE_3__ {int flags; } ;
union acpi_operand_object {TYPE_2__ reference; TYPE_1__ common; } ;
typedef int u32 ;
typedef int acpi_status ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 union acpi_operand_object* FUNC_1 (int ) ;
 int VAR_5 ;
 int FUNC_2 (int ) ;

__attribute__((used)) static acpi_status
FUNC_3(u32 VAR_6, union acpi_operand_object **VAR_7)
{
 union acpi_operand_object *VAR_8;

 FUNC_0(VAR_5);



 VAR_8 = FUNC_1(VAR_1);
 if (!VAR_8) {
  FUNC_2(VAR_2);
 }



 VAR_8->common.flags |= VAR_4;
 VAR_8->reference.class = VAR_0;
 VAR_8->reference.value = VAR_6;
 *VAR_7 = VAR_8;
 FUNC_2(VAR_3);
}
