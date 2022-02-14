
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r5conf {scalar_t__ algorithm; int chunk_sectors; } ;
struct mddev {int new_chunk_sectors; scalar_t__ new_layout; int array_sectors; int raid_disks; scalar_t__ layout; int chunk_sectors; int thread; int sb_flags; struct r5conf* private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct mddev*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static int FUNC_5(struct mddev *VAR_3)
{





 struct r5conf *VAR_4 = VAR_3->private;
 int VAR_5 = VAR_3->new_chunk_sectors;

 if (VAR_3->new_layout >= 0 && !FUNC_0(VAR_3->new_layout))
  return -VAR_0;
 if (VAR_5 > 0) {
  if (!FUNC_2(VAR_5))
   return -VAR_0;
  if (VAR_5 < (VAR_2>>9))
   return -VAR_0;
  if (VAR_3->array_sectors & (VAR_5-1))

   return -VAR_0;
 }



 if (VAR_3->raid_disks == 2) {

  if (VAR_3->new_layout >= 0) {
   VAR_4->algorithm = VAR_3->new_layout;
   VAR_3->layout = VAR_3->new_layout;
  }
  if (VAR_5 > 0) {
   VAR_4->chunk_sectors = VAR_5 ;
   VAR_3->chunk_sectors = VAR_5;
  }
  FUNC_4(VAR_1, &VAR_3->sb_flags);
  FUNC_3(VAR_3->thread);
 }
 return FUNC_1(VAR_3);
}
