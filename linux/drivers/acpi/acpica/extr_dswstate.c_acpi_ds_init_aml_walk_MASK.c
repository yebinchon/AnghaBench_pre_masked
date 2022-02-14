
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct acpi_namespace_node* node; union acpi_parse_object* parent; } ;
union acpi_parse_object {TYPE_1__ common; } ;
typedef int u8 ;
typedef int u32 ;
struct acpi_parse_state {struct acpi_namespace_node* start_node; union acpi_parse_object* start_op; int * pkg_end; int * aml_end; int * aml_start; int * aml; } ;
struct acpi_walk_state {int params; int method_desc; struct acpi_namespace_node* method_node; int walk_type; struct acpi_parse_state parser_state; int * caller_return_desc; int pass_number; int * next_op; } ;
struct acpi_namespace_node {int type; } ;
struct acpi_evaluate_info {int return_object; int parameters; } ;
typedef int acpi_status ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct acpi_walk_state*,int ) ;
 int FUNC_3 (int ,int ,struct acpi_walk_state*) ;
 int FUNC_4 (struct acpi_namespace_node*,int ,struct acpi_walk_state*) ;
 int FUNC_5 (struct acpi_namespace_node*) ;
 int FUNC_6 (struct acpi_parse_state*,union acpi_parse_object*) ;
 int VAR_3 ;
 int FUNC_7 (int ) ;

acpi_status
FUNC_8(struct acpi_walk_state *VAR_4,
        union acpi_parse_object *VAR_5,
        struct acpi_namespace_node *VAR_6,
        u8 * VAR_7,
        u32 VAR_8,
        struct acpi_evaluate_info *VAR_9, u8 VAR_10)
{
 acpi_status VAR_11;
 struct acpi_parse_state *VAR_12 = &VAR_4->parser_state;
 union acpi_parse_object *VAR_13;

 FUNC_1(VAR_3);

 VAR_4->parser_state.aml =
     VAR_4->parser_state.aml_start = VAR_7;
 VAR_4->parser_state.aml_end =
     VAR_4->parser_state.pkg_end = VAR_7 + VAR_8;



 VAR_4->next_op = ((void*)0);
 VAR_4->pass_number = VAR_10;

 if (VAR_9) {
  VAR_4->params = VAR_9->parameters;
  VAR_4->caller_return_desc = &VAR_9->return_object;
 }

 VAR_11 = FUNC_6(&VAR_4->parser_state, VAR_5);
 if (FUNC_0(VAR_11)) {
  FUNC_7(VAR_11);
 }

 if (VAR_6) {
  VAR_4->parser_state.start_node = VAR_6;
  VAR_4->walk_type = VAR_2;
  VAR_4->method_node = VAR_6;
  VAR_4->method_desc =
      FUNC_5(VAR_6);



  VAR_11 =
      FUNC_4(VAR_6, VAR_1,
          VAR_4);
  if (FUNC_0(VAR_11)) {
   FUNC_7(VAR_11);
  }



  VAR_11 = FUNC_3(VAR_4->params,
             VAR_0,
             VAR_4);
  if (FUNC_0(VAR_11)) {
   FUNC_7(VAR_11);
  }
 } else {






  VAR_13 = VAR_12->start_op;
  while (VAR_13 && !VAR_13->common.node) {
   VAR_13 = VAR_13->common.parent;
  }

  if (!VAR_13) {
   VAR_12->start_node = ((void*)0);
  } else {
   VAR_12->start_node = VAR_13->common.node;
  }

  if (VAR_12->start_node) {



   VAR_11 =
       FUNC_4(VAR_12->start_node,
           VAR_12->start_node->
           type, VAR_4);
   if (FUNC_0(VAR_11)) {
    FUNC_7(VAR_11);
   }
  }
 }

 VAR_11 = FUNC_2(VAR_4, VAR_10);
 FUNC_7(VAR_11);
}
