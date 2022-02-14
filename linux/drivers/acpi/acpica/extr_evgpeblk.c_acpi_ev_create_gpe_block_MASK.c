
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
typedef void* u16 ;
struct TYPE_3__ {int ascii; } ;
struct acpi_namespace_node {TYPE_1__ name; } ;
struct acpi_gpe_walk_info {void* execute_by_owner_id; struct acpi_namespace_node* gpe_device; struct acpi_gpe_block_info* gpe_block; } ;
struct acpi_gpe_block_info {int gpe_count; int register_count; int block_base_number; struct acpi_gpe_block_info* event_info; struct acpi_gpe_block_info* register_info; void* initialized; struct acpi_namespace_node* node; int space_id; int address; } ;
typedef int acpi_status ;
struct TYPE_4__ {int sci_interrupt; } ;


 struct acpi_gpe_block_info* FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct acpi_gpe_block_info*) ;
 int FUNC_4 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (struct acpi_gpe_block_info*) ;
 int FUNC_6 (struct acpi_gpe_block_info*,int) ;
 int VAR_9 ;
 TYPE_2__ VAR_10 ;
 void* VAR_11 ;
 int FUNC_7 (int ,struct acpi_namespace_node*,int ,int ,int ,int *,struct acpi_gpe_walk_info*,int *) ;
 int VAR_12 ;
 int FUNC_8 (int ) ;

acpi_status
FUNC_9(struct acpi_namespace_node *VAR_13,
    u64 VAR_14,
    u8 VAR_15,
    u32 VAR_16,
    u16 VAR_17,
    u32 VAR_18,
    struct acpi_gpe_block_info **VAR_19)
{
 acpi_status VAR_20;
 struct acpi_gpe_block_info *VAR_21;
 struct acpi_gpe_walk_info VAR_22;

 FUNC_4(VAR_12);

 if (!VAR_16) {
  FUNC_8(VAR_6);
 }



 VAR_21 = FUNC_0(sizeof(struct acpi_gpe_block_info));
 if (!VAR_21) {
  FUNC_8(VAR_5);
 }



 VAR_21->address = VAR_14;
 VAR_21->space_id = VAR_15;
 VAR_21->node = VAR_13;
 VAR_21->gpe_count = (u16)(VAR_16 * VAR_1);
 VAR_21->initialized = VAR_7;
 VAR_21->register_count = VAR_16;
 VAR_21->block_base_number = VAR_17;





 VAR_20 = FUNC_5(VAR_21);
 if (FUNC_2(VAR_20)) {
  FUNC_3(VAR_21);
  FUNC_8(VAR_20);
 }



 VAR_20 = FUNC_6(VAR_21, VAR_18);
 if (FUNC_2(VAR_20)) {
  FUNC_3(VAR_21->register_info);
  FUNC_3(VAR_21->event_info);
  FUNC_3(VAR_21);
  FUNC_8(VAR_20);
 }

 VAR_11 = VAR_7;



 VAR_22.gpe_block = VAR_21;
 VAR_22.gpe_device = VAR_13;
 VAR_22.execute_by_owner_id = VAR_7;

 VAR_20 = FUNC_7(VAR_3, VAR_13,
     VAR_4, VAR_2,
     VAR_9, ((void*)0),
     &VAR_22, ((void*)0));



 if (VAR_19) {
  (*VAR_19) = VAR_21;
 }

 FUNC_1((VAR_0,
         "    Initialized GPE %02X to %02X [%4.4s] %u regs on interrupt 0x%X%s\n",
         (u32)VAR_21->block_base_number,
         (u32)(VAR_21->block_base_number +
        (VAR_21->gpe_count - 1)),
         VAR_13->name.ascii, VAR_21->register_count,
         VAR_18,
         VAR_18 ==
         VAR_10.sci_interrupt ? " (SCI)" : ""));



 VAR_8 += VAR_21->gpe_count;
 FUNC_8(VAR_6);
}
