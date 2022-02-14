
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_buffer {int member_0; char* member_1; } ;
typedef int acpi_status ;
typedef int acpi_method_name ;
typedef int * acpi_handle ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int *,char*,int **) ;
 int FUNC_3 (int *,int ,struct acpi_buffer*) ;
 int * FUNC_4 () ;
 scalar_t__ FUNC_5 () ;

__attribute__((used)) static acpi_handle FUNC_6(acpi_handle VAR_1)
{
 acpi_handle VAR_2 = ((void*)0);
 char VAR_3[255] = { 0 };
 struct acpi_buffer VAR_4 = { sizeof(VAR_3), VAR_3 };
 acpi_status VAR_5;




 VAR_5 = FUNC_2(VAR_1, "ATIF", &VAR_2);
 if (FUNC_0(VAR_5))
  goto out;

 if (FUNC_5()) {
  VAR_5 = FUNC_2(FUNC_4(), "ATIF",
      &VAR_2);
  if (FUNC_0(VAR_5))
   goto out;
 }

 FUNC_1("No ATIF handle found\n");
 return ((void*)0);
out:
 FUNC_3(VAR_2, VAR_0, &VAR_4);
 FUNC_1("Found ATIF handle %s\n", VAR_3);
 return VAR_2;
}
