
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mddev {scalar_t__ new_layout; scalar_t__ layout; scalar_t__ new_chunk_sectors; scalar_t__ chunk_sectors; scalar_t__ raid_disks; } ;
struct raid_set {scalar_t__ delta_disks; scalar_t__ raid_disks; struct mddev md; } ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (struct raid_set*) ;
 scalar_t__ FUNC_2 (struct raid_set*) ;
 scalar_t__ FUNC_3 (struct raid_set*) ;
 scalar_t__ FUNC_4 (struct raid_set*) ;

__attribute__((used)) static bool FUNC_5(struct raid_set *VAR_0)
{
 bool VAR_1;
 struct mddev *VAR_2 = &VAR_0->md;

 if (FUNC_4(VAR_0))
  return 0;

 if (FUNC_1(VAR_0))
  return 0;

 VAR_1 = VAR_2->new_layout != VAR_2->layout ||
   VAR_2->new_chunk_sectors != VAR_2->chunk_sectors ||
   VAR_0->delta_disks;


 if (FUNC_2(VAR_0)) {
  if (VAR_0->delta_disks)
   return !!VAR_0->delta_disks;

  return !VAR_1 &&
         VAR_2->raid_disks != VAR_0->raid_disks;
 }

 if (FUNC_3(VAR_0))
  return VAR_1 &&
         !FUNC_0(VAR_2->new_layout) &&
         VAR_0->delta_disks >= 0;

 return VAR_1;
}
