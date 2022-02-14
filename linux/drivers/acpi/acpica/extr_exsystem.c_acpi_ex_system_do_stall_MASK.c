
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int acpi_status ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int) ;

acpi_status FUNC_3(u32 VAR_3)
{
 acpi_status VAR_4 = VAR_2;

 FUNC_1();

 if (VAR_3 > 255) {






  FUNC_0((VAR_1,
       "Time parameter is too large (%u)", VAR_3));
  VAR_4 = VAR_0;
 } else {
  FUNC_2(VAR_3);
 }

 return (VAR_4);
}
