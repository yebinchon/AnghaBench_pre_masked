
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct exit_boot_struct {TYPE_1__* efi; } ;
struct efi_boot_memmap {scalar_t__* map; int * map_size; int * desc_ver; int * desc_size; } ;
typedef int efi_system_table_t ;
typedef int efi_status_t ;
typedef int __u32 ;
struct TYPE_2__ {unsigned long efi_systab; unsigned long efi_memmap; unsigned long efi_systab_hi; unsigned long efi_memmap_hi; int efi_memmap_size; int efi_memdesc_version; int efi_memdesc_size; int efi_loader_signature; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int *,char const*,int) ;

__attribute__((used)) static efi_status_t FUNC_2(efi_system_table_t *VAR_3,
       struct efi_boot_memmap *VAR_4,
       void *VAR_5)
{
 const char *VAR_6;
 struct exit_boot_struct *VAR_7 = VAR_5;

 VAR_6 = FUNC_0() ? VAR_1
       : VAR_0;
 FUNC_1(&VAR_7->efi->efi_loader_signature, VAR_6, sizeof(__u32));

 VAR_7->efi->efi_systab = (unsigned long)VAR_3;
 VAR_7->efi->efi_memdesc_size = *VAR_4->desc_size;
 VAR_7->efi->efi_memdesc_version = *VAR_4->desc_ver;
 VAR_7->efi->efi_memmap = (unsigned long)*VAR_4->map;
 VAR_7->efi->efi_memmap_size = *VAR_4->map_size;






 return VAR_2;
}
