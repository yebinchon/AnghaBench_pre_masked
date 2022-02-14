
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_address_range {struct acpi_address_range* next; } ;


 int VAR_0 ;
 int FUNC_0 (struct acpi_address_range*) ;
 struct acpi_address_range** VAR_1 ;

void FUNC_1(void)
{
 struct acpi_address_range *VAR_2;
 struct acpi_address_range *VAR_3;
 int VAR_4;



 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  VAR_2 = VAR_1[VAR_4];

  while (VAR_2) {
   VAR_3 = VAR_2;
   VAR_2 = VAR_3->next;
   FUNC_0(VAR_3);
  }

  VAR_1[VAR_4] = ((void*)0);
 }
}
