
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {union acpi_generic_state* next; } ;
union acpi_generic_state {TYPE_1__ common; } ;
struct TYPE_4__ {scalar_t__ scope; } ;
struct acpi_walk_state {scalar_t__ descriptor_type; union acpi_generic_state* results; union acpi_generic_state* scope_info; union acpi_generic_state* control_state; TYPE_2__ parser_state; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct acpi_walk_state*) ;
 int FUNC_2 (int ,struct acpi_walk_state*) ;
 int VAR_1 ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (union acpi_generic_state*) ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_5(struct acpi_walk_state *VAR_4)
{
 union acpi_generic_state *VAR_5;

 FUNC_2(VAR_2, VAR_4);

 if (!VAR_4) {
  VAR_3;
 }

 if (VAR_4->descriptor_type != VAR_0) {
  FUNC_0((VAR_1, "%p is not a valid walk state",
       VAR_4));
  VAR_3;
 }



 if (VAR_4->parser_state.scope) {
  FUNC_0((VAR_1, "%p walk still has a scope list",
       VAR_4));
  FUNC_3(&VAR_4->parser_state);
 }



 while (VAR_4->control_state) {
  VAR_5 = VAR_4->control_state;
  VAR_4->control_state = VAR_5->common.next;

  FUNC_4(VAR_5);
 }



 while (VAR_4->scope_info) {
  VAR_5 = VAR_4->scope_info;
  VAR_4->scope_info = VAR_5->common.next;

  FUNC_4(VAR_5);
 }



 while (VAR_4->results) {
  VAR_5 = VAR_4->results;
  VAR_4->results = VAR_5->common.next;

  FUNC_4(VAR_5);
 }

 FUNC_1(VAR_4);
 VAR_3;
}
