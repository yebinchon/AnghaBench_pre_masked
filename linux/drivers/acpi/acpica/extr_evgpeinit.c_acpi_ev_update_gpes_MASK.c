
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_gpe_xrupt_info {struct acpi_gpe_xrupt_info* next; struct acpi_gpe_block_info* gpe_block_list_head; } ;
struct acpi_gpe_walk_info {scalar_t__ count; int gpe_device; struct acpi_gpe_block_info* gpe_block; int execute_by_owner_id; int owner_id; } ;
struct acpi_gpe_block_info {struct acpi_gpe_block_info* next; int node; } ;
typedef int acpi_status ;
typedef int acpi_owner_id ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct acpi_gpe_xrupt_info* VAR_8 ;
 int FUNC_3 (int ,int ,int ,int ,int ,int *,struct acpi_gpe_walk_info*,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

void FUNC_6(acpi_owner_id VAR_9)
{
 struct acpi_gpe_xrupt_info *VAR_10;
 struct acpi_gpe_block_info *VAR_11;
 struct acpi_gpe_walk_info VAR_12;
 acpi_status VAR_13 = VAR_5;
 VAR_13 = FUNC_4(VAR_0);
 if (FUNC_1(VAR_13)) {
  return;
 }

 VAR_12.count = 0;
 VAR_12.owner_id = VAR_9;
 VAR_12.execute_by_owner_id = VAR_6;



 VAR_10 = VAR_8;
 while (VAR_10) {



  VAR_11 = VAR_10->gpe_block_list_head;
  while (VAR_11) {
   VAR_12.gpe_block = VAR_11;
   VAR_12.gpe_device = VAR_11->node;

   VAR_13 = FUNC_3(VAR_2,
       VAR_12.gpe_device,
       VAR_3,
       VAR_1,
       VAR_7,
       ((void*)0), &VAR_12, ((void*)0));
   if (FUNC_1(VAR_13)) {
    FUNC_0((VAR_4, VAR_13,
      "While decoding _Lxx/_Exx methods"));
   }

   VAR_11 = VAR_11->next;
  }

  VAR_10 = VAR_10->next;
 }

 if (VAR_12.count) {
  FUNC_2(("Enabled %u new GPEs", VAR_12.count));
 }

 (void)FUNC_5(VAR_0);
 return;
}
