
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union acpi_generic_state {int dummy; } acpi_generic_state ;
struct acpi_walk_state {scalar_t__ result_size; int result_count; int * results; } ;
typedef int acpi_status ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (union acpi_generic_state*) ;
 union acpi_generic_state* FUNC_4 (int **) ;
 int VAR_6 ;

__attribute__((used)) static acpi_status FUNC_5(struct acpi_walk_state *VAR_7)
{
 union acpi_generic_state *VAR_8;

 FUNC_2(VAR_6);



 if (VAR_7->results == ((void*)0)) {
  FUNC_0((VAR_0,
      "Result stack underflow - State=%p\n",
      VAR_7));
  return (VAR_3);
 }

 if (VAR_7->result_size < VAR_1) {
  FUNC_1((VAR_4, "Insufficient result stack size"));
  return (VAR_2);
 }

 VAR_8 = FUNC_4(&VAR_7->results);
 FUNC_3(VAR_8);



 VAR_7->result_size -= VAR_1;

 FUNC_0((VAR_0,
     "Result=%p RemainingResults=%X State=%p\n",
     VAR_8, VAR_7->result_count, VAR_7));

 return (VAR_5);
}
