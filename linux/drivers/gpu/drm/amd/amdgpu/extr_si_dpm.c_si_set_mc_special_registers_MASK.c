
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct si_mc_reg_table {scalar_t__ last; scalar_t__ num_entries; TYPE_3__* mc_reg_table_entry; TYPE_2__* mc_reg_address; } ;
struct TYPE_4__ {int vram_type; } ;
struct amdgpu_device {TYPE_1__ gmc; } ;
struct TYPE_6__ {int* mc_data; } ;
struct TYPE_5__ {int s1; void* s0; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;

 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;

 int FUNC_0 (void*) ;
 scalar_t__ VAR_9 ;

__attribute__((used)) static int FUNC_1(struct amdgpu_device *VAR_10,
           struct si_mc_reg_table *VAR_11)
{
 u8 VAR_12, VAR_13, VAR_14;
 u32 VAR_15;

 for (VAR_12 = 0, VAR_13 = VAR_11->last; VAR_12 < VAR_11->last; VAR_12++) {
  if (VAR_13 >= VAR_9)
   return -VAR_1;
  switch (VAR_11->mc_reg_address[VAR_12].s1) {
  case 129:
   VAR_15 = FUNC_0(VAR_3);
   VAR_11->mc_reg_address[VAR_13].s1 = VAR_3;
   VAR_11->mc_reg_address[VAR_13].s0 = VAR_6;
   for (VAR_14 = 0; VAR_14 < VAR_11->num_entries; VAR_14++)
    VAR_11->mc_reg_table_entry[VAR_14].mc_data[VAR_13] =
     ((VAR_15 & 0xffff0000)) |
     ((VAR_11->mc_reg_table_entry[VAR_14].mc_data[VAR_12] & 0xffff0000) >> 16);
   VAR_13++;

   if (VAR_13 >= VAR_9)
    return -VAR_1;
   VAR_15 = FUNC_0(VAR_4);
   VAR_11->mc_reg_address[VAR_13].s1 = VAR_4;
   VAR_11->mc_reg_address[VAR_13].s0 = VAR_8;
   for (VAR_14 = 0; VAR_14 < VAR_11->num_entries; VAR_14++) {
    VAR_11->mc_reg_table_entry[VAR_14].mc_data[VAR_13] =
     (VAR_15 & 0xffff0000) |
     (VAR_11->mc_reg_table_entry[VAR_14].mc_data[VAR_12] & 0x0000ffff);
    if (VAR_10->gmc.vram_type != VAR_0)
     VAR_11->mc_reg_table_entry[VAR_14].mc_data[VAR_13] |= 0x100;
   }
   VAR_13++;

   if (VAR_10->gmc.vram_type != VAR_0) {
    if (VAR_13 >= VAR_9)
     return -VAR_1;
    VAR_11->mc_reg_address[VAR_13].s1 = VAR_2;
    VAR_11->mc_reg_address[VAR_13].s0 = VAR_2;
    for (VAR_14 = 0; VAR_14 < VAR_11->num_entries; VAR_14++)
     VAR_11->mc_reg_table_entry[VAR_14].mc_data[VAR_13] =
      (VAR_11->mc_reg_table_entry[VAR_14].mc_data[VAR_12] & 0xffff0000) >> 16;
    VAR_13++;
   }
   break;
  case 128:
   VAR_15 = FUNC_0(VAR_5);
   VAR_11->mc_reg_address[VAR_13].s1 = VAR_5;
   VAR_11->mc_reg_address[VAR_13].s0 = VAR_7;
   for(VAR_14 = 0; VAR_14 < VAR_11->num_entries; VAR_14++)
    VAR_11->mc_reg_table_entry[VAR_14].mc_data[VAR_13] =
     (VAR_15 & 0xffff0000) |
     (VAR_11->mc_reg_table_entry[VAR_14].mc_data[VAR_12] & 0x0000ffff);
   VAR_13++;
   break;
  default:
   break;
  }
 }

 VAR_11->last = VAR_13;

 return 0;
}
