
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_6__ {int aml_start; } ;
struct acpi_walk_state {int op; int opcode; TYPE_5__* deferred_node; TYPE_3__* method_node; TYPE_1__ parser_state; int aml; } ;
typedef int acpi_status ;
typedef int acpi_name ;
struct TYPE_9__ {int integer; } ;
struct TYPE_10__ {TYPE_4__ name; } ;
struct TYPE_7__ {int integer; } ;
struct TYPE_8__ {TYPE_2__ name; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int) ;
 int VAR_0 ;
 int FUNC_4 (int,struct acpi_walk_state*) ;
 int FUNC_5 (struct acpi_walk_state*) ;
 int FUNC_6 (int,struct acpi_walk_state*,int ) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (int,int ,int ,scalar_t__,int *) ;

acpi_status
FUNC_10(acpi_status VAR_1, struct acpi_walk_state *VAR_2)
{
 u32 VAR_3;
 acpi_name VAR_4 = 0;

 FUNC_1();



 if (FUNC_3(VAR_1) || (VAR_1 & VAR_0)) {
  return (VAR_1);
 }



 if (&FUNC_9) {



  FUNC_8();





  VAR_3 = (u32)FUNC_2(VAR_2->aml,
      VAR_2->parser_state.
      aml_start);

  if (VAR_2->method_node) {
   VAR_4 = VAR_2->method_node->name.integer;
  } else if (VAR_2->deferred_node) {
   VAR_4 = VAR_2->deferred_node->name.integer;
  }

  VAR_1 = FUNC_9(VAR_1, VAR_4,
          VAR_2->opcode,
          VAR_3, ((void*)0));
  FUNC_7();
 }

 FUNC_5(VAR_2);

 if (FUNC_0(VAR_1)) {
  FUNC_6(VAR_1, VAR_2, VAR_2->op);






 }

 return (VAR_1);
}
