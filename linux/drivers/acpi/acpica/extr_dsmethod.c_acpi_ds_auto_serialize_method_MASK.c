
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {struct acpi_namespace_node* node; } ;
union acpi_parse_object {TYPE_2__ common; } ;
struct TYPE_6__ {int aml_length; int aml_start; } ;
union acpi_operand_object {TYPE_3__ method; } ;
struct acpi_walk_state {int descending_callback; } ;
struct TYPE_4__ {int integer; } ;
struct acpi_namespace_node {int owner_id; TYPE_1__ name; } ;
typedef int acpi_status ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,struct acpi_namespace_node*) ;
 int VAR_1 ;
 int VAR_2 ;
 struct acpi_walk_state* FUNC_3 (int ,int *,int *,int *) ;
 int FUNC_4 (struct acpi_walk_state*) ;
 int VAR_3 ;
 int FUNC_5 (struct acpi_walk_state*,union acpi_parse_object*,struct acpi_namespace_node*,int ,int ,int *,int ) ;
 union acpi_parse_object* FUNC_6 (int ,int ) ;
 int FUNC_7 (union acpi_parse_object*) ;
 int FUNC_8 (union acpi_parse_object*) ;
 int FUNC_9 (struct acpi_walk_state*) ;
 int FUNC_10 (union acpi_parse_object*,int ) ;
 int FUNC_11 (struct acpi_namespace_node*) ;
 int VAR_4 ;
 int FUNC_12 (int ) ;

acpi_status
FUNC_13(struct acpi_namespace_node *VAR_5,
         union acpi_operand_object *VAR_6)
{
 acpi_status VAR_7;
 union acpi_parse_object *VAR_8 = ((void*)0);
 struct acpi_walk_state *VAR_9;

 FUNC_2(VAR_4, VAR_5);

 FUNC_0((VAR_0,
     "Method auto-serialization parse [%4.4s] %p\n",
     FUNC_11(VAR_5), VAR_5));



 VAR_8 = FUNC_6(VAR_2, VAR_6->method.aml_start);
 if (!VAR_8) {
  FUNC_12(VAR_1);
 }

 FUNC_10(VAR_8, VAR_5->name.integer);
 VAR_8->common.node = VAR_5;



 VAR_9 =
     FUNC_3(VAR_5->owner_id, ((void*)0), ((void*)0), ((void*)0));
 if (!VAR_9) {
  FUNC_8(VAR_8);
  FUNC_12(VAR_1);
 }

 VAR_7 = FUNC_5(VAR_9, VAR_8, VAR_5,
           VAR_6->method.aml_start,
           VAR_6->method.aml_length, ((void*)0), 0);
 if (FUNC_1(VAR_7)) {
  FUNC_4(VAR_9);
  FUNC_8(VAR_8);
  FUNC_12(VAR_7);
 }

 VAR_9->descending_callback = VAR_3;



 VAR_7 = FUNC_9(VAR_9);

 FUNC_7(VAR_8);
 FUNC_12(VAR_7);
}
