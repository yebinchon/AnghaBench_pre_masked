
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int acpi_status ;
typedef int acpi_handle ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,void*) ;
 int VAR_1 ;
 int FUNC_2 (int ,char*) ;

int FUNC_3(acpi_handle VAR_2, void *VAR_3)
{
 acpi_status VAR_4;

 VAR_4 = FUNC_1(VAR_2,
   VAR_1, VAR_3);
 if (FUNC_0(VAR_4)) {
  FUNC_2(VAR_2, "Error attaching device data\n");
  return -VAR_0;
 }

 return 0;
}
