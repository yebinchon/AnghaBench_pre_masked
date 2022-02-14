
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union acpi_parse_object {int dummy; } acpi_parse_object ;
struct acpi_walk_state {int parse_flags; int method_is_nested; int method_pathname; } ;
struct acpi_evaluate_info {int node; TYPE_2__* obj_desc; int full_pathname; int pass_number; } ;
typedef int acpi_status ;
struct TYPE_3__ {int info_flags; int aml_length; int aml_start; int owner_id; } ;
struct TYPE_4__ {TYPE_1__ method; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct acpi_walk_state* FUNC_2 (int ,int *,int *,int *) ;
 int FUNC_3 (struct acpi_walk_state*) ;
 int FUNC_4 (struct acpi_walk_state*,union acpi_parse_object*,int ,int ,int ,struct acpi_evaluate_info*,int ) ;
 int FUNC_5 (int ,int ,struct acpi_walk_state*) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int VAR_5 ;
 union acpi_parse_object* FUNC_8 (int ) ;
 int FUNC_9 (union acpi_parse_object*) ;
 int FUNC_10 (struct acpi_walk_state*) ;
 int VAR_6 ;
 int FUNC_11 (int ) ;

acpi_status FUNC_12(struct acpi_evaluate_info *VAR_7)
{
 acpi_status VAR_8;
 union acpi_parse_object *VAR_9 = ((void*)0);
 struct acpi_walk_state *VAR_10 = ((void*)0);

 FUNC_1(VAR_6);



 VAR_9 = FUNC_8(VAR_7->obj_desc->method.aml_start);
 if (!VAR_9) {
  VAR_8 = VAR_3;
  goto cleanup;
 }



 VAR_10 =
     FUNC_2(VAR_7->obj_desc->method.owner_id, ((void*)0),
          ((void*)0), ((void*)0));
 if (!VAR_10) {
  VAR_8 = VAR_3;
  goto cleanup;
 }

 VAR_8 = FUNC_4(VAR_10, VAR_9, VAR_7->node,
           VAR_7->obj_desc->method.aml_start,
           VAR_7->obj_desc->method.aml_length, VAR_7,
           VAR_7->pass_number);
 if (FUNC_0(VAR_8)) {
  goto cleanup;
 }

 VAR_10->method_pathname = VAR_7->full_pathname;
 VAR_10->method_is_nested = VAR_4;

 if (VAR_7->obj_desc->method.info_flags & VAR_0) {
  VAR_10->parse_flags |= VAR_1;
 }



 if (VAR_7->node && VAR_7->node != VAR_5) {
  VAR_8 =
      FUNC_5(VAR_7->node, VAR_2,
          VAR_10);
  if (FUNC_0(VAR_8)) {
   goto cleanup;
  }
 }




 FUNC_6();
 VAR_8 = FUNC_10(VAR_10);
 FUNC_7();
 VAR_10 = ((void*)0);

cleanup:
 if (VAR_10) {
  FUNC_3(VAR_10);
 }
 if (VAR_9) {
  FUNC_9(VAR_9);
 }
 FUNC_11(VAR_8);
}
