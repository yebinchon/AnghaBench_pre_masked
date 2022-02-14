
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int length; int address; int space_id; } ;
struct TYPE_7__ {int aml_start; int aml_length; } ;
struct TYPE_6__ {struct acpi_namespace_node* node; } ;
struct TYPE_5__ {int flags; } ;
union acpi_operand_object {TYPE_4__ region; TYPE_3__ extra; TYPE_2__ bank_field; TYPE_1__ common; } ;
struct acpi_namespace_node {int parent; } ;
typedef int acpi_status ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,union acpi_operand_object*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (struct acpi_namespace_node*,int ,int ,int ) ;
 union acpi_operand_object* FUNC_5 (union acpi_operand_object*) ;
 int FUNC_6 (int ,int ,int ,struct acpi_namespace_node*) ;
 int FUNC_7 (int ,struct acpi_namespace_node*,int *) ;
 int FUNC_8 (struct acpi_namespace_node*) ;
 int VAR_4 ;
 int FUNC_9 (int ) ;

acpi_status
FUNC_10(union acpi_operand_object *VAR_5)
{
 union acpi_operand_object *VAR_6;
 struct acpi_namespace_node *VAR_7;
 acpi_status VAR_8;

 FUNC_3(VAR_4, VAR_5);

 if (VAR_5->common.flags & VAR_3) {
  FUNC_9(VAR_2);
 }



 VAR_6 = FUNC_5(VAR_5);
 VAR_7 = VAR_5->bank_field.node;

 FUNC_0(FUNC_7
   (VAR_1, VAR_7, ((void*)0)));

 FUNC_1((VAR_0, "[%4.4s] BankField Arg Init\n",
     FUNC_8(VAR_7)));



 VAR_8 = FUNC_4(VAR_7, VAR_7->parent,
        VAR_6->extra.aml_length,
        VAR_6->extra.aml_start);
 if (FUNC_2(VAR_8)) {
  FUNC_9(VAR_8);
 }

 VAR_8 = FUNC_6(VAR_5->region.space_id,
        VAR_5->region.address,
        VAR_5->region.length, VAR_7);
 FUNC_9(VAR_8);
}
