
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int value; } ;
struct TYPE_3__ {int node; } ;
union acpi_generic_state {TYPE_2__ common; TYPE_1__ scope; } ;
typedef int u32 ;
struct acpi_walk_state {union acpi_generic_state* scope_info; scalar_t__ scope_depth; } ;
typedef int acpi_status ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (union acpi_generic_state*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 union acpi_generic_state* FUNC_6 (union acpi_generic_state**) ;
 int VAR_4 ;
 int FUNC_7 (int ) ;

acpi_status FUNC_8(struct acpi_walk_state *VAR_5)
{
 union acpi_generic_state *VAR_6;
 union acpi_generic_state *VAR_7;

 FUNC_2(VAR_4);




 VAR_6 = FUNC_6(&VAR_5->scope_info);
 if (!VAR_6) {
  FUNC_7(VAR_3);
 }

 VAR_5->scope_depth--;

 FUNC_0((VAR_0,
     "[%.2d] Popped scope [%4.4s] (%s), New scope -> ",
     (u32) VAR_5->scope_depth,
     FUNC_4(VAR_6->scope.node),
     FUNC_5(VAR_6->common.value)));

 VAR_7 = VAR_5->scope_info;
 if (VAR_7) {
  FUNC_1((VAR_0, "[%4.4s] (%s)\n",
          FUNC_4(VAR_7->
           scope.node),
          FUNC_5(VAR_7->
           common.value)));
 } else {
  FUNC_1((VAR_0, "%s\n",
          VAR_1));
 }

 FUNC_3(VAR_6);
 FUNC_7(VAR_2);
}
