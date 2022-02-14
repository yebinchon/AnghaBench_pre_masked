
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int value; } ;
struct TYPE_3__ {union acpi_generic_state* next; } ;
union acpi_generic_state {TYPE_2__ common; TYPE_1__ scope; } ;
struct acpi_walk_state {union acpi_generic_state* scope_info; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (union acpi_generic_state*) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;

void FUNC_4(struct acpi_walk_state *VAR_2)
{
 union acpi_generic_state *VAR_3;

 FUNC_1(VAR_1);

 while (VAR_2->scope_info) {



  VAR_3 = VAR_2->scope_info;
  VAR_2->scope_info = VAR_3->scope.next;

  FUNC_0((VAR_0,
      "Popped object type (%s)\n",
      FUNC_3(VAR_3->common.
       value)));

  FUNC_2(VAR_3);
 }
}
