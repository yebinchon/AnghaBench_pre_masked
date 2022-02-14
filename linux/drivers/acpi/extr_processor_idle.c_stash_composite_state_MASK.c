
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_lpi_states_array {int composite_states_size; struct acpi_lpi_state** composite_states; } ;
struct acpi_lpi_state {int dummy; } ;



__attribute__((used)) static void FUNC_0(struct acpi_lpi_states_array *VAR_0,
      struct acpi_lpi_state *VAR_1)
{
 VAR_0->composite_states[VAR_0->composite_states_size++] = VAR_1;
}
