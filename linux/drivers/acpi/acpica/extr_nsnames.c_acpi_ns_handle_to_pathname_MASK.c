
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct acpi_namespace_node {int dummy; } ;
struct acpi_buffer {int * pointer; } ;
typedef int acpi_status ;
typedef scalar_t__ acpi_size ;
typedef int acpi_handle ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (struct acpi_namespace_node*,int *,scalar_t__,int ) ;
 struct acpi_namespace_node* FUNC_4 (int ) ;
 int FUNC_5 (struct acpi_buffer*,scalar_t__) ;
 int VAR_3 ;
 int FUNC_6 (int ) ;

acpi_status
FUNC_7(acpi_handle VAR_4,
      struct acpi_buffer *VAR_5, u8 VAR_6)
{
 acpi_status VAR_7;
 struct acpi_namespace_node *VAR_8;
 acpi_size VAR_9;

 FUNC_2(VAR_3, VAR_4);

 VAR_8 = FUNC_4(VAR_4);
 if (!VAR_8) {
  FUNC_6(VAR_1);
 }



 VAR_9 =
     FUNC_3(VAR_8, ((void*)0), 0, VAR_6);
 if (!VAR_9) {
  FUNC_6(VAR_1);
 }



 VAR_7 = FUNC_5(VAR_5, VAR_9);
 if (FUNC_1(VAR_7)) {
  FUNC_6(VAR_7);
 }



 (void)FUNC_3(VAR_8, VAR_5->pointer,
         VAR_9, VAR_6);

 FUNC_0((VAR_0, "%s [%X]\n",
     (char *)VAR_5->pointer, (u32) VAR_9));
 FUNC_6(VAR_2);
}
