
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u32 ;
struct sumo_vid_mapping_table {size_t num_entries; TYPE_1__* entries; } ;
struct amdgpu_device {int dummy; } ;
struct TYPE_5__ {scalar_t__ ulSupportedSCLK; size_t usVoltageIndex; scalar_t__ usVoltageID; } ;
struct TYPE_4__ {scalar_t__ vid_7bit; size_t vid_2bit; } ;
typedef TYPE_2__ ATOM_AVAILABLE_SCLK_LIST ;


 size_t VAR_0 ;
 size_t VAR_1 ;

__attribute__((used)) static void FUNC_0(struct amdgpu_device *VAR_2,
          struct sumo_vid_mapping_table *VAR_3,
          ATOM_AVAILABLE_SCLK_LIST *VAR_4)
{
 u32 VAR_5, VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  if (VAR_4[VAR_5].ulSupportedSCLK != 0) {
   VAR_3->entries[VAR_4[VAR_5].usVoltageIndex].vid_7bit =
    VAR_4[VAR_5].usVoltageID;
   VAR_3->entries[VAR_4[VAR_5].usVoltageIndex].vid_2bit =
    VAR_4[VAR_5].usVoltageIndex;
  }
 }

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  if (VAR_3->entries[VAR_5].vid_7bit == 0) {
   for (VAR_6 = VAR_5 + 1; VAR_6 < VAR_1; VAR_6++) {
    if (VAR_3->entries[VAR_6].vid_7bit != 0) {
     VAR_3->entries[VAR_5] =
      VAR_3->entries[VAR_6];
     VAR_3->entries[VAR_6].vid_7bit = 0;
     break;
    }
   }

   if (VAR_6 == VAR_1)
    break;
  }
 }

 VAR_3->num_entries = VAR_5;
}
