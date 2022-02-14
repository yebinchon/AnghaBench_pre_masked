
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct acpi_gpe_xrupt_info {struct acpi_gpe_block_info* gpe_block_list_head; } ;
struct acpi_gpe_block_info {struct acpi_gpe_xrupt_info* xrupt_block; struct acpi_gpe_block_info* previous; struct acpi_gpe_block_info* next; } ;
typedef int acpi_status ;
typedef int acpi_cpu_flags ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,struct acpi_gpe_xrupt_info**) ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int VAR_2 ;
 int FUNC_7 (int ) ;

__attribute__((used)) static acpi_status
FUNC_8(struct acpi_gpe_block_info *VAR_3,
     u32 VAR_4)
{
 struct acpi_gpe_block_info *VAR_5;
 struct acpi_gpe_xrupt_info *VAR_6;
 acpi_status VAR_7;
 acpi_cpu_flags VAR_8;

 FUNC_1(VAR_2);

 VAR_7 = FUNC_5(VAR_0);
 if (FUNC_0(VAR_7)) {
  FUNC_7(VAR_7);
 }

 VAR_7 =
     FUNC_2(VAR_4, &VAR_6);
 if (FUNC_0(VAR_7)) {
  goto unlock_and_exit;
 }



 VAR_8 = FUNC_3(VAR_1);
 if (VAR_6->gpe_block_list_head) {
  VAR_5 = VAR_6->gpe_block_list_head;
  while (VAR_5->next) {
   VAR_5 = VAR_5->next;
  }

  VAR_5->next = VAR_3;
  VAR_3->previous = VAR_5;
 } else {
  VAR_6->gpe_block_list_head = VAR_3;
 }

 VAR_3->xrupt_block = VAR_6;
 FUNC_4(VAR_1, VAR_8);

unlock_and_exit:
 (void)FUNC_6(VAR_0);
 FUNC_7(VAR_7);
}
