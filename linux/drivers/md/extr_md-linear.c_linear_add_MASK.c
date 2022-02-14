
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mddev {scalar_t__ raid_disks; int gendisk; int array_sectors; int private; int reconfig_mutex; } ;
struct md_rdev {scalar_t__ saved_raid_disk; scalar_t__ raid_disk; } ;
struct linear_conf {scalar_t__ raid_disks; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct linear_conf*,int ) ;
 struct linear_conf* FUNC_2 (struct mddev*,scalar_t__) ;
 int FUNC_3 (struct mddev*,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct mddev*,int ) ;
 int FUNC_6 (struct mddev*) ;
 int FUNC_7 (struct mddev*) ;
 int VAR_2 ;
 int FUNC_8 (int ,struct linear_conf*) ;
 struct linear_conf* FUNC_9 (int ,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int ) ;

__attribute__((used)) static int FUNC_12(struct mddev *VAR_3, struct md_rdev *VAR_4)
{
 struct linear_conf *VAR_5, *VAR_6;

 if (VAR_4->saved_raid_disk != VAR_3->raid_disks)
  return -VAR_0;

 VAR_4->raid_disk = VAR_4->saved_raid_disk;
 VAR_4->saved_raid_disk = -1;

 VAR_5 = FUNC_2(VAR_3,VAR_3->raid_disks+1);

 if (!VAR_5)
  return -VAR_1;







 FUNC_7(VAR_3);
 VAR_6 = FUNC_9(VAR_3->private,
   FUNC_4(&VAR_3->reconfig_mutex));
 VAR_3->raid_disks++;
 FUNC_0(VAR_3->raid_disks != VAR_5->raid_disks,
  "copied raid_disks doesn't match mddev->raid_disks");
 FUNC_8(VAR_3->private, VAR_5);
 FUNC_5(VAR_3, FUNC_3(VAR_3, 0, 0));
 FUNC_11(VAR_3->gendisk, VAR_3->array_sectors);
 FUNC_6(VAR_3);
 FUNC_10(VAR_3->gendisk);
 FUNC_1(VAR_6, VAR_2);
 return 0;
}
