
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_namespace_node {int dummy; } ;
struct acpi_buffer {scalar_t__ pointer; } ;
typedef int acpi_status ;
typedef int acpi_handle ;


 int FUNC_0 (scalar_t__,char const*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct acpi_namespace_node* FUNC_4 (int ) ;
 char* FUNC_5 (struct acpi_namespace_node*) ;
 int FUNC_6 (struct acpi_buffer*,int ) ;
 int VAR_5 ;
 int FUNC_7 (int ) ;

acpi_status
FUNC_8(acpi_handle VAR_6, struct acpi_buffer *VAR_7)
{
 acpi_status VAR_8;
 struct acpi_namespace_node *VAR_9;
 const char *VAR_10;

 FUNC_3(VAR_5, VAR_6);

 VAR_9 = FUNC_4(VAR_6);
 if (!VAR_9) {
  FUNC_7(VAR_3);
 }



 VAR_8 = FUNC_6(VAR_7, VAR_2);
 if (FUNC_2(VAR_8)) {
  FUNC_7(VAR_8);
 }



 VAR_10 = FUNC_5(VAR_9);
 FUNC_0(VAR_7->pointer, VAR_10);
 ((char *)VAR_7->pointer)[VAR_1] = 0;

 FUNC_1((VAR_0, "%4.4s\n", (char *)VAR_7->pointer));
 FUNC_7(VAR_4);
}
