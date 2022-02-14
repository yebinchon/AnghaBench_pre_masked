
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct acpi_namespace_node {int dummy; } ;
struct acpi_gpe_xrupt_info {struct acpi_gpe_block_info* gpe_block_list_head; } ;
struct acpi_gpe_register_info {int enable_for_run; int enable_for_wake; int base_gpe_number; } ;
struct acpi_gpe_event_info {int dummy; } ;
struct acpi_gpe_block_info {size_t register_count; struct acpi_gpe_block_info* next; struct acpi_gpe_event_info* event_info; struct acpi_gpe_register_info* register_info; struct acpi_namespace_node* node; } ;
typedef int acpi_size ;
typedef int acpi_cpu_flags ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t FUNC_2 (struct acpi_namespace_node*,struct acpi_gpe_event_info*,size_t) ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int VAR_4 ;

u32 FUNC_5(struct acpi_gpe_xrupt_info *VAR_5)
{
 struct acpi_gpe_block_info *VAR_6;
 struct acpi_namespace_node *VAR_7;
 struct acpi_gpe_register_info *VAR_8;
 struct acpi_gpe_event_info *VAR_9;
 u32 VAR_10;
 u32 VAR_11 = VAR_2;
 acpi_cpu_flags VAR_12;
 u32 VAR_13;
 u32 VAR_14;

 FUNC_1(VAR_4);



 if (!VAR_5) {
  return (VAR_11);
 }






 VAR_12 = FUNC_3(VAR_3);



 VAR_6 = VAR_5->gpe_block_list_head;
 while (VAR_6) {
  VAR_7 = VAR_6->node;





  for (VAR_13 = 0; VAR_13 < VAR_6->register_count; VAR_13++) {



   VAR_8 = &VAR_6->register_info[VAR_13];





   if (!(VAR_8->enable_for_run |
         VAR_8->enable_for_wake)) {
    FUNC_0((VAR_0,
        "Ignore disabled registers for GPE %02X-%02X: "
        "RunEnable=%02X, WakeEnable=%02X\n",
        VAR_8->
        base_gpe_number,
        VAR_8->
        base_gpe_number +
        (VAR_1 - 1),
        VAR_8->
        enable_for_run,
        VAR_8->
        enable_for_wake));
    continue;
   }



   for (VAR_14 = 0; VAR_14 < VAR_1; VAR_14++) {



    VAR_9 =
        &VAR_6->
        event_info[((acpi_size)VAR_13 *
      VAR_1) + VAR_14];
    VAR_10 =
        VAR_14 + VAR_8->base_gpe_number;
    FUNC_4(VAR_3, VAR_12);
    VAR_11 |=
        FUNC_2(VAR_7,
             VAR_9,
             VAR_10);
    VAR_12 = FUNC_3(VAR_3);
   }
  }

  VAR_6 = VAR_6->next;
 }

 FUNC_4(VAR_3, VAR_12);
 return (VAR_11);
}
