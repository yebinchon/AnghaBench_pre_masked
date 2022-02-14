
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_namestring_info {char const* external_name; char* internal_name; int length; } ;
typedef int acpi_status ;


 char* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (struct acpi_namestring_info*) ;
 int FUNC_5 (struct acpi_namestring_info*) ;
 int VAR_3 ;
 int FUNC_6 (int ) ;

acpi_status
FUNC_7(const char *VAR_4, char **VAR_5)
{
 char *VAR_6;
 struct acpi_namestring_info VAR_7;
 acpi_status VAR_8;

 FUNC_3(VAR_3);

 if ((!VAR_4) || (*VAR_4 == 0) || (!VAR_5)) {
  FUNC_6(VAR_0);
 }



 VAR_7.external_name = VAR_4;
 FUNC_5(&VAR_7);



 VAR_6 = FUNC_0(VAR_7.length);
 if (!VAR_6) {
  FUNC_6(VAR_1);
 }



 VAR_7.internal_name = VAR_6;
 VAR_8 = FUNC_4(&VAR_7);
 if (FUNC_1(VAR_8)) {
  FUNC_2(VAR_6);
  FUNC_6(VAR_8);
 }

 *VAR_5 = VAR_6;
 FUNC_6(VAR_2);
}
