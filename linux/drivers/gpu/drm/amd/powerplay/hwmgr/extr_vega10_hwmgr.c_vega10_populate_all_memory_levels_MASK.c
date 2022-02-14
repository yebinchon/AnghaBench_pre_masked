
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef size_t uint32_t ;
typedef void* uint16_t ;
struct vega10_single_dpm_table {size_t count; TYPE_3__* dpm_levels; } ;
struct TYPE_6__ {struct vega10_single_dpm_table mem_table; } ;
struct TYPE_8__ {scalar_t__ LowestUclkReservedForUlv; void* MemoryChannelWidth; void* NumMemoryChannels; int * MemSocVoltageIndex; int * UclkLevel; int * MemVid; } ;
struct TYPE_5__ {TYPE_4__ pp_table; } ;
struct vega10_hwmgr {size_t mem_channels; scalar_t__ lowest_uclk_reserved_for_ulv; TYPE_2__ dpm_table; TYPE_1__ smc_state_table; } ;
struct pp_hwmgr {struct vega10_hwmgr* backend; } ;
struct TYPE_7__ {int value; } ;
typedef TYPE_4__ PPTable_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 int* VAR_2 ;
 int FUNC_0 (struct pp_hwmgr*,int ,int *,int *,int *) ;

__attribute__((used)) static int FUNC_1(struct pp_hwmgr *VAR_3)
{
 struct vega10_hwmgr *VAR_4 = VAR_3->backend;
 PPTable_t *VAR_5 = &(VAR_4->smc_state_table.pp_table);
 struct vega10_single_dpm_table *VAR_6 =
   &(VAR_4->dpm_table.mem_table);
 int VAR_7 = 0;
 uint32_t VAR_8, VAR_9;

 for (VAR_8 = 0; VAR_8 < VAR_6->count; VAR_8++) {
  VAR_7 = FUNC_0(VAR_3,
    VAR_6->dpm_levels[VAR_8].value,
    &(VAR_5->MemVid[VAR_8]),
    &(VAR_5->UclkLevel[VAR_8]),
    &(VAR_5->MemSocVoltageIndex[VAR_8]));
  if (VAR_7)
   return VAR_7;
 }

 VAR_9 = VAR_8 - 1;
 while (VAR_8 < VAR_1) {
  VAR_7 = FUNC_0(VAR_3,
    VAR_6->dpm_levels[VAR_9].value,
    &(VAR_5->MemVid[VAR_8]),
    &(VAR_5->UclkLevel[VAR_8]),
    &(VAR_5->MemSocVoltageIndex[VAR_8]));
  if (VAR_7)
   return VAR_7;
  VAR_8++;
 }

 VAR_5->NumMemoryChannels = (uint16_t)(VAR_4->mem_channels);
 VAR_5->MemoryChannelWidth =
   (uint16_t)(VAR_0 *
     VAR_2[VAR_4->mem_channels]);

 VAR_5->LowestUclkReservedForUlv =
   (uint8_t)(VAR_4->lowest_uclk_reserved_for_ulv);

 return VAR_7;
}
