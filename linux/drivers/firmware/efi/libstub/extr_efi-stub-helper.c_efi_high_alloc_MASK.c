
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned long u64 ;
struct efi_boot_memmap {unsigned long* map_size; unsigned long* desc_size; unsigned long* buff_size; int * key_ptr; int * desc_ver; TYPE_1__** map; } ;
typedef int efi_system_table_t ;
typedef scalar_t__ efi_status_t ;
struct TYPE_4__ {scalar_t__ type; unsigned long num_pages; unsigned long phys_addr; } ;
typedef TYPE_1__ efi_memory_desc_t ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned long VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int ,TYPE_1__*,...) ;
 TYPE_1__* FUNC_1 (unsigned long,unsigned long,int) ;
 scalar_t__ FUNC_2 (int *,struct efi_boot_memmap*) ;
 int VAR_8 ;
 unsigned long FUNC_3 (unsigned long,unsigned long) ;
 unsigned long FUNC_4 (unsigned long,unsigned long) ;

efi_status_t FUNC_5(efi_system_table_t *VAR_9,
       unsigned long VAR_10, unsigned long VAR_11,
       unsigned long *VAR_12, unsigned long VAR_13)
{
 unsigned long VAR_14, VAR_15, VAR_16;
 efi_memory_desc_t *VAR_17;
 efi_status_t VAR_18;
 unsigned long VAR_19;
 u64 VAR_20 = 0;
 int VAR_21;
 struct efi_boot_memmap VAR_22;

 VAR_22.map = &VAR_17;
 VAR_22.map_size = &VAR_14;
 VAR_22.desc_size = &VAR_15;
 VAR_22.desc_ver = ((void*)0);
 VAR_22.key_ptr = ((void*)0);
 VAR_22.buff_size = &VAR_16;

 VAR_18 = FUNC_2(VAR_9, &VAR_22);
 if (VAR_18 != VAR_6)
  goto fail;







 if (VAR_11 < VAR_1)
  VAR_11 = VAR_1;

 VAR_10 = FUNC_4(VAR_10, VAR_1);
 VAR_19 = VAR_10 / VAR_5;
again:
 for (VAR_21 = 0; VAR_21 < VAR_14 / VAR_15; VAR_21++) {
  efi_memory_desc_t *VAR_23;
  unsigned long VAR_24 = (unsigned long)VAR_17;
  u64 VAR_25, VAR_26;

  VAR_23 = FUNC_1(VAR_24, VAR_15, VAR_21);
  if (VAR_23->type != VAR_2)
   continue;

  if (VAR_23->num_pages < VAR_19)
   continue;

  VAR_25 = VAR_23->phys_addr;
  VAR_26 = VAR_25 + VAR_23->num_pages * VAR_5;

  if (VAR_26 > VAR_13)
   VAR_26 = VAR_13;

  if ((VAR_25 + VAR_10) > VAR_26)
   continue;

  if (FUNC_3(VAR_26 - VAR_10, VAR_11) < VAR_25)
   continue;

  VAR_25 = FUNC_3(VAR_26 - VAR_10, VAR_11);





  if (VAR_25 == 0x0)
   continue;

  if (VAR_25 > VAR_20)
   VAR_20 = VAR_25;
 }

 if (!VAR_20)
  VAR_18 = VAR_4;
 else {
  VAR_18 = FUNC_0(VAR_7,
     VAR_0, VAR_3,
     VAR_19, &VAR_20);
  if (VAR_18 != VAR_6) {
   VAR_13 = VAR_20;
   VAR_20 = 0;
   goto again;
  }

  *VAR_12 = VAR_20;
 }

 FUNC_0(VAR_8, VAR_17);
fail:
 return VAR_18;
}
