
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags; } ;
struct TYPE_6__ {scalar_t__ type; } ;
union acpi_operand_object {TYPE_1__ package; TYPE_3__ common; } ;
struct TYPE_5__ {union acpi_operand_object** this_target_obj; } ;
union acpi_generic_state {TYPE_2__ pkg; } ;
typedef int u8 ;
typedef int acpi_status ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (union acpi_operand_object**) ;
 int VAR_4 ;
 int FUNC_2 (int ) ;

acpi_status
FUNC_3(u8 VAR_5,
        union acpi_operand_object *VAR_6,
        union acpi_generic_state *VAR_7, void *VAR_8)
{
 union acpi_operand_object **VAR_9;

 FUNC_0(VAR_4);

 if (!VAR_6) {
  FUNC_2(VAR_2);
 }







 if (VAR_8) {



  VAR_9 = (union acpi_operand_object **)VAR_8;
 } else {


  VAR_9 = VAR_7->pkg.this_target_obj;
 }



 if (VAR_6->common.type == VAR_0) {



  FUNC_1(VAR_9);
 } else if (VAR_6->common.type == VAR_1) {
  VAR_6->package.flags |= VAR_3;
 }

 FUNC_2(VAR_2);
}
