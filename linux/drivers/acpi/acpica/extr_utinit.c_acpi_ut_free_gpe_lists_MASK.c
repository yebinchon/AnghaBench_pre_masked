
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_gpe_xrupt_info {struct acpi_gpe_xrupt_info* next; struct acpi_gpe_xrupt_info* register_info; struct acpi_gpe_xrupt_info* event_info; struct acpi_gpe_xrupt_info* gpe_block_list_head; } ;
struct acpi_gpe_block_info {struct acpi_gpe_block_info* next; struct acpi_gpe_block_info* register_info; struct acpi_gpe_block_info* event_info; struct acpi_gpe_block_info* gpe_block_list_head; } ;


 int FUNC_0 (struct acpi_gpe_xrupt_info*) ;
 struct acpi_gpe_xrupt_info* VAR_0 ;

__attribute__((used)) static void FUNC_1(void)
{
 struct acpi_gpe_block_info *VAR_1;
 struct acpi_gpe_block_info *VAR_2;
 struct acpi_gpe_xrupt_info *VAR_3;
 struct acpi_gpe_xrupt_info *VAR_4;



 VAR_3 = VAR_0;
 while (VAR_3) {
  VAR_1 = VAR_3->gpe_block_list_head;
  while (VAR_1) {
   VAR_2 = VAR_1->next;
   FUNC_0(VAR_1->event_info);
   FUNC_0(VAR_1->register_info);
   FUNC_0(VAR_1);

   VAR_1 = VAR_2;
  }
  VAR_4 = VAR_3->next;
  FUNC_0(VAR_3);
  VAR_3 = VAR_4;
 }
}
