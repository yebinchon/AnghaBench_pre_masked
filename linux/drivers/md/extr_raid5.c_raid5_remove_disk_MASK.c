
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r5conf {int raid_disks; scalar_t__ reshape_progress; scalar_t__ recovery_disabled; int r5c_cached_partial_stripes; int r5c_cached_full_stripes; int active_stripes; scalar_t__ log; struct disk_info* disks; } ;
struct mddev {scalar_t__ recovery_disabled; struct r5conf* private; } ;
struct md_rdev {int raid_disk; int flags; int nr_pending; } ;
struct disk_info {struct md_rdev* rdev; struct md_rdev* replacement; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct r5conf*) ;
 int FUNC_3 (struct r5conf*) ;
 int FUNC_4 (struct r5conf*,struct md_rdev*,int) ;
 int FUNC_5 (struct r5conf*) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 (int ,int *) ;

__attribute__((used)) static int FUNC_9(struct mddev *VAR_8, struct md_rdev *VAR_9)
{
 struct r5conf *VAR_10 = VAR_8->private;
 int VAR_11 = 0;
 int VAR_12 = VAR_9->raid_disk;
 struct md_rdev **VAR_13;
 struct disk_info *VAR_14 = VAR_10->disks + VAR_12;

 FUNC_5(VAR_10);
 if (FUNC_8(VAR_3, &VAR_9->flags) && VAR_10->log) {






  if (FUNC_0(&VAR_10->active_stripes) ||
      FUNC_0(&VAR_10->r5c_cached_full_stripes) ||
      FUNC_0(&VAR_10->r5c_cached_partial_stripes)) {
   return -VAR_0;
  }
  FUNC_3(VAR_10);
  return 0;
 }
 if (VAR_9 == VAR_14->rdev)
  VAR_13 = &VAR_14->rdev;
 else if (VAR_9 == VAR_14->replacement)
  VAR_13 = &VAR_14->replacement;
 else
  return 0;

 if (VAR_12 >= VAR_10->raid_disks &&
     VAR_10->reshape_progress == VAR_4)
  FUNC_1(VAR_2, &VAR_9->flags);

 if (FUNC_8(VAR_2, &VAR_9->flags) ||
     FUNC_0(&VAR_9->nr_pending)) {
  VAR_11 = -VAR_0;
  goto abort;
 }



 if (!FUNC_8(VAR_1, &VAR_9->flags) &&
     VAR_8->recovery_disabled != VAR_10->recovery_disabled &&
     !FUNC_2(VAR_10) &&
     (!VAR_14->replacement || VAR_14->replacement == VAR_9) &&
     VAR_12 < VAR_10->raid_disks) {
  VAR_11 = -VAR_0;
  goto abort;
 }
 *VAR_13 = ((void*)0);
 if (!FUNC_8(VAR_5, &VAR_9->flags)) {
  FUNC_7();
  if (FUNC_0(&VAR_9->nr_pending)) {

   VAR_11 = -VAR_0;
   *VAR_13 = VAR_9;
  }
 }
 if (!VAR_11) {
  VAR_11 = FUNC_4(VAR_10, VAR_9, 0);
  if (VAR_11)
   goto abort;
 }
 if (VAR_14->replacement) {

  VAR_14->rdev = VAR_14->replacement;
  FUNC_1(VAR_6, &VAR_14->replacement->flags);
  FUNC_6();


  VAR_14->replacement = ((void*)0);

  if (!VAR_11)
   VAR_11 = FUNC_4(VAR_10, VAR_14->rdev, 1);
 }

 FUNC_1(VAR_7, &VAR_9->flags);
abort:

 FUNC_5(VAR_10);
 return VAR_11;
}
