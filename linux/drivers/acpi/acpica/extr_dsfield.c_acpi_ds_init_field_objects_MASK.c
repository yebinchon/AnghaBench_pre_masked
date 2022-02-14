
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ aml_opcode; union acpi_parse_object* next; struct acpi_namespace_node* node; } ;
struct TYPE_3__ {int name; } ;
union acpi_parse_object {TYPE_2__ common; TYPE_1__ named; } ;
typedef int u8 ;
typedef int u32 ;
struct acpi_walk_state {int parse_flags; int opcode; int scope_info; scalar_t__ method_node; } ;
struct acpi_namespace_node {int dummy; } ;
typedef scalar_t__ acpi_status ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,union acpi_parse_object*) ;
 int VAR_0 ;
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
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;



 scalar_t__ VAR_17 ;
 scalar_t__ FUNC_4 (int ,char*,int ,int ,int,struct acpi_walk_state*,struct acpi_namespace_node**) ;
 union acpi_parse_object* FUNC_5 (union acpi_parse_object*,int) ;
 int VAR_18 ;
 int FUNC_6 (scalar_t__) ;

acpi_status
FUNC_7(union acpi_parse_object *VAR_19,
      struct acpi_walk_state *VAR_20)
{
 acpi_status VAR_21;
 union acpi_parse_object *VAR_22 = ((void*)0);
 struct acpi_namespace_node *VAR_23;
 u8 VAR_24 = 0;
 u32 VAR_25;

 FUNC_3(VAR_18, VAR_19);



 if (!(VAR_20->parse_flags & VAR_7)) {
  if (VAR_20->parse_flags & VAR_6) {



   FUNC_6(VAR_16);
  }

  FUNC_0((VAR_15, "Parse deferred mode is not set"));
  FUNC_6(VAR_13);
 }





 switch (VAR_20->opcode) {
 case 129:

  VAR_22 = FUNC_5(VAR_19, 2);
  VAR_24 = VAR_11;
  break;

 case 130:

  VAR_22 = FUNC_5(VAR_19, 4);
  VAR_24 = VAR_9;
  break;

 case 128:

  VAR_22 = FUNC_5(VAR_19, 3);
  VAR_24 = VAR_10;
  break;

 default:

  FUNC_6(VAR_14);
 }



 VAR_25 = VAR_3 | VAR_1 |
     VAR_2;





 if (VAR_20->method_node &&
     !(VAR_20->parse_flags & VAR_8)) {
  VAR_25 |= VAR_5;
 }







 while (VAR_22) {




  if (VAR_22->common.aml_opcode == VAR_17) {
   VAR_21 = FUNC_4(VAR_20->scope_info,
      (char *)&VAR_22->named.name, VAR_24,
      VAR_0, VAR_25,
      VAR_20, &VAR_23);
   if (FUNC_2(VAR_21)) {
    FUNC_1(VAR_20->scope_info,
           (char *)&VAR_22->named.name,
           VAR_21);
    if (VAR_21 != VAR_12) {
     FUNC_6(VAR_21);
    }



    VAR_21 = VAR_16;
   }

   VAR_22->common.node = VAR_23;
  }



  VAR_22 = VAR_22->common.next;
 }

 FUNC_6(VAR_16);
}
