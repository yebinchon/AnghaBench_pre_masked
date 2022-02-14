
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mddev {int ro; scalar_t__ raid_disks; scalar_t__ dev_sectors; int disks; int flags; int lock; int safemode; int in_sync; int sb_flags; scalar_t__ pers; } ;
typedef int ssize_t ;
typedef enum array_state { ____Placeholder_array_state } array_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char** VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,char*,char*) ;
 scalar_t__ FUNC_4 (int ,int *) ;
 int VAR_12 ;

__attribute__((used)) static ssize_t
FUNC_5(struct mddev *VAR_13, char *VAR_14)
{
 enum array_state VAR_15 = VAR_9;

 if (VAR_13->pers && !FUNC_4(VAR_1, &VAR_13->flags)) {
  switch(VAR_13->ro) {
  case 1:
   VAR_15 = VAR_11;
   break;
  case 2:
   VAR_15 = VAR_10;
   break;
  case 0:
   FUNC_1(&VAR_13->lock);
   if (FUNC_4(VAR_2, &VAR_13->sb_flags))
    VAR_15 = VAR_12;
   else if (VAR_13->in_sync)
    VAR_15 = VAR_7;
   else if (VAR_13->safemode)
    VAR_15 = VAR_4;
   else
    VAR_15 = VAR_3;
   FUNC_2(&VAR_13->lock);
  }

  if (FUNC_4(VAR_0, &VAR_13->flags) && VAR_15 == VAR_7)
   VAR_15 = VAR_6;
 } else {
  if (FUNC_0(&VAR_13->disks) &&
      VAR_13->raid_disks == 0 &&
      VAR_13->dev_sectors == 0)
   VAR_15 = VAR_8;
  else
   VAR_15 = VAR_9;
 }
 return FUNC_3(VAR_14, "%s\n", VAR_5[VAR_15]);
}
