
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_interface_info {int flags; char* name; struct acpi_interface_info* next; } ;
typedef int acpi_status ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 struct acpi_interface_info* VAR_3 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*) ;
 char* FUNC_8 (char*,char*) ;

void FUNC_9(char *VAR_4, char *VAR_5)
{
 struct acpi_interface_info *VAR_6;
 char *VAR_7;
 acpi_status VAR_8;



 if (!VAR_4) {
  (void)FUNC_3(VAR_2,
         VAR_1);

  VAR_6 = VAR_3;
  while (VAR_6) {
   if (!(VAR_6->flags & VAR_0)) {
    FUNC_4("%s\n", VAR_6->name);
   }

   VAR_6 = VAR_6->next;
  }

  FUNC_5(VAR_2);
  return;
 }



 if (!VAR_5) {
  FUNC_4("Missing Interface Name argument\n");
  return;
 }



 FUNC_7(VAR_4);



 VAR_7 = FUNC_8("INSTALL", VAR_4);
 if (VAR_7) {
  VAR_8 = FUNC_2(VAR_5);
  if (FUNC_0(VAR_8)) {
   FUNC_4("%s, while installing \"%s\"\n",
           FUNC_1(VAR_8),
           VAR_5);
  }
  return;
 }



 VAR_7 = FUNC_8("REMOVE", VAR_4);
 if (VAR_7) {
  VAR_8 = FUNC_6(VAR_5);
  if (FUNC_0(VAR_8)) {
   FUNC_4("%s, while removing \"%s\"\n",
           FUNC_1(VAR_8),
           VAR_5);
  }
  return;
 }



 FUNC_4("Invalid action argument: %s\n", VAR_4);
 return;
}
