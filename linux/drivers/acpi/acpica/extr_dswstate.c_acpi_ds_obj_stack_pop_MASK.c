
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct acpi_walk_state {size_t num_operands; int ** operands; } ;
typedef int acpi_status ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

acpi_status
FUNC_3(u32 VAR_5, struct acpi_walk_state *VAR_6)
{
 u32 VAR_7;

 FUNC_2(VAR_4);

 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {



  if (VAR_6->num_operands == 0) {
   FUNC_1((VAR_1,
        "Object stack underflow! Count=%X State=%p #Ops=%u",
        VAR_5, VAR_6,
        VAR_6->num_operands));
   return (VAR_3);
  }



  VAR_6->num_operands--;
  VAR_6->operands[VAR_6->num_operands] = ((void*)0);
 }

 FUNC_0((VAR_0, "Count=%X State=%p #Ops=%u\n",
     VAR_5, VAR_6, VAR_6->num_operands));

 return (VAR_2);
}
