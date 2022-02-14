
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct sumo_vid_mapping_table {size_t num_entries; TYPE_1__* entries; } ;
struct radeon_device {int dummy; } ;
struct TYPE_2__ {size_t vid_2bit; size_t vid_7bit; } ;



u32 FUNC_0(struct radeon_device *VAR_0,
         struct sumo_vid_mapping_table *VAR_1,
         u32 VAR_2)
{
 u32 VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->num_entries; VAR_3++) {
  if (VAR_1->entries[VAR_3].vid_2bit == VAR_2)
   return VAR_1->entries[VAR_3].vid_7bit;
 }

 return VAR_1->entries[VAR_1->num_entries - 1].vid_7bit;
}
