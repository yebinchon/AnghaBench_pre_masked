
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_namespace_node {int dummy; } ;
struct acpi_buffer {scalar_t__ pointer; int length; } ;
typedef int acpi_status ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (struct acpi_namespace_node*,struct acpi_buffer*,int ) ;
 int FUNC_3 (char*,...) ;

void
FUNC_4(struct acpi_namespace_node *VAR_2,
       const char *VAR_3)
{
 struct acpi_buffer VAR_4;
 acpi_status VAR_5;

 if (!VAR_2) {
  FUNC_3("[NULL NAME]");
  return;
 }



 VAR_4.length = VAR_0;

 VAR_5 = FUNC_2(VAR_2, &VAR_4, VAR_1);
 if (FUNC_1(VAR_5)) {
  if (VAR_3) {
   FUNC_3("%s ", VAR_3);
  }

  FUNC_3("%s", (char *)VAR_4.pointer);
  FUNC_0(VAR_4.pointer);
 }
}
