
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {char* path; int name; } ;
struct TYPE_10__ {struct acpi_namespace_node* node; } ;
union acpi_parse_object {TYPE_4__ named; TYPE_3__ common; } ;
typedef int u8 ;
typedef int u32 ;
struct acpi_walk_state {int opcode; int parse_flags; int parser_state; int aml; TYPE_6__* scope_info; int namespace_override; int method_node; struct acpi_namespace_node* deferred_node; TYPE_1__* op_info; union acpi_parse_object* op; } ;
struct TYPE_12__ {int integer; } ;
struct acpi_namespace_node {int type; int flags; TYPE_5__ name; } ;
typedef int acpi_status ;
typedef int acpi_object_type ;
struct TYPE_9__ {int value; } ;
struct TYPE_13__ {TYPE_2__ common; } ;
struct TYPE_8__ {int flags; int object_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_6__*,char*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,union acpi_parse_object*) ;
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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;

 int VAR_17 ;
 int FUNC_5 (union acpi_parse_object*,char*,int,int ,int ) ;
 int FUNC_6 (struct acpi_namespace_node*,int,struct acpi_walk_state*) ;
 struct acpi_namespace_node* VAR_18 ;
 int FUNC_7 (TYPE_6__*,char*,int,int ,int ,struct acpi_walk_state*,struct acpi_namespace_node**) ;
 int FUNC_8 (int) ;
 union acpi_parse_object* FUNC_9 (int const,int ) ;
 int FUNC_10 (int ,union acpi_parse_object*) ;
 char* FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct acpi_namespace_node*) ;
 int FUNC_14 (int) ;
 int VAR_19 ;
 int FUNC_15 (int ) ;

acpi_status
FUNC_16(struct acpi_walk_state *VAR_20,
         union acpi_parse_object **VAR_21)
{
 union acpi_parse_object *VAR_22;
 struct acpi_namespace_node *VAR_23;
 acpi_status VAR_24;
 acpi_object_type VAR_25;
 char *VAR_26;
 u32 VAR_27;

 FUNC_4(VAR_19, VAR_20->op);

 VAR_22 = VAR_20->op;
 FUNC_0((VAR_0, "Op=%p State=%p\n", VAR_22,
     VAR_20));



 if (VAR_22) {
  if (!(VAR_20->op_info->flags & VAR_16)) {
   *VAR_21 = VAR_22;
   FUNC_15(VAR_15);
  }



  if (VAR_22->common.node) {
   *VAR_21 = VAR_22;
   FUNC_15(VAR_15);
  }
 }

 VAR_26 = FUNC_11(&VAR_20->parser_state);



 VAR_25 = VAR_20->op_info->object_type;

 FUNC_0((VAR_0,
     "State=%p Op=%p [%s]\n", VAR_20, VAR_22,
     FUNC_14(VAR_25)));

 switch (VAR_20->opcode) {
 case 128:





  VAR_24 =
      FUNC_7(VAR_20->scope_info, VAR_26, VAR_25,
       VAR_2, VAR_7,
       VAR_20, &(VAR_23));
  if (FUNC_3(VAR_24)) {
   FUNC_2(VAR_20->scope_info, VAR_26,
          VAR_24);
   FUNC_15(VAR_24);
  }





  switch (VAR_23->type) {
  case 138:
  case 134:
  case 136:
  case 132:
  case 131:
  case 129:


   break;

  case 135:
  case 130:
  case 137:
   FUNC_0((VAR_1,
       "Type override - [%4.4s] had invalid type (%s) "
       "for Scope operator, changed to type ANY\n",
       FUNC_13(VAR_23),
       FUNC_14(VAR_23->type)));

   VAR_23->type = 138;
   VAR_20->scope_info->common.value = 138;
   break;

  case 133:




   if ((VAR_23 == VAR_18) &&
       (VAR_20->
        parse_flags & VAR_9)) {
    break;
   }



  default:



   FUNC_1((VAR_12,
        "Invalid type (%s) for target of "
        "Scope operator [%4.4s] (Cannot override)",
        FUNC_14(VAR_23->type),
        FUNC_13(VAR_23)));

   FUNC_15(VAR_11);
  }
  break;

 default:
  if (VAR_20->deferred_node) {



   VAR_23 = VAR_20->deferred_node;
   VAR_24 = VAR_15;
   break;
  }





  if (VAR_20->method_node) {
   VAR_23 = ((void*)0);
   VAR_24 = VAR_15;
   break;
  }

  VAR_27 = VAR_5;
  if ((VAR_20->opcode != 128) &&
      (!(VAR_20->parse_flags & VAR_8))) {
   if (VAR_20->namespace_override) {
    VAR_27 |= VAR_6;
    FUNC_0((VAR_0,
        "[%s] Override allowed\n",
        FUNC_14
        (VAR_25)));
   } else {
    VAR_27 |= VAR_4;
    FUNC_0((VAR_0,
        "[%s] Cannot already exist\n",
        FUNC_14
        (VAR_25)));
   }
  } else {
   FUNC_0((VAR_0,
       "[%s] Both Find or Create allowed\n",
       FUNC_14(VAR_25)));
  }







  VAR_24 =
      FUNC_7(VAR_20->scope_info, VAR_26, VAR_25,
       VAR_3, VAR_27, VAR_20,
       &VAR_23);
  if (FUNC_3(VAR_24)) {
   if (VAR_24 == VAR_10) {



    if (VAR_23->flags & VAR_17) {




     VAR_23->flags &= ~VAR_17;
     VAR_23->type = (u8) VAR_25;



     if (FUNC_8(VAR_25)) {
      VAR_24 =
          FUNC_6
          (VAR_23, VAR_25,
           VAR_20);
      if (FUNC_3(VAR_24)) {
       FUNC_15
           (VAR_24);
      }
     }

     VAR_24 = VAR_15;
    }
   }

   if (FUNC_3(VAR_24)) {
    FUNC_2(VAR_20->scope_info,
           VAR_26, VAR_24);
    FUNC_15(VAR_24);
   }
  }
  break;
 }



 if (!VAR_22) {



  VAR_22 = FUNC_9(VAR_20->opcode, VAR_20->aml);
  if (!VAR_22) {
   FUNC_15(VAR_14);
  }
 }







 if (VAR_23) {




  VAR_22->common.node = VAR_23;
  VAR_22->named.name = VAR_23->name.integer;
 }

 FUNC_10(FUNC_12(&VAR_20->parser_state),
      VAR_22);
 *VAR_21 = VAR_22;
 FUNC_15(VAR_24);
}
