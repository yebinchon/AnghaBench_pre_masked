
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct acpi_walk_state {size_t num_operands; int ** operands; } ;


 int FUNC_0 (int ,struct acpi_walk_state*) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;

void FUNC_2(struct acpi_walk_state *VAR_2)
{
 u32 VAR_3;

 FUNC_0(VAR_0, VAR_2);



 for (VAR_3 = 0; VAR_3 < VAR_2->num_operands; VAR_3++) {




  FUNC_1(VAR_2->operands[VAR_3]);
  VAR_2->operands[VAR_3] = ((void*)0);
 }

 VAR_2->num_operands = 0;
 VAR_1;
}
