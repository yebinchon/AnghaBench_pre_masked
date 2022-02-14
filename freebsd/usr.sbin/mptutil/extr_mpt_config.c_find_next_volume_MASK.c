
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct config_id_state {scalar_t__ target_id; int nsdisks; TYPE_4__* ioc2; TYPE_3__* list; TYPE_1__* sdisks; } ;
typedef scalar_t__ U8 ;
struct TYPE_10__ {scalar_t__ VolumeID; } ;
struct TYPE_9__ {int NumActiveVolumes; TYPE_5__* RaidVolume; } ;
struct TYPE_8__ {int ndrives; TYPE_2__** drives; } ;
struct TYPE_7__ {scalar_t__ PhysDiskID; } ;
struct TYPE_6__ {scalar_t__ target; } ;
typedef TYPE_5__ CONFIG_PAGE_IOC_2_RAID_VOL ;



__attribute__((used)) static U8
FUNC_0(struct config_id_state *VAR_0)
{
 CONFIG_PAGE_IOC_2_RAID_VOL *VAR_1;
 int VAR_2;

restart:

 VAR_0->target_id++;


 for (VAR_2 = 0; VAR_2 < VAR_0->nsdisks; VAR_2++)
  if (VAR_0->sdisks[VAR_2].target == VAR_0->target_id)
   goto restart;
 for (VAR_2 = 0; VAR_2 < VAR_0->list->ndrives; VAR_2++)
  if (VAR_0->list->drives[VAR_2]->PhysDiskID == VAR_0->target_id)
   goto restart;


 VAR_1 = VAR_0->ioc2->RaidVolume;
 for (VAR_2 = 0; VAR_2 < VAR_0->ioc2->NumActiveVolumes; VAR_1++, VAR_2++)
  if (VAR_1->VolumeID == VAR_0->target_id)
   goto restart;

 return (VAR_0->target_id);
}
