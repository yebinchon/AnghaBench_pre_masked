
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned long u64 ;
struct efi_boot_memmap {unsigned long* map_size; unsigned long* desc_size; unsigned long* buff_size; int * key_ptr; int * desc_ver; TYPE_1__** map; } ;
typedef int efi_system_table_t ;
typedef scalar_t__ efi_status_t ;
typedef unsigned long efi_physical_addr_t ;
struct TYPE_3__ {unsigned long phys_addr; unsigned long num_pages; int type; } ;
typedef TYPE_1__ efi_memory_desc_t ;


 int VAR_0 ;
 int VAR_1 ;





 scalar_t__ VAR_2 ;
 unsigned long VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned long VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ,TYPE_1__*,...) ;
 scalar_t__ FUNC_1 (int *,struct efi_boot_memmap*) ;
 int VAR_7 ;
 unsigned long FUNC_2 (unsigned long,unsigned long) ;
 unsigned long FUNC_3 (unsigned long,int ) ;
 int FUNC_4 (int *,char*) ;

__attribute__((used)) static efi_status_t FUNC_5(efi_system_table_t *VAR_8,
     unsigned long VAR_9,
     unsigned long *VAR_10,
     unsigned long *VAR_11)
{
 efi_physical_addr_t VAR_12;
 efi_memory_desc_t *VAR_13;
 unsigned long VAR_14, VAR_15, VAR_16, VAR_17;
 efi_status_t VAR_18;
 unsigned long VAR_19;

 struct efi_boot_memmap VAR_20 = {
  .map = &VAR_13,
  .map_size = &VAR_15,
  .desc_size = &VAR_16,
  .desc_ver = ((void*)0),
  .key_ptr = ((void*)0),
  .buff_size = &VAR_17,
 };
 VAR_12 = VAR_9 + VAR_5;
 VAR_14 = VAR_5 / VAR_3;
 VAR_18 = FUNC_0(VAR_6, VAR_1,
    131, VAR_14, &VAR_12);
 if (VAR_18 == VAR_4) {
  if (VAR_12 == VAR_9) {
   *VAR_10 = VAR_12;
   *VAR_11 = VAR_5;
   return VAR_4;
  }
 }







 VAR_18 = FUNC_1(VAR_8, &VAR_20);
 if (VAR_18 != VAR_4) {
  FUNC_4(VAR_8,
      "reserve_kernel_base(): Unable to retrieve memory map.\n");
  return VAR_18;
 }

 for (VAR_19 = 0; VAR_19 < VAR_15; VAR_19 += VAR_16) {
  efi_memory_desc_t *VAR_21;
  u64 VAR_22, VAR_23;

  VAR_21 = (void *)VAR_13 + VAR_19;
  VAR_22 = VAR_21->phys_addr;
  VAR_23 = VAR_22 + VAR_21->num_pages * VAR_3;


  if (VAR_22 >= VAR_9 + VAR_5 ||
      VAR_23 <= VAR_9)
   continue;

  switch (VAR_21->type) {
  case 132:
  case 131:

   continue;

  case 130:




   VAR_22 = FUNC_2(VAR_22, (u64)VAR_9);
   VAR_23 = FUNC_3(VAR_23, (u64)VAR_9 + VAR_5);

   VAR_18 = FUNC_0(VAR_6,
      VAR_0,
      128,
      (VAR_23 - VAR_22) / VAR_3,
      &VAR_22);
   if (VAR_18 != VAR_4) {
    FUNC_4(VAR_8,
     "reserve_kernel_base(): alloc failed.\n");
    goto out;
   }
   break;

  case 129:
  case 128:






  default:


   VAR_18 = VAR_2;
   goto out;
  }
 }

 VAR_18 = VAR_4;
out:
 FUNC_0(VAR_7, VAR_13);
 return VAR_18;
}
