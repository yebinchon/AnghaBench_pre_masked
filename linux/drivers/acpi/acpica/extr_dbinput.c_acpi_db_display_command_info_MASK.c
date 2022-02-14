
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct acpi_db_command_help {scalar_t__ invocation; } ;


 scalar_t__ FUNC_0 (char const*,struct acpi_db_command_help const*) ;
 struct acpi_db_command_help* VAR_0 ;

__attribute__((used)) static void FUNC_1(const char *VAR_1, u8 VAR_2)
{
 const struct acpi_db_command_help *VAR_3;
 u8 VAR_4;

 VAR_3 = VAR_0;
 while (VAR_3->invocation) {
  VAR_4 = FUNC_0(VAR_1, VAR_3);
  if (!VAR_2 && VAR_4) {
   return;
  }

  VAR_3++;
 }
}
