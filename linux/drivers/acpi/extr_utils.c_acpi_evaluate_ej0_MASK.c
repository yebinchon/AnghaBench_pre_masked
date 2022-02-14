
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ acpi_status ;
typedef int acpi_handle ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,char*,...) ;

acpi_status FUNC_3(acpi_handle VAR_1)
{
 acpi_status VAR_2;

 VAR_2 = FUNC_1(VAR_1, "_EJ0", 1);
 if (VAR_2 == VAR_0)
  FUNC_2(VAR_1, "No _EJ0 support for device\n");
 else if (FUNC_0(VAR_2))
  FUNC_2(VAR_1, "Eject failed (0x%x)\n", VAR_2);

 return VAR_2;
}
