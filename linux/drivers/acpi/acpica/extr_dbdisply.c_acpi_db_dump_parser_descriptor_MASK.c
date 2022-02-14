
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int arg; } ;
struct TYPE_3__ {int next; int parent; TYPE_2__ value; int aml_opcode; } ;
union acpi_parse_object {TYPE_1__ common; } ;
struct acpi_opcode_info {int name; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;
 struct acpi_opcode_info* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(union acpi_parse_object *VAR_0)
{
 const struct acpi_opcode_info *VAR_1;

 VAR_1 = FUNC_2(VAR_0->common.aml_opcode);

 FUNC_1("Parser Op Descriptor:\n");
 FUNC_1("%20.20s : %4.4X\n", "Opcode", VAR_0->common.aml_opcode);

 FUNC_0(FUNC_1("%20.20s : %s\n", "Opcode Name",
            VAR_1->name));

 FUNC_1("%20.20s : %p\n", "Value/ArgList", VAR_0->common.value.arg);
 FUNC_1("%20.20s : %p\n", "Parent", VAR_0->common.parent);
 FUNC_1("%20.20s : %p\n", "NextOp", VAR_0->common.next);
}
