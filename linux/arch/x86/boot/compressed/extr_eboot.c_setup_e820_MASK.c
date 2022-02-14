
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u64 ;
typedef int u32 ;
struct setup_data {scalar_t__ data; } ;
struct efi_info {int efi_memmap_size; int efi_memdesc_size; unsigned long efi_memmap; scalar_t__ efi_memmap_hi; } ;
struct e820_entry {int dummy; } ;
struct boot_params {scalar_t__ e820_entries; struct boot_e820_entry* e820_table; struct efi_info efi_info; } ;
struct boot_e820_entry {unsigned int type; scalar_t__ addr; scalar_t__ size; } ;
typedef int efi_status_t ;
struct TYPE_3__ {int type; scalar_t__ phys_addr; int num_pages; } ;
typedef TYPE_1__ efi_memory_desc_t ;


 int FUNC_0 (struct boot_e820_entry*) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;




 int VAR_6 ;
 int VAR_7 ;

 int VAR_8 ;
 int FUNC_1 (struct boot_params*,struct setup_data*,int) ;
 TYPE_1__* FUNC_2 (unsigned long,int,int) ;

__attribute__((used)) static efi_status_t
FUNC_3(struct boot_params *VAR_9, struct setup_data *VAR_10, u32 VAR_11)
{
 struct boot_e820_entry *VAR_12 = VAR_9->e820_table;
 struct efi_info *VAR_13 = &VAR_9->efi_info;
 struct boot_e820_entry *VAR_14 = ((void*)0);
 u32 VAR_15;
 u32 VAR_16;
 int VAR_17;

 VAR_15 = 0;
 VAR_16 = VAR_13->efi_memmap_size / VAR_13->efi_memdesc_size;

 for (VAR_17 = 0; VAR_17 < VAR_16; VAR_17++) {
  efi_memory_desc_t *VAR_18;
  unsigned int VAR_19 = 0;
  unsigned long VAR_20 = VAR_13->efi_memmap;





  VAR_18 = FUNC_2(VAR_20, VAR_13->efi_memdesc_size, VAR_17);
  switch (VAR_18->type) {
  case 131:
  case 130:
  case 129:
  case 135:
  case 134:
  case 133:
   VAR_19 = VAR_4;
   break;

  case 128:
   VAR_19 = VAR_5;
   break;

  case 141:
   VAR_19 = VAR_0;
   break;

  case 137:
  case 136:
  case 140:
  case 139:
  case 138:
   VAR_19 = VAR_3;
   break;

  case 142:
   VAR_19 = VAR_1;
   break;

  case 132:
   VAR_19 = VAR_2;
   break;

  default:
   continue;
  }


  if (VAR_14 && VAR_14->type == VAR_19 &&
      (VAR_14->addr + VAR_14->size) == VAR_18->phys_addr) {
   VAR_14->size += VAR_18->num_pages << 12;
   continue;
  }

  if (VAR_15 == FUNC_0(VAR_9->e820_table)) {
   u32 VAR_21 = (VAR_16 - VAR_17) * sizeof(struct e820_entry) +
       sizeof(struct setup_data);

   if (!VAR_10 || VAR_11 < VAR_21)
    return VAR_6;


   VAR_12 = (struct boot_e820_entry *)VAR_10->data;
  }

  VAR_12->addr = VAR_18->phys_addr;
  VAR_12->size = VAR_18->num_pages << VAR_8;
  VAR_12->type = VAR_19;
  VAR_14 = VAR_12++;
  VAR_15++;
 }

 if (VAR_15 > FUNC_0(VAR_9->e820_table)) {
  u32 VAR_22 = VAR_15 - FUNC_0(VAR_9->e820_table);

  FUNC_1(VAR_9, VAR_10, VAR_22);
  VAR_15 -= VAR_22;
 }

 VAR_9->e820_entries = (u8)VAR_15;

 return VAR_7;
}
