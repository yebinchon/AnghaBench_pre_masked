
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_namespace_node {int dummy; } ;
struct acpi_address_range {struct acpi_address_range* next; int end_address; int start_address; struct acpi_namespace_node* region_node; } ;
typedef size_t acpi_adr_space_type ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct acpi_address_range*) ;
 int FUNC_3 (int ) ;
 struct acpi_address_range** VAR_3 ;
 int FUNC_4 (struct acpi_namespace_node*) ;
 int VAR_4 ;
 int VAR_5 ;

void
FUNC_5(acpi_adr_space_type VAR_6,
        struct acpi_namespace_node *VAR_7)
{
 struct acpi_address_range *VAR_8;
 struct acpi_address_range *VAR_9;

 FUNC_3(VAR_5);

 if ((VAR_6 != VAR_1) &&
     (VAR_6 != VAR_0)) {
  VAR_4;
 }



 VAR_8 = VAR_9 = VAR_3[VAR_6];
 while (VAR_8) {
  if (VAR_8->region_node == VAR_7) {
   if (VAR_8 == VAR_9) {
    VAR_3[VAR_6] =
        VAR_8->next;
   } else {
    VAR_9->next = VAR_8->next;
   }

   FUNC_0((VAR_2,
       "\nRemoved [%4.4s] address range: 0x%8.8X%8.8X-0x%8.8X%8.8X\n",
       FUNC_4(VAR_8->
        region_node),
       FUNC_1(VAR_8->
            start_address),
       FUNC_1(VAR_8->
            end_address)));

   FUNC_2(VAR_8);
   VAR_4;
  }

  VAR_9 = VAR_8;
  VAR_8 = VAR_8->next;
 }

 VAR_4;
}
