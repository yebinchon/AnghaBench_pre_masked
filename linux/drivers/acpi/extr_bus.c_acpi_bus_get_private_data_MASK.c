
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int acpi_status ;
typedef int acpi_handle ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,void**) ;
 int FUNC_2 (int ,char*) ;

int FUNC_3(acpi_handle VAR_3, void **VAR_4)
{
 acpi_status VAR_5;

 if (!*VAR_4)
  return -VAR_0;

 VAR_5 = FUNC_1(VAR_3, VAR_2, VAR_4);
 if (FUNC_0(VAR_5)) {
  FUNC_2(VAR_3, "No context for object\n");
  return -VAR_1;
 }

 return 0;
}
