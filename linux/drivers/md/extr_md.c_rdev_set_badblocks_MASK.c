
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mddev {int thread; int sb_flags; } ;
struct md_rdev {struct mddev* mddev; int sysfs_state; int kobj; int flags; int badblocks; scalar_t__ data_offset; scalar_t__ new_data_offset; } ;
typedef int sector_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ,int,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int *,int *,char*) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ,int *) ;

int FUNC_7(struct md_rdev *VAR_3, sector_t VAR_4, int VAR_5,
         int VAR_6)
{
 struct mddev *VAR_7 = VAR_3->mddev;
 int VAR_8;
 if (VAR_6)
  VAR_4 += VAR_3->new_data_offset;
 else
  VAR_4 += VAR_3->data_offset;
 VAR_8 = FUNC_1(&VAR_3->badblocks, VAR_4, VAR_5, 0);
 if (VAR_8 == 0) {

  if (FUNC_6(VAR_0, &VAR_3->flags))
   FUNC_4(&VAR_3->kobj, ((void*)0),
         "unacknowledged_bad_blocks");
  FUNC_5(VAR_3->sysfs_state);
  FUNC_3(&VAR_7->sb_flags, 0,
         FUNC_0(VAR_1) | FUNC_0(VAR_2));
  FUNC_2(VAR_3->mddev->thread);
  return 1;
 } else
  return 0;
}
