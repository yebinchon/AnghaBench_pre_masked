
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union acpi_generic_state {int dummy; } acpi_generic_state ;
struct acpi_parse_state {scalar_t__ scope; } ;


 int FUNC_0 (int ,struct acpi_parse_state*) ;
 int FUNC_1 (union acpi_generic_state*) ;
 union acpi_generic_state* FUNC_2 (scalar_t__*) ;
 int VAR_0 ;
 int VAR_1 ;

void FUNC_3(struct acpi_parse_state *VAR_2)
{
 union acpi_generic_state *VAR_3;

 FUNC_0(VAR_0, VAR_2);

 if (!VAR_2) {
  VAR_1;
 }



 while (VAR_2->scope) {
  VAR_3 = FUNC_2(&VAR_2->scope);
  FUNC_1(VAR_3);
 }

 VAR_1;
}
