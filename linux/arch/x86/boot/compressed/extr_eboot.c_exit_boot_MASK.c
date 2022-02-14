
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct setup_data {int dummy; } ;
struct exit_boot_struct {int * efi; struct boot_params* boot_params; } ;
struct efi_boot_memmap {unsigned long* map_size; unsigned long* desc_size; unsigned long* key_ptr; unsigned long* buff_size; int * desc_ver; int ** map; } ;
struct boot_params {int alt_mem_k; int efi_info; } ;
typedef scalar_t__ efi_status_t ;
typedef int efi_memory_desc_t ;
typedef int __u32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct boot_params*,struct setup_data**,int *) ;
 scalar_t__ FUNC_1 (int ,void*,struct efi_boot_memmap*,struct exit_boot_struct*,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (struct boot_params*,struct setup_data*,int ) ;
 int VAR_2 ;

__attribute__((used)) static efi_status_t FUNC_3(struct boot_params *VAR_3, void *VAR_4)
{
 unsigned long VAR_5, VAR_6, VAR_7, VAR_8;
 efi_memory_desc_t *VAR_9;
 struct setup_data *VAR_10 = ((void*)0);
 __u32 VAR_11 = 0;
 efi_status_t VAR_12;
 __u32 VAR_13;
 struct efi_boot_memmap VAR_14;
 struct exit_boot_struct VAR_15;

 VAR_14.map = &VAR_9;
 VAR_14.map_size = &VAR_5;
 VAR_14.desc_size = &VAR_7;
 VAR_14.desc_ver = &VAR_13;
 VAR_14.key_ptr = &VAR_6;
 VAR_14.buff_size = &VAR_8;
 VAR_15.boot_params = VAR_3;
 VAR_15.efi = &VAR_3->efi_info;

 VAR_12 = FUNC_0(VAR_3, &VAR_10, &VAR_11);
 if (VAR_12 != VAR_0)
  return VAR_12;


 VAR_12 = FUNC_1(VAR_2, VAR_4, &VAR_14, &VAR_15,
     VAR_1);
 if (VAR_12 != VAR_0)
  return VAR_12;


 VAR_3->alt_mem_k = 32 * 1024;

 VAR_12 = FUNC_2(VAR_3, VAR_10, VAR_11);
 if (VAR_12 != VAR_0)
  return VAR_12;

 return VAR_0;
}
