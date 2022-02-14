
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
typedef int acpi_status ;
typedef int acpi_physical_address ;
typedef int acpi_io_address ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;


 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,int*,int) ;
 int FUNC_4 (int ,int,int) ;
 int VAR_3 ;
 int FUNC_5 (int ) ;

acpi_status
FUNC_6(u32 VAR_4,
    acpi_physical_address VAR_5,
    u32 VAR_6,
    u64 *VAR_7,
    void *VAR_8, void *VAR_9)
{
 acpi_status VAR_10 = VAR_2;
 u32 VAR_11;

 FUNC_2(VAR_3);

 FUNC_0((VAR_0,
     "System-IO (width %u) R/W %u Address=%8.8X%8.8X\n",
     VAR_6, VAR_4, FUNC_1(VAR_5)));



 switch (VAR_4) {
 case 129:

  VAR_10 = FUNC_3((acpi_io_address)VAR_5,
        &VAR_11, VAR_6);
  *VAR_7 = VAR_11;
  break;

 case 128:

  VAR_10 = FUNC_4((acpi_io_address)VAR_5,
         (u32)*VAR_7, VAR_6);
  break;

 default:

  VAR_10 = VAR_1;
  break;
 }

 FUNC_5(VAR_10);
}
