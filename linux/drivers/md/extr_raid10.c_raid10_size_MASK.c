
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int chunk_shift; int near_copies; int far_copies; int raid_disks; } ;
struct TYPE_4__ {int raid_disks; } ;
struct r10conf {int dev_sectors; TYPE_1__ geo; TYPE_2__ prev; } ;
struct mddev {struct r10conf* private; } ;
typedef int sector_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static sector_t
FUNC_2(struct mddev *VAR_0, sector_t VAR_1, int VAR_2)
{
 sector_t VAR_3;
 struct r10conf *VAR_4 = VAR_0->private;

 if (!VAR_2)
  VAR_2 = FUNC_0(VAR_4->geo.raid_disks,
     VAR_4->prev.raid_disks);
 if (!VAR_1)
  VAR_1 = VAR_4->dev_sectors;

 VAR_3 = VAR_1 >> VAR_4->geo.chunk_shift;
 FUNC_1(VAR_3, VAR_4->geo.far_copies);
 VAR_3 = VAR_3 * VAR_2;
 FUNC_1(VAR_3, VAR_4->geo.near_copies);

 return VAR_3 << VAR_4->geo.chunk_shift;
}
