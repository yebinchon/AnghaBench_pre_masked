
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct exit_boot_struct {int new_fdt_addr; int runtime_entry_count; int runtime_map; } ;
struct efi_boot_memmap {int * desc_size; int * map_size; int * map; } ;
typedef int efi_system_table_t ;
typedef int efi_status_t ;


 int FUNC_0 (int ,int ,int ,int ,int ) ;
 int FUNC_1 (int ,struct efi_boot_memmap*) ;

__attribute__((used)) static efi_status_t FUNC_2(efi_system_table_t *VAR_0,
       struct efi_boot_memmap *VAR_1,
       void *VAR_2)
{
 struct exit_boot_struct *VAR_3 = VAR_2;





 FUNC_0(*VAR_1->map, *VAR_1->map_size, *VAR_1->desc_size,
   VAR_3->runtime_map, VAR_3->runtime_entry_count);

 return FUNC_1(VAR_3->new_fdt_addr, VAR_1);
}
