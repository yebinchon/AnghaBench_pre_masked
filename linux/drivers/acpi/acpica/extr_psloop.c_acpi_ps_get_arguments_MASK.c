
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {void* length; int * data; } ;
struct TYPE_12__ {int aml_opcode; TYPE_2__* parent; int aml_op_name; } ;
union acpi_parse_object {TYPE_4__ named; TYPE_3__ common; } ;
typedef int u8 ;
typedef void* u32 ;
struct TYPE_16__ {int * pkg_end; int * aml; } ;
struct acpi_walk_state {TYPE_7__ parser_state; TYPE_6__* control_state; int arg_count; int pass_number; int arg_types; int * aml; } ;
typedef int acpi_status ;
struct TYPE_14__ {int * package_end; } ;
struct TYPE_15__ {TYPE_5__ control; } ;
struct TYPE_10__ {int aml_opcode; } ;
struct TYPE_11__ {TYPE_1__ common; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,struct acpi_walk_state*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;





 int VAR_4 ;






 int FUNC_3 (struct acpi_walk_state*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (union acpi_parse_object*,union acpi_parse_object*) ;
 int FUNC_7 (struct acpi_walk_state*,TYPE_7__*,int ,union acpi_parse_object**) ;
 int FUNC_8 (struct acpi_walk_state*,TYPE_7__*,union acpi_parse_object*,int ) ;
 int FUNC_9 (TYPE_7__*,int ,union acpi_parse_object*) ;
 int VAR_5 ;
 int FUNC_10 (int ) ;

__attribute__((used)) static acpi_status
FUNC_11(struct acpi_walk_state *VAR_6,
        u8 * VAR_7, union acpi_parse_object *VAR_8)
{
 acpi_status VAR_9 = VAR_3;
 union acpi_parse_object *VAR_10 = ((void*)0);

 FUNC_2(VAR_5, VAR_6);

 FUNC_0((VAR_0,
     "Get arguments for opcode [%s]\n",
     VAR_8->common.aml_op_name));

 switch (VAR_8->common.aml_opcode) {
 case 137:
 case 128:
 case 136:
 case 132:
 case 131:



  FUNC_9(&(VAR_6->parser_state),
         FUNC_4(VAR_6->
         arg_types),
         VAR_8);
  break;

 case 135:

  VAR_9 = FUNC_8(VAR_6,
         &(VAR_6->parser_state),
         VAR_8,
         VAR_2);
  if (FUNC_1(VAR_9)) {
   FUNC_10(VAR_9);
  }

  VAR_6->arg_types = 0;
  break;

 default:



  while (FUNC_4(VAR_6->arg_types) &&
         !VAR_6->arg_count) {
   VAR_6->aml = VAR_6->parser_state.aml;

   switch (VAR_8->common.aml_opcode) {
   case 134:
   case 138:
   case 133:
   case 130:
   case 129:

    break;

   default:

    FUNC_3(VAR_6);
    break;
   }

   VAR_9 =
       FUNC_7(VAR_6,
       &(VAR_6->parser_state),
       FUNC_4
       (VAR_6->arg_types), &VAR_10);
   if (FUNC_1(VAR_9)) {
    FUNC_10(VAR_9);
   }

   if (VAR_10) {
    FUNC_6(VAR_8, VAR_10);
   }

   FUNC_5(VAR_6->arg_types);
  }

  FUNC_0((VAR_0,
      "Final argument count: %8.8X pass %u\n",
      VAR_6->arg_count,
      VAR_6->pass_number));



  switch (VAR_8->common.aml_opcode) {
  case 134:






   VAR_8->named.data = VAR_6->parser_state.aml;
   VAR_8->named.length = (u32)
       (VAR_6->parser_state.pkg_end -
        VAR_6->parser_state.aml);



   VAR_6->parser_state.aml =
       VAR_6->parser_state.pkg_end;
   VAR_6->arg_count = 0;
   break;

  case 138:
  case 133:
  case 130:

   if ((VAR_8->common.parent) &&
       (VAR_8->common.parent->common.aml_opcode ==
        VAR_4)
       && (VAR_6->pass_number <=
    VAR_1)) {
    FUNC_0(*(VAR_0,
        "Setup Package/Buffer: Pass %u, AML Ptr: %p\n",
        VAR_6->pass_number,
        VAR_7));





    VAR_8->named.data = VAR_7;
    VAR_8->named.length = (u32)
        (VAR_6->parser_state.pkg_end -
         VAR_7);



    VAR_6->parser_state.aml =
        VAR_6->parser_state.pkg_end;
    VAR_6->arg_count = 0;
   }
   break;

  case 129:

   if (VAR_6->control_state) {
    VAR_6->control_state->control.package_end =
        VAR_6->parser_state.pkg_end;
   }
   break;

  default:



   break;
  }

  break;
 }

 FUNC_10(VAR_3);
}
