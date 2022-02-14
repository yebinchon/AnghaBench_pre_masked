
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_processor {int id; int handle; int performance; } ;


 int FUNC_0 (struct acpi_processor*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_0 ;

void FUNC_3(struct acpi_processor *VAR_1, int VAR_2)
{
 int VAR_3;

 if (VAR_0 || !VAR_1->performance) {




  if (VAR_2)
   FUNC_1(VAR_1->handle, 1);
  return;
 }

 VAR_3 = FUNC_0(VAR_1);




 if (VAR_2) {
  if (VAR_3 < 0)
   FUNC_1(VAR_1->handle, 1);
  else
   FUNC_1(VAR_1->handle, 0);
 }
 if (VAR_3 >= 0)
  FUNC_2(VAR_1->id);
}
