
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct raid_type {unsigned int parity_devs; int algorithm; int level; } ;
struct TYPE_4__ {unsigned int raid_disks; int recovery_cp; scalar_t__ delta_disks; int layout; int new_layout; int level; int new_level; } ;
struct raid_set {unsigned int raid_disks; int stripe_cache_entries; TYPE_1__* dev; TYPE_2__ md; struct raid_type* raid_type; struct dm_target* ti; scalar_t__ delta_disks; } ;
struct dm_target {char* error; } ;
struct TYPE_3__ {int rdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct raid_set* FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct raid_set* FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (struct raid_set*,int ,unsigned int) ;

__attribute__((used)) static struct raid_set *FUNC_5(struct dm_target *VAR_5, struct raid_type *VAR_6,
           unsigned int VAR_7)
{
 unsigned int VAR_8;
 struct raid_set *VAR_9;

 if (VAR_7 <= VAR_6->parity_devs) {
  VAR_5->error = "Insufficient number of devices";
  return FUNC_0(-VAR_0);
 }

 VAR_9 = FUNC_1(FUNC_4(VAR_9, VAR_4, VAR_7), VAR_2);
 if (!VAR_9) {
  VAR_5->error = "Cannot allocate raid context";
  return FUNC_0(-VAR_1);
 }

 FUNC_3(&VAR_9->md);

 VAR_9->raid_disks = VAR_7;
 VAR_9->delta_disks = 0;

 VAR_9->ti = VAR_5;
 VAR_9->raid_type = VAR_6;
 VAR_9->stripe_cache_entries = 256;
 VAR_9->md.raid_disks = VAR_7;
 VAR_9->md.level = VAR_6->level;
 VAR_9->md.new_level = VAR_9->md.level;
 VAR_9->md.layout = VAR_6->algorithm;
 VAR_9->md.new_layout = VAR_9->md.layout;
 VAR_9->md.delta_disks = 0;
 VAR_9->md.recovery_cp = VAR_3;

 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++)
  FUNC_2(&VAR_9->dev[VAR_8].rdev);
 return VAR_9;
}
