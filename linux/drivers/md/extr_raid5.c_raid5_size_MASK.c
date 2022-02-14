
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r5conf {int max_degraded; scalar_t__ prev_chunk_sectors; scalar_t__ chunk_sectors; int previous_raid_disks; int raid_disks; } ;
struct mddev {int dev_sectors; struct r5conf* private; } ;
typedef int sector_t ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static sector_t
FUNC_1(struct mddev *VAR_0, sector_t VAR_1, int VAR_2)
{
 struct r5conf *VAR_3 = VAR_0->private;

 if (!VAR_1)
  VAR_1 = VAR_0->dev_sectors;
 if (!VAR_2)

  VAR_2 = FUNC_0(VAR_3->raid_disks, VAR_3->previous_raid_disks);

 VAR_1 &= ~((sector_t)VAR_3->chunk_sectors - 1);
 VAR_1 &= ~((sector_t)VAR_3->prev_chunk_sectors - 1);
 return VAR_1 * (VAR_2 - VAR_3->max_degraded);
}
