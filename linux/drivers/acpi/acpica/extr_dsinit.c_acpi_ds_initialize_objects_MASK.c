
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct acpi_table_header {int oem_table_id; int signature; } ;
struct acpi_namespace_node {int dummy; } ;
struct acpi_init_walk_info {int op_region_count; int method_count; int serialized_method_count; int non_serial_method_count; int serial_method_count; int device_count; int object_count; int table_index; int owner_id; } ;
typedef int acpi_status ;
typedef int acpi_owner_id ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_6 (int ,struct acpi_table_header**) ;
 int FUNC_7 (int ,struct acpi_namespace_node*,int ,int ,int ,int *,struct acpi_init_walk_info*,int *) ;
 int FUNC_8 (int ,int *) ;
 int VAR_9 ;
 int FUNC_9 (struct acpi_init_walk_info*,int ,int) ;
 int FUNC_10 (int ) ;

acpi_status
FUNC_11(u32 VAR_10,
      struct acpi_namespace_node *VAR_11)
{
 acpi_status VAR_12;
 struct acpi_init_walk_info VAR_13;
 struct acpi_table_header *VAR_14;
 acpi_owner_id VAR_15;

 FUNC_5(VAR_9);

 VAR_12 = FUNC_8(VAR_10, &VAR_15);
 if (FUNC_4(VAR_12)) {
  FUNC_10(VAR_12);
 }

 FUNC_1((VAR_0,
     "**** Starting initialization of namespace objects ****\n"));



 FUNC_9(&VAR_13, 0, sizeof(struct acpi_init_walk_info));

 VAR_13.owner_id = VAR_15;
 VAR_13.table_index = VAR_10;







 VAR_12 =
     FUNC_7(VAR_4, VAR_11, VAR_5,
       VAR_2,
       VAR_8, ((void*)0), &VAR_13, ((void*)0));
 if (FUNC_4(VAR_12)) {
  FUNC_3((VAR_6, VAR_12, "During WalkNamespace"));
 }

 VAR_12 = FUNC_6(VAR_10, &VAR_14);
 if (FUNC_4(VAR_12)) {
  FUNC_10(VAR_12);
 }



 if (FUNC_0(VAR_14->signature, VAR_3)) {
  FUNC_2((VAR_1,
          "\nACPI table initialization:\n"));
 }



 FUNC_2((VAR_1,
         "Table [%4.4s: %-8.8s] (id %.2X) - %4u Objects with %3u Devices, "
         "%3u Regions, %4u Methods (%u/%u/%u Serial/Non/Cvt)\n",
         VAR_14->signature, VAR_14->oem_table_id, VAR_15,
         VAR_13.object_count, VAR_13.device_count,
         VAR_13.op_region_count, VAR_13.method_count,
         VAR_13.serial_method_count,
         VAR_13.non_serial_method_count,
         VAR_13.serialized_method_count));

 FUNC_1((VAR_0, "%u Methods, %u Regions\n",
     VAR_13.method_count, VAR_13.op_region_count));

 FUNC_10(VAR_7);
}
