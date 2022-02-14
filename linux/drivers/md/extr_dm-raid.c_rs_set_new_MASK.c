
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mddev {scalar_t__ delta_disks; int raid_disks; int new_chunk_sectors; int chunk_sectors; int new_layout; int layout; int new_level; int level; } ;
struct raid_set {int raid_disks; struct mddev md; } ;



__attribute__((used)) static void FUNC_0(struct raid_set *VAR_0)
{
 struct mddev *VAR_1 = &VAR_0->md;

 VAR_1->level = VAR_1->new_level;
 VAR_1->layout = VAR_1->new_layout;
 VAR_1->chunk_sectors = VAR_1->new_chunk_sectors;
 VAR_1->raid_disks = VAR_0->raid_disks;
 VAR_1->delta_disks = 0;
}
