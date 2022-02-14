
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int aml_opcode; } ;
union acpi_parse_object {TYPE_4__ common; } ;
struct TYPE_11__ {int opcode; scalar_t__ loop_timeout; int package_end; int aml_predicate_start; } ;
union acpi_generic_state {TYPE_5__ control; } ;
typedef scalar_t__ u64 ;
struct TYPE_9__ {int pkg_end; int aml; } ;
struct acpi_walk_state {int last_predicate; TYPE_6__* control_state; TYPE_3__ parser_state; } ;
typedef int acpi_status ;
struct TYPE_8__ {int state; } ;
struct TYPE_7__ {int aml_predicate_start; } ;
struct TYPE_12__ {TYPE_2__ common; TYPE_1__ control; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;




 int VAR_6 ;
 scalar_t__ FUNC_2 () ;
 union acpi_generic_state* FUNC_3 () ;
 int FUNC_4 (TYPE_6__**,union acpi_generic_state*) ;
 int VAR_7 ;

acpi_status
FUNC_5(struct acpi_walk_state *VAR_8,
         union acpi_parse_object *VAR_9)
{
 acpi_status VAR_10 = VAR_5;
 union acpi_generic_state *VAR_11;

 FUNC_1(VAR_7);

 FUNC_0((VAR_2, "Op=%p Opcode=%2.2X State=%p\n",
     VAR_9, VAR_9->common.aml_opcode, VAR_8));

 switch (VAR_9->common.aml_opcode) {
 case 128:




  if (VAR_8->control_state) {
   if (VAR_8->control_state->control.
       aml_predicate_start ==
       (VAR_8->parser_state.aml - 1)) {



    VAR_8->control_state->common.state =
        VAR_1;
    break;
   }
  }



 case 130:





  VAR_11 = FUNC_3();
  if (!VAR_11) {
   VAR_10 = VAR_4;
   break;
  }




  VAR_11->control.aml_predicate_start =
      VAR_8->parser_state.aml - 1;
  VAR_11->control.package_end =
      VAR_8->parser_state.pkg_end;
  VAR_11->control.opcode = VAR_9->common.aml_opcode;
  VAR_11->control.loop_timeout = FUNC_2() +
      (u64)(VAR_6 * VAR_0);



  FUNC_4(&VAR_8->control_state,
        VAR_11);
  break;

 case 131:




  if (VAR_8->last_predicate) {
   VAR_10 = VAR_3;
  }

  break;

 case 129:

  break;

 default:

  break;
 }

 return (VAR_10);
}
