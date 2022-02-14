
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mddev {scalar_t__ external; int * pers; int thread; int recovery; int sb_flags; } ;
struct TYPE_3__ {scalar_t__ shift; scalar_t__ unacked_exist; } ;
struct md_rdev {int raid_disk; int saved_raid_disk; int sysfs_state; int flags; struct mddev* mddev; TYPE_1__ badblocks; int blocked_wait; } ;
typedef int ssize_t ;
struct TYPE_4__ {int (* remove_disk ) (struct mddev*,struct md_rdev*) ;int (* gather_bitmaps ) (struct md_rdev*) ;} ;


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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (struct md_rdev*) ;
 int FUNC_1 (int ,int *) ;
 scalar_t__ FUNC_2 (char const*,char*) ;
 TYPE_2__* VAR_15 ;
 int FUNC_3 (struct mddev*,struct md_rdev*) ;
 int FUNC_4 (struct md_rdev*) ;
 int FUNC_5 (struct mddev*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct mddev*,struct md_rdev*,int) ;
 int FUNC_8 (struct mddev*,struct md_rdev*) ;
 scalar_t__ FUNC_9 (struct mddev*) ;
 int FUNC_10 (struct mddev*,struct md_rdev*) ;
 int FUNC_11 (int ,int *) ;
 int FUNC_12 (struct mddev*,struct md_rdev*) ;
 int FUNC_13 (struct md_rdev*) ;
 int FUNC_14 (int ) ;
 scalar_t__ FUNC_15 (int ,int *) ;
 int FUNC_16 (int *) ;

