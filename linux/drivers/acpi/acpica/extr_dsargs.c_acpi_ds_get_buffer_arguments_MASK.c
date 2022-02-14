
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int aml_start; int aml_length; struct acpi_namespace_node* node; } ;
struct TYPE_3__ {int flags; } ;
union acpi_operand_object {TYPE_2__ buffer; TYPE_1__ common; } ;
struct acpi_namespace_node {int dummy; } ;
typedef int acpi_status ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,union acpi_operand_object*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct acpi_namespace_node*,struct acpi_namespace_node*,int ,int ) ;
 int VAR_5 ;
 int FUNC_4 (int ) ;

acpi_status FUNC_5(union acpi_operand_object *VAR_6)
{
 struct acpi_namespace_node *VAR_7;
 acpi_status VAR_8;

 FUNC_2(VAR_5, VAR_6);

 if (VAR_6->common.flags & VAR_4) {
  FUNC_4(VAR_3);
 }



 VAR_7 = VAR_6->buffer.node;
 if (!VAR_7) {
  FUNC_1((VAR_2,
       "No pointer back to namespace node in buffer object %p",
       VAR_6));
  FUNC_4(VAR_1);
 }

 FUNC_0((VAR_0, "Buffer Arg Init\n"));



 VAR_8 = FUNC_3(VAR_7, VAR_7,
        VAR_6->buffer.aml_length,
        VAR_6->buffer.aml_start);
 FUNC_4(VAR_8);
}
