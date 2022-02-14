
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct md_rdev {int raid_disk; int saved_raid_disk; int sysfs_state; int flags; TYPE_2__* mddev; } ;
typedef int ssize_t ;
struct TYPE_6__ {int raid_disks; int delta_disks; TYPE_1__* pers; int recovery; int thread; } ;
struct TYPE_5__ {int (* hot_add_disk ) (TYPE_2__*,struct md_rdev*) ;int * hot_remove_disk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (char const*,int,unsigned int*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*,struct md_rdev*) ;
 int FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (char const*,char*,int) ;
 int FUNC_6 (TYPE_2__*,struct md_rdev*) ;
 scalar_t__ FUNC_7 (TYPE_2__*,struct md_rdev*) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ,int *) ;

__attribute__((used)) static ssize_t
FUNC_10(struct md_rdev *VAR_12, const char *VAR_13, size_t VAR_14)
{
 int VAR_15;
 int VAR_16;

 if (FUNC_9(VAR_8, &VAR_12->flags))
  return -VAR_2;
 if (FUNC_5(VAR_13, "none", 4)==0)
  VAR_15 = -1;
 else {
  VAR_16 = FUNC_1(VAR_13, 10, (unsigned int *)&VAR_15);
  if (VAR_16 < 0)
   return VAR_16;
 }
 if (VAR_12->mddev->pers && VAR_15 == -1) {







  if (VAR_12->raid_disk == -1)
   return -VAR_3;

  if (VAR_12->mddev->pers->hot_remove_disk == ((void*)0))
   return -VAR_4;
  FUNC_0(VAR_1, &VAR_12->flags);
  FUNC_3(VAR_12->mddev, VAR_12);
  if (VAR_12->raid_disk >= 0)
   return -VAR_2;
  FUNC_4(VAR_9, &VAR_12->mddev->recovery);
  FUNC_2(VAR_12->mddev->thread);
 } else if (VAR_12->mddev->pers) {



  int VAR_17;

  if (VAR_12->raid_disk != -1)
   return -VAR_2;

  if (FUNC_9(VAR_10, &VAR_12->mddev->recovery))
   return -VAR_2;

  if (VAR_12->mddev->pers->hot_add_disk == ((void*)0))
   return -VAR_4;

  if (VAR_15 >= VAR_12->mddev->raid_disks &&
      VAR_15 >= VAR_12->mddev->raid_disks + VAR_12->mddev->delta_disks)
   return -VAR_5;

  VAR_12->raid_disk = VAR_15;
  if (FUNC_9(VAR_7, &VAR_12->flags))
   VAR_12->saved_raid_disk = VAR_15;
  else
   VAR_12->saved_raid_disk = -1;
  FUNC_0(VAR_7, &VAR_12->flags);
  FUNC_0(VAR_0, &VAR_12->flags);
  VAR_17 = VAR_12->mddev->pers->
   hot_add_disk(VAR_12->mddev, VAR_12);
  if (VAR_17) {
   VAR_12->raid_disk = -1;
   return VAR_17;
  } else
   FUNC_8(VAR_12->sysfs_state);
  if (FUNC_7(VAR_12->mddev, VAR_12))
                           ;

 } else {
  if (VAR_15 >= VAR_12->mddev->raid_disks &&
      VAR_15 >= VAR_12->mddev->raid_disks + VAR_12->mddev->delta_disks)
   return -VAR_5;
  VAR_12->raid_disk = VAR_15;

  FUNC_0(VAR_6, &VAR_12->flags);
  FUNC_0(VAR_11, &VAR_12->flags);
  FUNC_4(VAR_7, &VAR_12->flags);
  FUNC_8(VAR_12->sysfs_state);
 }
 return VAR_14;
}
