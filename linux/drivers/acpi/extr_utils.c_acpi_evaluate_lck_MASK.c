
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ acpi_status ;
typedef int acpi_handle ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,char*,scalar_t__) ;

acpi_status FUNC_3(acpi_handle VAR_1, int VAR_2)
{
 acpi_status VAR_3;

 VAR_3 = FUNC_1(VAR_1, "_LCK", !!VAR_2);
 if (FUNC_0(VAR_3) && VAR_3 != VAR_0) {
  if (VAR_2)
   FUNC_2(VAR_1,
    "Locking device failed (0x%x)\n", VAR_3);
  else
   FUNC_2(VAR_1,
    "Unlocking device failed (0x%x)\n", VAR_3);
 }

 return VAR_3;
}
