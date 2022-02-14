
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct acpi_db_command_help {char* invocation; int description; scalar_t__ line_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*,int ) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static u8
FUNC_2(const char *VAR_2,
      const struct acpi_db_command_help *VAR_3)
{
 char *VAR_4 = VAR_3->invocation;
 u32 VAR_5;



 if (*VAR_4 != ' ') {
  return (VAR_0);
 }

 while (*VAR_4 == ' ') {
  VAR_4++;
 }



 while ((*VAR_2) && (*VAR_4) && (*VAR_4 != ' ')) {
  if (FUNC_1((int)*VAR_2) != FUNC_1((int)*VAR_4)) {
   return (VAR_0);
  }

  VAR_4++;
  VAR_2++;
 }



 VAR_5 = VAR_3->line_count;
 while (VAR_5) {
  FUNC_0("%-38s : %s", VAR_3->invocation,
          VAR_3->description);
  VAR_3++;
  VAR_5--;
 }

 return (VAR_1);
}
