
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efi_boot_memmap {int * map; int * key_ptr; int desc_ver; int desc_size; int * map_size; int * buff_size; } ;
typedef int efi_system_table_t ;
typedef scalar_t__ efi_status_t ;
typedef scalar_t__ (* efi_exit_boot_map_processing ) (int *,struct efi_boot_memmap*,void*) ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,void*,...) ;
 scalar_t__ FUNC_1 (int *,struct efi_boot_memmap*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

efi_status_t FUNC_2(efi_system_table_t *VAR_5,
        void *VAR_6,
        struct efi_boot_memmap *VAR_7,
        void *VAR_8,
        efi_exit_boot_map_processing VAR_9)
{
 efi_status_t VAR_10;

 VAR_10 = FUNC_1(VAR_5, VAR_7);

 if (VAR_10 != VAR_1)
  goto fail;

 VAR_10 = VAR_9(VAR_5, VAR_7, VAR_8);
 if (VAR_10 != VAR_1)
  goto free_map;

 VAR_10 = FUNC_0(VAR_2, VAR_6, *VAR_7->key_ptr);

 if (VAR_10 == VAR_0) {
  *VAR_7->map_size = *VAR_7->buff_size;
  VAR_10 = FUNC_0(VAR_4,
     VAR_7->map_size,
     *VAR_7->map,
     VAR_7->key_ptr,
     VAR_7->desc_size,
     VAR_7->desc_ver);


  if (VAR_10 != VAR_1)
   goto fail;

  VAR_10 = VAR_9(VAR_5, VAR_7, VAR_8);

  if (VAR_10 != VAR_1)
   goto fail;

  VAR_10 = FUNC_0(VAR_2, VAR_6, *VAR_7->key_ptr);
 }


 if (VAR_10 != VAR_1)
  goto fail;

 return VAR_1;

free_map:
 FUNC_0(VAR_3, *VAR_7->map);
fail:
 return VAR_10;
}
