
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r5conf {scalar_t__ previous_raid_disks; scalar_t__ pool_size; } ;
struct mddev {scalar_t__ delta_disks; scalar_t__ new_layout; scalar_t__ layout; scalar_t__ new_chunk_sectors; scalar_t__ chunk_sectors; scalar_t__ reshape_position; int level; int raid_disks; struct r5conf* private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct mddev*) ;
 scalar_t__ FUNC_1 (struct r5conf*) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (struct r5conf*) ;
 scalar_t__ FUNC_4 (struct r5conf*) ;
 scalar_t__ FUNC_5 (struct r5conf*,scalar_t__,scalar_t__) ;
 int FUNC_6 (struct r5conf*,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct mddev *VAR_4)
{
 struct r5conf *VAR_5 = VAR_4->private;

 if (FUNC_3(VAR_5) || FUNC_4(VAR_5))
  return -VAR_0;
 if (VAR_4->delta_disks == 0 &&
     VAR_4->new_layout == VAR_4->layout &&
     VAR_4->new_chunk_sectors == VAR_4->chunk_sectors)
  return 0;
 if (FUNC_1(VAR_5))
  return -VAR_0;
 if (VAR_4->delta_disks < 0 && VAR_4->reshape_position == VAR_3) {





  int VAR_6 = 2;
  if (VAR_4->level == 6)
   VAR_6 = 4;
  if (VAR_4->raid_disks + VAR_4->delta_disks < VAR_6)
   return -VAR_0;
 }

 if (!FUNC_0(VAR_4))
  return -VAR_2;

 if (VAR_4->new_chunk_sectors > VAR_4->chunk_sectors ||
     VAR_4->delta_disks > 0)
  if (FUNC_5(VAR_5,
      VAR_5->previous_raid_disks
      + FUNC_2(0, VAR_4->delta_disks),
      FUNC_2(VAR_4->new_chunk_sectors,
          VAR_4->chunk_sectors)
       ) < 0)
   return -VAR_1;

 if (VAR_5->previous_raid_disks + VAR_4->delta_disks <= VAR_5->pool_size)
  return 0;
 return FUNC_6(VAR_5, (VAR_5->previous_raid_disks
         + VAR_4->delta_disks));
}
