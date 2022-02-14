
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int aml; } ;
union acpi_parse_object {TYPE_1__ common; } ;
typedef scalar_t__ u32 ;
struct TYPE_4__ {int aml_start; } ;
struct acpi_walk_state {scalar_t__ user_breakpoint; TYPE_2__ parser_state; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,...) ;
 scalar_t__ FUNC_2 (char*,int *,int) ;

void
FUNC_3(char *VAR_0,
         struct acpi_walk_state *VAR_1,
         union acpi_parse_object *VAR_2)
{
 u32 VAR_3;
 u32 VAR_4;

 if (!VAR_2) {
  FUNC_1("There is no method currently executing\n");
  return;
 }



 VAR_3 = FUNC_2(VAR_0, ((void*)0), 16);
 VAR_4 = (u32)FUNC_0(VAR_2->common.aml,
     VAR_1->parser_state.aml_start);
 if (VAR_3 <= VAR_4) {
  FUNC_1("Breakpoint %X is beyond current address %X\n",
          VAR_3, VAR_4);
 }



 VAR_1->user_breakpoint = VAR_3;
 FUNC_1("Breakpoint set at AML offset %X\n", VAR_3);
}
