
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int aml_opcode; } ;
union acpi_parse_object {TYPE_1__ common; } ;
struct acpi_walk_state {scalar_t__ (* ascending_callback ) (struct acpi_walk_state*) ;int arg_count; int arg_types; int parser_state; int opcode; int op_info; union acpi_parse_object* op; } ;
typedef scalar_t__ acpi_status ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,struct acpi_walk_state*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_3 (struct acpi_walk_state*,union acpi_parse_object**,scalar_t__) ;
 scalar_t__ FUNC_4 (struct acpi_walk_state*,union acpi_parse_object*) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (struct acpi_walk_state*,union acpi_parse_object*,scalar_t__) ;
 int FUNC_7 (int *,union acpi_parse_object**,int *,int *) ;
 int VAR_4 ;
 int FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (struct acpi_walk_state*) ;

acpi_status
FUNC_10(struct acpi_walk_state *VAR_5,
     union acpi_parse_object *VAR_6, acpi_status VAR_7)
{
 acpi_status VAR_8;

 FUNC_2(VAR_4, VAR_5);







 FUNC_0((VAR_0, "AML package complete at Op %p\n",
     VAR_6));
 do {
  if (VAR_6) {
   if (VAR_5->ascending_callback != ((void*)0)) {
    VAR_5->op = VAR_6;
    VAR_5->op_info =
        FUNC_5(VAR_6->common.
           aml_opcode);
    VAR_5->opcode = VAR_6->common.aml_opcode;

    VAR_7 =
        VAR_5->ascending_callback(VAR_5);
    VAR_7 =
        FUNC_6(VAR_5, VAR_6,
            VAR_7);
    if (VAR_7 == VAR_1) {
     VAR_7 =
         FUNC_3(VAR_5, &VAR_6,
        VAR_3);
     if (FUNC_1(VAR_7)) {
      FUNC_8(VAR_7);
     }
    }

    if (VAR_7 == VAR_2) {
     VAR_7 = VAR_3;


     do {
      if (VAR_6) {
       VAR_8 =
           FUNC_4
           (VAR_5, VAR_6);
       if (FUNC_1
           (VAR_8)) {
        FUNC_8
            (VAR_8);
       }
      }

      FUNC_7(&
          (VAR_5->
           parser_state),
          &VAR_6,
          &VAR_5->
          arg_types,
          &VAR_5->
          arg_count);

     } while (VAR_6);

     FUNC_8(VAR_7);
    }

    else if (FUNC_1(VAR_7)) {



     (void)
         FUNC_4(VAR_5,
             VAR_6);
     FUNC_8(VAR_7);
    }
   }

   VAR_8 = FUNC_4(VAR_5, VAR_6);
   if (FUNC_1(VAR_8)) {
    FUNC_8(VAR_8);
   }
  }

  FUNC_7(&(VAR_5->parser_state), &VAR_6,
      &VAR_5->arg_types,
      &VAR_5->arg_count);

 } while (VAR_6);

 FUNC_8(VAR_7);
}
