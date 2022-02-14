
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int acpi_status ;
typedef int acpi_physical_address ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int ,int ,int ,int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int VAR_2 ;

acpi_status
FUNC_5(acpi_physical_address VAR_3,
          u8 VAR_4, u8 VAR_5, u32 *VAR_6)
{
 acpi_status VAR_7;
 u32 VAR_8;

 FUNC_1(VAR_2);



 VAR_7 = FUNC_2(VAR_3, VAR_4, VAR_0,
      VAR_5, &VAR_8);
 if (FUNC_0(VAR_7)) {
  goto exit;
 }

 VAR_7 = FUNC_3(VAR_8, VAR_1);

exit:
 *VAR_6 = VAR_8;
 FUNC_4(VAR_7);
}
