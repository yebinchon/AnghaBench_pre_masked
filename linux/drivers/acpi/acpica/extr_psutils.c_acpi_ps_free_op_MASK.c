
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ aml_opcode; int flags; } ;
union acpi_parse_object {TYPE_1__ common; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (union acpi_parse_object*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ,union acpi_parse_object*) ;
 int VAR_5 ;

void FUNC_4(union acpi_parse_object *VAR_6)
{
 FUNC_1(VAR_5);

 FUNC_2(VAR_6);
 if (VAR_6->common.aml_opcode == VAR_2) {
  FUNC_0((VAR_0,
      "Free retval op: %p\n", VAR_6));
 }

 if (VAR_6->common.flags & VAR_1) {
  (void)FUNC_3(VAR_3, VAR_6);
 } else {
  (void)FUNC_3(VAR_4, VAR_6);
 }
}
