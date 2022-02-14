
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int flags; int length; int address; int space_id; struct acpi_namespace_node* node; } ;
struct TYPE_3__ {int aml_start; int aml_length; int scope_node; } ;
union acpi_operand_object {TYPE_2__ region; TYPE_1__ extra; } ;
struct acpi_namespace_node {int dummy; } ;
typedef int acpi_status ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,union acpi_operand_object*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (struct acpi_namespace_node*,int ,int ,int ) ;
 union acpi_operand_object* FUNC_5 (union acpi_operand_object*) ;
 int FUNC_6 (int ,int ,int ,struct acpi_namespace_node*) ;
 int FUNC_7 (int ,struct acpi_namespace_node*,int *) ;
 int FUNC_8 (struct acpi_namespace_node*) ;
 int VAR_5 ;
 int FUNC_9 (int ) ;

acpi_status FUNC_10(union acpi_operand_object *VAR_6)
{
 struct acpi_namespace_node *VAR_7;
 acpi_status VAR_8;
 union acpi_operand_object *VAR_9;

 FUNC_3(VAR_5, VAR_6);

 if (VAR_6->region.flags & VAR_4) {
  FUNC_9(VAR_3);
 }

 VAR_9 = FUNC_5(VAR_6);
 if (!VAR_9) {
  FUNC_9(VAR_2);
 }



 VAR_7 = VAR_6->region.node;

 FUNC_0(FUNC_7
   (VAR_1, VAR_7, ((void*)0)));

 FUNC_1((VAR_0,
     "[%4.4s] OpRegion Arg Init at AML %p\n",
     FUNC_8(VAR_7),
     VAR_9->extra.aml_start));



 VAR_8 = FUNC_4(VAR_7, VAR_9->extra.scope_node,
        VAR_9->extra.aml_length,
        VAR_9->extra.aml_start);
 if (FUNC_2(VAR_8)) {
  FUNC_9(VAR_8);
 }

 VAR_8 = FUNC_6(VAR_6->region.space_id,
        VAR_6->region.address,
        VAR_6->region.length, VAR_7);
 FUNC_9(VAR_8);
}
