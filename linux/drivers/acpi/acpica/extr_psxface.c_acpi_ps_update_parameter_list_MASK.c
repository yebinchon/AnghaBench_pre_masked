
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
typedef int u16 ;
struct acpi_evaluate_info {scalar_t__* parameters; } ;


 int FUNC_0 (scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_1(struct acpi_evaluate_info *VAR_0, u16 VAR_1)
{
 u32 VAR_2;

 if (VAR_0->parameters) {



  for (VAR_2 = 0; VAR_0->parameters[VAR_2]; VAR_2++) {



   (void)FUNC_0(VAR_0->
             parameters[VAR_2],
             VAR_1);
  }
 }
}
