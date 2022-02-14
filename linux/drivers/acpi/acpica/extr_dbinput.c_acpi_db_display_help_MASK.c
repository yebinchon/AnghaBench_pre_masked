
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_db_command_help {int description; scalar_t__ invocation; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 struct acpi_db_command_help* VAR_1 ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void FUNC_2(char *VAR_2)
{
 const struct acpi_db_command_help *VAR_3 = VAR_1;

 if (!VAR_2) {



  FUNC_1("\nSummary of AML Debugger Commands\n\n");

  while (VAR_3->invocation) {
   FUNC_1("%-38s%s", VAR_3->invocation,
           VAR_3->description);
   VAR_3++;
  }
  FUNC_1("\n");

 } else {


  FUNC_0(VAR_2, VAR_0);
 }
}