__attribute__((used)) static ssize_t
FUNC_17(struct md_rdev *VAR_16, const char *VAR_17, size_t VAR_18)
{
 int VAR_19 = -VAR_3;
 if (FUNC_2(VAR_17, "faulty") && VAR_16->mddev->pers) {
  FUNC_3(VAR_16->mddev, VAR_16);
  if (FUNC_15(VAR_6, &VAR_16->flags))
   VAR_19 = 0;
  else
   VAR_19 = -VAR_2;
 } else if (FUNC_2(VAR_17, "remove")) {
  if (VAR_16->mddev->pers) {
   FUNC_1(VAR_0, &VAR_16->flags);
   FUNC_10(VAR_16->mddev, VAR_16);
  }
  if (VAR_16->raid_disk >= 0)
   VAR_19 = -VAR_2;
  else {
   struct mddev *VAR_20 = VAR_16->mddev;
   VAR_19 = 0;
   if (FUNC_9(VAR_20))
    VAR_19 = VAR_15->remove_disk(VAR_20, VAR_16);

   if (VAR_19 == 0) {
    FUNC_4(VAR_16);
    if (VAR_20->pers) {
     FUNC_11(VAR_10, &VAR_20->sb_flags);
     FUNC_6(VAR_20->thread);
    }
    FUNC_5(VAR_20);
   }
  }
 } else if (FUNC_2(VAR_17, "writemostly")) {
  FUNC_11(VAR_14, &VAR_16->flags);
  FUNC_7(VAR_16->mddev, VAR_16, 0);
  VAR_19 = 0;
 } else if (FUNC_2(VAR_17, "-writemostly")) {
  FUNC_8(VAR_16->mddev, VAR_16);
  FUNC_1(VAR_14, &VAR_16->flags);
  VAR_19 = 0;
 } else if (FUNC_2(VAR_17, "blocked")) {
  FUNC_11(VAR_0, &VAR_16->flags);
  VAR_19 = 0;
 } else if (FUNC_2(VAR_17, "-blocked")) {
  if (!FUNC_15(VAR_6, &VAR_16->flags) &&
      !FUNC_15(VAR_4, &VAR_16->flags) &&
      VAR_16->badblocks.unacked_exist) {



   FUNC_3(VAR_16->mddev, VAR_16);
  }
  FUNC_1(VAR_0, &VAR_16->flags);
  FUNC_1(VAR_1, &VAR_16->flags);
  FUNC_16(&VAR_16->blocked_wait);
  FUNC_11(VAR_9, &VAR_16->mddev->recovery);
  FUNC_6(VAR_16->mddev->thread);

  VAR_19 = 0;
 } else if (FUNC_2(VAR_17, "insync") && VAR_16->raid_disk == -1) {
  FUNC_11(VAR_7, &VAR_16->flags);
  VAR_19 = 0;
 } else if (FUNC_2(VAR_17, "failfast")) {
  FUNC_11(VAR_5, &VAR_16->flags);
  VAR_19 = 0;
 } else if (FUNC_2(VAR_17, "-failfast")) {
  FUNC_1(VAR_5, &VAR_16->flags);
  VAR_19 = 0;
 } else if (FUNC_2(VAR_17, "-insync") && VAR_16->raid_disk >= 0 &&
     !FUNC_15(VAR_8, &VAR_16->flags)) {
  if (VAR_16->mddev->pers == ((void*)0)) {
   FUNC_1(VAR_7, &VAR_16->flags);
   VAR_16->saved_raid_disk = VAR_16->raid_disk;
   VAR_16->raid_disk = -1;
   VAR_19 = 0;
  }
 } else if (FUNC_2(VAR_17, "write_error")) {
  FUNC_11(VAR_13, &VAR_16->flags);
  VAR_19 = 0;
 } else if (FUNC_2(VAR_17, "-write_error")) {
  FUNC_1(VAR_13, &VAR_16->flags);
  VAR_19 = 0;
 } else if (FUNC_2(VAR_17, "want_replacement")) {




  if (VAR_16->raid_disk >= 0 &&
      !FUNC_15(VAR_8, &VAR_16->flags) &&
      !FUNC_15(VAR_11, &VAR_16->flags))
   FUNC_11(VAR_12, &VAR_16->flags);
  FUNC_11(VAR_9, &VAR_16->mddev->recovery);
  FUNC_6(VAR_16->mddev->thread);
  VAR_19 = 0;
 } else if (FUNC_2(VAR_17, "-want_replacement")) {



  VAR_19 = 0;
  FUNC_1(VAR_12, &VAR_16->flags);
 } else if (FUNC_2(VAR_17, "replacement")) {




  if (VAR_16->mddev->pers)
   VAR_19 = -VAR_2;
  else {
   FUNC_11(VAR_11, &VAR_16->flags);
   VAR_19 = 0;
  }
 } else if (FUNC_2(VAR_17, "-replacement")) {

  if (VAR_16->mddev->pers)
   VAR_19 = -VAR_2;
  else {
   FUNC_1(VAR_11, &VAR_16->flags);
   VAR_19 = 0;
  }
 } else if (FUNC_2(VAR_17, "re-add")) {
  if (!VAR_16->mddev->pers)
   VAR_19 = -VAR_3;
  else if (FUNC_15(VAR_6, &VAR_16->flags) && (VAR_16->raid_disk == -1) &&
    VAR_16->saved_raid_disk >= 0) {






   if (!FUNC_9(VAR_16->mddev) ||
       (VAR_19 = VAR_15->gather_bitmaps(VAR_16)) == 0) {
    FUNC_1(VAR_6, &VAR_16->flags);
    VAR_19 = FUNC_0(VAR_16);
   }
  } else
   VAR_19 = -VAR_2;
 } else if (FUNC_2(VAR_17, "external_bbl") && (VAR_16->mddev->external)) {
  FUNC_11(VAR_4, &VAR_16->flags);
  VAR_16->badblocks.shift = 0;
  VAR_19 = 0;
 } else if (FUNC_2(VAR_17, "-external_bbl") && (VAR_16->mddev->external)) {
  FUNC_1(VAR_4, &VAR_16->flags);
  VAR_19 = 0;
 }
 if (!VAR_19)
  FUNC_14(VAR_16->sysfs_state);
 return VAR_19 ? VAR_19 : VAR_18;
}
