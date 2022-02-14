
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_table_madt {int dummy; } ;
struct acpi_table_header {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,struct acpi_table_header**) ;

__attribute__((used)) static struct acpi_table_madt *FUNC_2(void)
{
 static struct acpi_table_madt *VAR_1;
 static int VAR_2;

 if (!VAR_2) {
  if (FUNC_0(FUNC_1(VAR_0, 0,
     (struct acpi_table_header **)&VAR_1)))
   VAR_1 = ((void*)0);
  VAR_2++;
 }

 return VAR_1;
}
