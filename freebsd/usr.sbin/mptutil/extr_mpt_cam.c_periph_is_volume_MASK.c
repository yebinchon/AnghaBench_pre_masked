
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct periph_match_result {scalar_t__ target_id; } ;
struct TYPE_5__ {int NumActiveVolumes; TYPE_1__* RaidVolume; } ;
struct TYPE_4__ {scalar_t__ VolumeBus; scalar_t__ VolumeID; } ;
typedef TYPE_1__ CONFIG_PAGE_IOC_2_RAID_VOL ;
typedef TYPE_2__ CONFIG_PAGE_IOC_2 ;



__attribute__((used)) static int
FUNC_0(CONFIG_PAGE_IOC_2 *VAR_0, struct periph_match_result *VAR_1)
{
 CONFIG_PAGE_IOC_2_RAID_VOL *VAR_2;
 int VAR_3;

 if (VAR_0 == ((void*)0))
  return (0);
 VAR_2 = VAR_0->RaidVolume;
 for (VAR_3 = 0; VAR_3 < VAR_0->NumActiveVolumes; VAR_2++, VAR_3++) {
  if (VAR_2->VolumeBus == 0 && VAR_2->VolumeID == VAR_1->target_id)
   return (1);
 }
 return (0);
}
