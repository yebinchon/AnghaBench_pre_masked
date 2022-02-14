
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct radeon_device {int dummy; } ;
struct ci_power_info {int mem_gddr5; } ;
struct ci_mc_reg_table {scalar_t__ last; scalar_t__ num_entries; TYPE_2__* mc_reg_table_entry; TYPE_1__* mc_reg_address; } ;
struct TYPE_4__ {int* mc_data; } ;
struct TYPE_3__ {int s1; int s0; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

 int FUNC_0 (int) ;
 scalar_t__ VAR_8 ;
 struct ci_power_info* FUNC_1 (struct radeon_device*) ;

__attribute__((used)) static int FUNC_2(struct radeon_device *VAR_9,
           struct ci_mc_reg_table *VAR_10)
{
 struct ci_power_info *VAR_11 = FUNC_1(VAR_9);
 u8 VAR_12, VAR_13, VAR_14;
 u32 VAR_15;

 for (VAR_12 = 0, VAR_13 = VAR_10->last; VAR_12 < VAR_10->last; VAR_12++) {
  if (VAR_13 >= VAR_8)
   return -VAR_0;
  switch(VAR_10->mc_reg_address[VAR_12].s1 << 2) {
  case 129:
   VAR_15 = FUNC_0(VAR_2);
   VAR_10->mc_reg_address[VAR_13].s1 = VAR_2 >> 2;
   VAR_10->mc_reg_address[VAR_13].s0 = VAR_5 >> 2;
   for (VAR_14 = 0; VAR_14 < VAR_10->num_entries; VAR_14++) {
    VAR_10->mc_reg_table_entry[VAR_14].mc_data[VAR_13] =
     ((VAR_15 & 0xffff0000)) | ((VAR_10->mc_reg_table_entry[VAR_14].mc_data[VAR_12] & 0xffff0000) >> 16);
   }
   VAR_13++;
   if (VAR_13 >= VAR_8)
    return -VAR_0;

   VAR_15 = FUNC_0(VAR_3);
   VAR_10->mc_reg_address[VAR_13].s1 = VAR_3 >> 2;
   VAR_10->mc_reg_address[VAR_13].s0 = VAR_7 >> 2;
   for (VAR_14 = 0; VAR_14 < VAR_10->num_entries; VAR_14++) {
    VAR_10->mc_reg_table_entry[VAR_14].mc_data[VAR_13] =
     (VAR_15 & 0xffff0000) | (VAR_10->mc_reg_table_entry[VAR_14].mc_data[VAR_12] & 0x0000ffff);
    if (!VAR_11->mem_gddr5)
     VAR_10->mc_reg_table_entry[VAR_14].mc_data[VAR_13] |= 0x100;
   }
   VAR_13++;
   if (VAR_13 > VAR_8)
    return -VAR_0;

   if (!VAR_11->mem_gddr5) {
    VAR_10->mc_reg_address[VAR_13].s1 = VAR_1 >> 2;
    VAR_10->mc_reg_address[VAR_13].s0 = VAR_1 >> 2;
    for (VAR_14 = 0; VAR_14 < VAR_10->num_entries; VAR_14++) {
     VAR_10->mc_reg_table_entry[VAR_14].mc_data[VAR_13] =
      (VAR_10->mc_reg_table_entry[VAR_14].mc_data[VAR_12] & 0xffff0000) >> 16;
    }
    VAR_13++;
    if (VAR_13 > VAR_8)
     return -VAR_0;
   }
   break;
  case 128:
   VAR_15 = FUNC_0(VAR_4);
   VAR_10->mc_reg_address[VAR_13].s1 = VAR_4 >> 2;
   VAR_10->mc_reg_address[VAR_13].s0 = VAR_6 >> 2;
   for (VAR_14 = 0; VAR_14 < VAR_10->num_entries; VAR_14++) {
    VAR_10->mc_reg_table_entry[VAR_14].mc_data[VAR_13] =
     (VAR_15 & 0xffff0000) | (VAR_10->mc_reg_table_entry[VAR_14].mc_data[VAR_12] & 0x0000ffff);
   }
   VAR_13++;
   if (VAR_13 > VAR_8)
    return -VAR_0;
   break;
  default:
   break;
  }

 }

 VAR_10->last = VAR_13;

 return 0;
}
