
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;
struct setup_data {int dummy; } ;
struct efi_boot_memmap {unsigned long* map_size; unsigned long* desc_size; unsigned long* buff_size; int * key_ptr; int * desc_ver; int ** map; } ;
struct boot_params {int e820_table; } ;
typedef scalar_t__ efi_status_t ;
typedef int efi_memory_desc_t ;
typedef unsigned long __u32 ;


 unsigned long FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (unsigned long,struct setup_data**,unsigned long*) ;
 scalar_t__ FUNC_2 (int ,struct efi_boot_memmap*) ;
 int VAR_1 ;

__attribute__((used)) static efi_status_t FUNC_3(struct boot_params *VAR_2,
      struct setup_data **VAR_3,
      u32 *VAR_4)
{
 unsigned long VAR_5, VAR_6, VAR_7;
 struct efi_boot_memmap VAR_8;
 efi_memory_desc_t *VAR_9;
 efi_status_t VAR_10;
 __u32 VAR_11;

 VAR_8.map = &VAR_9;
 VAR_8.map_size = &VAR_5;
 VAR_8.desc_size = &VAR_6;
 VAR_8.desc_ver = ((void*)0);
 VAR_8.key_ptr = ((void*)0);
 VAR_8.buff_size = &VAR_7;

 VAR_10 = FUNC_2(VAR_1, &VAR_8);
 if (VAR_10 != VAR_0)
  return VAR_10;

 VAR_11 = VAR_7 / VAR_6;

 if (VAR_11 > FUNC_0(VAR_2->e820_table)) {
  u32 VAR_12 = VAR_11 - FUNC_0(VAR_2->e820_table);

  VAR_10 = FUNC_1(VAR_12, VAR_3, VAR_4);
  if (VAR_10 != VAR_0)
   return VAR_10;
 }

 return VAR_0;
}
