
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef union acpi_parse_object {int dummy; } acpi_parse_object ;
typedef int u64 ;
struct acpi_walk_state {int implicit_return_obj; int method_desc; int parser_state; scalar_t__ return_desc; int parse_flags; int method_is_nested; int method_pathname; } ;
struct acpi_evaluate_info {scalar_t__ return_object; TYPE_6__* obj_desc; int full_pathname; int pass_number; TYPE_4__* node; } ;
typedef int acpi_status ;
struct TYPE_8__ {int (* implementation ) (struct acpi_walk_state*) ;} ;
struct TYPE_9__ {int info_flags; TYPE_2__ dispatch; int aml_length; int aml_start; int owner_id; } ;
struct TYPE_11__ {TYPE_3__ method; } ;
struct TYPE_7__ {int ascii; } ;
struct TYPE_10__ {TYPE_1__ name; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (TYPE_4__*,TYPE_6__*,int *) ;
 struct acpi_walk_state* FUNC_5 (int ,int *,int *,int *) ;
 int FUNC_6 (struct acpi_walk_state*) ;
 int FUNC_7 (struct acpi_walk_state*,union acpi_parse_object*,TYPE_4__*,int ,int ,struct acpi_evaluate_info*,int ) ;
 int FUNC_8 (struct acpi_walk_state*) ;
 int FUNC_9 (int ,struct acpi_walk_state*) ;
 scalar_t__ VAR_11 ;
 int FUNC_10 (int *) ;
 union acpi_parse_object* FUNC_11 (int ) ;
 int FUNC_12 (union acpi_parse_object*) ;
 int FUNC_13 (struct acpi_walk_state*) ;
 int FUNC_14 (struct acpi_evaluate_info*,int ) ;
 int FUNC_15 () ;
 int FUNC_16 (int ) ;
 int VAR_12 ;
 int FUNC_17 (int ) ;
 int FUNC_18 (struct acpi_walk_state*) ;

acpi_status FUNC_19(struct acpi_evaluate_info *VAR_13)
{
 acpi_status VAR_14;
 union acpi_parse_object *VAR_15;
 struct acpi_walk_state *VAR_16;

 FUNC_3(VAR_12);



 FUNC_15();



 if (!VAR_13 || !VAR_13->node) {
  FUNC_17(VAR_7);
 }



 VAR_14 =
     FUNC_4(VAR_13->node, VAR_13->obj_desc, ((void*)0));
 if (FUNC_2(VAR_14)) {
  FUNC_17(VAR_14);
 }




 FUNC_14(VAR_13, VAR_10);




 FUNC_0((VAR_0,
     "**** Begin Method Parse/Execute [%4.4s] **** Node=%p Obj=%p\n",
     VAR_13->node->name.ascii, VAR_13->node, VAR_13->obj_desc));



 VAR_15 = FUNC_11(VAR_13->obj_desc->method.aml_start);
 if (!VAR_15) {
  VAR_14 = VAR_6;
  goto cleanup;
 }



 VAR_13->pass_number = VAR_1;
 VAR_16 =
     FUNC_5(VAR_13->obj_desc->method.owner_id, ((void*)0),
          ((void*)0), ((void*)0));
 if (!VAR_16) {
  VAR_14 = VAR_6;
  goto cleanup;
 }

 VAR_14 = FUNC_7(VAR_16, VAR_15, VAR_13->node,
           VAR_13->obj_desc->method.aml_start,
           VAR_13->obj_desc->method.aml_length, VAR_13,
           VAR_13->pass_number);
 if (FUNC_2(VAR_14)) {
  FUNC_6(VAR_16);
  goto cleanup;
 }

 VAR_16->method_pathname = VAR_13->full_pathname;
 VAR_16->method_is_nested = VAR_8;

 if (VAR_13->obj_desc->method.info_flags & VAR_3) {
  VAR_16->parse_flags |= VAR_4;
 }



 if (VAR_13->obj_desc->method.info_flags & VAR_2) {
  VAR_14 =
      VAR_13->obj_desc->method.dispatch.implementation(VAR_16);
  VAR_13->return_object = VAR_16->return_desc;



  FUNC_8(VAR_16);
  FUNC_10(&VAR_16->parser_state);
  FUNC_9(VAR_16->method_desc,
       VAR_16);
  FUNC_6(VAR_16);
  goto cleanup;
 }





 if (VAR_11) {
  VAR_16->implicit_return_obj =
      FUNC_16((u64) 0);
  if (!VAR_16->implicit_return_obj) {
   VAR_14 = VAR_6;
   FUNC_6(VAR_16);
   goto cleanup;
  }
 }



 VAR_14 = FUNC_13(VAR_16);



cleanup:
 FUNC_12(VAR_15);



 FUNC_14(VAR_13, VAR_9);



 if (FUNC_2(VAR_14)) {
  FUNC_17(VAR_14);
 }





 if (VAR_13->return_object) {
  FUNC_0((VAR_0, "Method returned ObjDesc=%p\n",
      VAR_13->return_object));
  FUNC_1(VAR_13->return_object);

  VAR_14 = VAR_5;
 }

 FUNC_17(VAR_14);
}
