
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct efi_boot_memmap {int* desc_size; int* map_size; int* buff_size; unsigned long* key_ptr; int ** map; int * desc_ver; } ;
typedef int efi_system_table_t ;
typedef scalar_t__ efi_status_t ;
typedef int efi_memory_desc_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,int*,...) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int,int,int) ;

efi_status_t FUNC_2(efi_system_table_t *VAR_7,
    struct efi_boot_memmap *VAR_8)
{
 efi_memory_desc_t *VAR_9 = ((void*)0);
 efi_status_t VAR_10;
 unsigned long VAR_11;
 u32 VAR_12;

 *VAR_8->desc_size = sizeof(*VAR_9);
 *VAR_8->map_size = *VAR_8->desc_size * 32;
 *VAR_8->buff_size = *VAR_8->map_size;
again:
 VAR_10 = FUNC_0(VAR_4, &VAR_1,
    *VAR_8->map_size, (void **)&VAR_9);
 if (VAR_10 != VAR_3)
  goto fail;

 *VAR_8->desc_size = 0;
 VAR_11 = 0;
 VAR_10 = FUNC_0(VAR_6, VAR_8->map_size, VAR_9,
    &VAR_11, VAR_8->desc_size, &VAR_12);
 if (VAR_10 == VAR_0 ||
     !FUNC_1(*VAR_8->buff_size, *VAR_8->map_size,
          *VAR_8->desc_size)) {
  FUNC_0(VAR_5, VAR_9);







  *VAR_8->map_size += *VAR_8->desc_size * VAR_2;
  *VAR_8->buff_size = *VAR_8->map_size;
  goto again;
 }

 if (VAR_10 != VAR_3)
  FUNC_0(VAR_5, VAR_9);

 if (VAR_8->key_ptr && VAR_10 == VAR_3)
  *VAR_8->key_ptr = VAR_11;
 if (VAR_8->desc_ver && VAR_10 == VAR_3)
  *VAR_8->desc_ver = VAR_12;

fail:
 *VAR_8->map = VAR_9;
 return VAR_10;
}
