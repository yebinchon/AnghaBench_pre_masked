
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int aml_op_name; int aml_opcode; int descriptor_type; } ;
union acpi_parse_object {TYPE_1__ common; } ;
typedef int u16 ;
struct TYPE_4__ {int name; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 TYPE_2__* FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int) ;

void FUNC_4(union acpi_parse_object *VAR_1, u16 VAR_2)
{
 FUNC_1();

 VAR_1->common.descriptor_type = VAR_0;
 VAR_1->common.aml_opcode = VAR_2;

 FUNC_0(FUNC_3(VAR_1->common.aml_op_name,
            (FUNC_2
             (VAR_2))->name,
            sizeof(VAR_1->common.
            aml_op_name)));
}
