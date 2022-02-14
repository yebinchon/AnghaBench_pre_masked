
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_exception_info {char const* name; } ;
typedef int acpi_status ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int VAR_0 ;
 struct acpi_exception_info* FUNC_2 (int ) ;

const char *FUNC_3(acpi_status VAR_1)
{
 const struct acpi_exception_info *VAR_2;

 FUNC_1();

 VAR_2 = FUNC_2(VAR_1);
 if (!VAR_2) {



  FUNC_0((VAR_0,
       "Unknown exception code: 0x%8.8X", VAR_1));

  return ("UNKNOWN_STATUS_CODE");
 }

 return (VAR_2->name);
}
