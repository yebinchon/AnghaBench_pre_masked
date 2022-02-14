
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int raid_disks; int near_copies; } ;
struct r10conf {scalar_t__ cluster_sync_low; scalar_t__ cluster_sync_high; TYPE_1__* mddev; TYPE_2__ geo; } ;
typedef int sector_t ;
struct TYPE_3__ {int chunk_sectors; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct r10conf *VAR_1)
{
 sector_t VAR_2;
 int VAR_3, VAR_4;
 VAR_4 = VAR_1->geo.raid_disks / VAR_1->geo.near_copies;
 if (VAR_1->geo.raid_disks % VAR_1->geo.near_copies == 0)
  VAR_3 = 0;
 else
  VAR_3 = 1;
 VAR_2 = (VAR_4 + VAR_3) * VAR_1->mddev->chunk_sectors;




 VAR_2 = (VAR_0 > VAR_2) ?
   VAR_0 : VAR_2;

 VAR_1->cluster_sync_high = VAR_1->cluster_sync_low + VAR_2;
}
