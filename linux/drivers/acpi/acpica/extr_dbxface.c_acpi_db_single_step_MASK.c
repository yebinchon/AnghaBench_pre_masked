
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ aml_opcode; union acpi_parse_object* next; int aml; } ;
union acpi_parse_object {TYPE_4__ common; } ;
typedef scalar_t__ u32 ;
struct TYPE_5__ {int aml_start; } ;
struct acpi_walk_state {scalar_t__ method_breakpoint; scalar_t__ user_breakpoint; TYPE_3__* control_state; TYPE_1__ parser_state; } ;
typedef int acpi_status ;
struct TYPE_6__ {scalar_t__ value; } ;
struct TYPE_7__ {TYPE_2__ common; } ;


 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 int FUNC_2 (struct acpi_walk_state*,union acpi_parse_object*) ;
 int FUNC_3 (struct acpi_walk_state*,union acpi_parse_object*) ;
 scalar_t__ VAR_12 ;
 int FUNC_4 (struct acpi_walk_state*,int ,int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 void* VAR_13 ;
 void* VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 void* VAR_17 ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (scalar_t__) ;

acpi_status
FUNC_10(struct acpi_walk_state *VAR_18,
      union acpi_parse_object *VAR_19, u32 VAR_20)
{
 union acpi_parse_object *VAR_21;
 acpi_status VAR_22 = VAR_4;
 u32 VAR_23;
 u32 VAR_24;

 FUNC_0();


 if (VAR_16 != FUNC_7()) {
  return (VAR_4);
 }




 if (VAR_13) {
  VAR_13 = VAR_10;
  return (VAR_3);
 }

 VAR_24 = (u32)FUNC_1(VAR_19->common.aml,
     VAR_18->parser_state.aml_start);



 if (VAR_18->method_breakpoint &&
     (VAR_18->method_breakpoint <= VAR_24)) {




  FUNC_8("***Break*** at AML offset %X\n", VAR_24);
  VAR_14 = VAR_11;
  VAR_17 = VAR_10;
  VAR_18->method_breakpoint = 0;
 }



 else if (VAR_18->user_breakpoint &&
   (VAR_18->user_breakpoint == VAR_24)) {
  FUNC_8("***UserBreakpoint*** at AML offset %X\n",
          VAR_24);
  VAR_14 = VAR_11;
  VAR_17 = VAR_10;
  VAR_18->method_breakpoint = 0;
 }





 if (VAR_19->common.aml_opcode == VAR_8) {
  return (VAR_4);
 }

 switch (VAR_20) {
 case 128:
 case 129:

  return (VAR_4);

 default:


  break;
 }




 if ((VAR_15) ||
     (VAR_14) || (VAR_12 & VAR_1)) {
  if ((VAR_15) ||
      (VAR_12 & VAR_1)) {
   FUNC_8
       ("\nAML Debug: Next AML Opcode to execute:\n");
  }






  VAR_23 = VAR_12;
  VAR_12 &= ~(VAR_1 | VAR_0);
  VAR_21 = VAR_19->common.next;
  VAR_19->common.next = ((void*)0);
  FUNC_8("AML Opcode: %4.4X %s\n", VAR_19->common.aml_opcode,
          FUNC_9(VAR_19->common.aml_opcode));


  if ((VAR_19->common.aml_opcode == VAR_6) ||
      (VAR_19->common.aml_opcode == VAR_9)) {
   if (VAR_18->control_state->common.value) {
    FUNC_8
        ("Predicate = [True], IF block was executed\n");
   } else {
    FUNC_8
        ("Predicate = [False], Skipping IF block\n");
   }
  } else if (VAR_19->common.aml_opcode == VAR_5) {
   FUNC_8
       ("Predicate = [False], ELSE block was executed\n");
  }



  VAR_19->common.next = VAR_21;
  FUNC_8("\n");
  if ((VAR_15) ||
      (VAR_12 & VAR_1)) {
   FUNC_8("\n");
  }
  VAR_12 = VAR_23;
 }



 if (!VAR_14) {
  return (VAR_4);
 }





 if (VAR_17) {
  if (VAR_19->common.aml_opcode != VAR_7) {



   return (VAR_4);
  }



  VAR_17 = VAR_10;
 }





 if (VAR_19->common.aml_opcode == VAR_7) {



  VAR_14 = VAR_10;





  VAR_18->method_breakpoint = 1;
 }

 FUNC_6();
 VAR_22 = FUNC_3(VAR_18, VAR_19);
 FUNC_5();



 return (VAR_22);
}
