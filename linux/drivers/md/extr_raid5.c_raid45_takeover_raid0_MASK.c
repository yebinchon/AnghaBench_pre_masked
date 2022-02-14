
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct r0conf {int nr_strip_zones; TYPE_1__* strip_zone; } ;
struct mddev {int new_level; int raid_disks; int delta_disks; int recovery_cp; int chunk_sectors; int new_chunk_sectors; int new_layout; int dev_sectors; struct r0conf* private; } ;
typedef int sector_t ;
struct TYPE_2__ {int nb_dev; int zone_end; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (struct mddev*) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int ,int ) ;
 void* FUNC_4 (struct mddev*) ;

__attribute__((used)) static void *FUNC_5(struct mddev *VAR_3, int VAR_4)
{
 struct r0conf *VAR_5 = VAR_3->private;
 sector_t VAR_6;


 if (VAR_5->nr_strip_zones > 1) {
  FUNC_2("md/raid:%s: cannot takeover raid0 with more than one zone.\n",
   FUNC_1(VAR_3));
  return FUNC_0(-VAR_1);
 }

 VAR_6 = VAR_5->strip_zone[0].zone_end;
 FUNC_3(VAR_6, VAR_5->strip_zone[0].nb_dev);
 VAR_3->dev_sectors = VAR_6;
 VAR_3->new_level = VAR_4;
 VAR_3->new_layout = VAR_0;
 VAR_3->new_chunk_sectors = VAR_3->chunk_sectors;
 VAR_3->raid_disks += 1;
 VAR_3->delta_disks = 1;

 VAR_3->recovery_cp = VAR_2;

 return FUNC_4(VAR_3);
}
