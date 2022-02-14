
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct raid5_percpu {scalar_t__ spare_page; } ;
struct r5conf {int level; int prev_chunk_sectors; int chunk_sectors; int previous_raid_disks; int raid_disks; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct r5conf*,struct raid5_percpu*) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (struct raid5_percpu*,int,int,int ) ;

__attribute__((used)) static int FUNC_4(struct r5conf *VAR_3, struct raid5_percpu *VAR_4)
{
 if (VAR_3->level == 6 && !VAR_4->spare_page) {
  VAR_4->spare_page = FUNC_0(VAR_1);
  if (!VAR_4->spare_page)
   return -VAR_0;
 }

 if (FUNC_3(VAR_4,
      FUNC_2(VAR_3->raid_disks,
          VAR_3->previous_raid_disks),
      FUNC_2(VAR_3->chunk_sectors,
          VAR_3->prev_chunk_sectors)
      / VAR_2,
      VAR_1)) {
  FUNC_1(VAR_3, VAR_4);
  return -VAR_0;
 }

 return 0;
}
