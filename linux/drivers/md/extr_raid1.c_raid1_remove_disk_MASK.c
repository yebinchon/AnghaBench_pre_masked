
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct raid1_info {struct md_rdev* rdev; } ;
struct r1conf {int raid_disks; scalar_t__ recovery_disabled; struct raid1_info* mirrors; } ;
struct mddev {scalar_t__ recovery_disabled; int degraded; struct r1conf* private; } ;
struct md_rdev {int raid_disk; int flags; int nr_pending; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct r1conf*,int ) ;
 int FUNC_3 (struct mddev*) ;
 int FUNC_4 (struct r1conf*) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (int ,int *) ;
 int FUNC_7 (struct r1conf*) ;

__attribute__((used)) static int FUNC_8(struct mddev *VAR_6, struct md_rdev *VAR_7)
{
 struct r1conf *VAR_8 = VAR_6->private;
 int VAR_9 = 0;
 int VAR_10 = VAR_7->raid_disk;
 struct raid1_info *VAR_11 = VAR_8->mirrors + VAR_10;

 if (VAR_7 != VAR_11->rdev)
  VAR_11 = VAR_8->mirrors + VAR_8->raid_disks + VAR_10;

 FUNC_4(VAR_8);
 if (VAR_7 == VAR_11->rdev) {
  if (FUNC_6(VAR_2, &VAR_7->flags) ||
      FUNC_0(&VAR_7->nr_pending)) {
   VAR_9 = -VAR_0;
   goto abort;
  }



  if (!FUNC_6(VAR_1, &VAR_7->flags) &&
      VAR_6->recovery_disabled != VAR_8->recovery_disabled &&
      VAR_6->degraded < VAR_8->raid_disks) {
   VAR_9 = -VAR_0;
   goto abort;
  }
  VAR_11->rdev = ((void*)0);
  if (!FUNC_6(VAR_3, &VAR_7->flags)) {
   FUNC_5();
   if (FUNC_0(&VAR_7->nr_pending)) {

    VAR_9 = -VAR_0;
    VAR_11->rdev = VAR_7;
    goto abort;
   }
  }
  if (VAR_8->mirrors[VAR_8->raid_disks + VAR_10].rdev) {




   struct md_rdev *VAR_12 =
    VAR_8->mirrors[VAR_8->raid_disks + VAR_10].rdev;
   FUNC_2(VAR_8, 0);
   if (FUNC_0(&VAR_12->nr_pending)) {






    VAR_9 = -VAR_0;
    FUNC_7(VAR_8);
    goto abort;
   }
   FUNC_1(VAR_4, &VAR_12->flags);
   VAR_11->rdev = VAR_12;
   VAR_8->mirrors[VAR_8->raid_disks + VAR_10].rdev = ((void*)0);
   FUNC_7(VAR_8);
  }

  FUNC_1(VAR_5, &VAR_7->flags);
  VAR_9 = FUNC_3(VAR_6);
 }
abort:

 FUNC_4(VAR_8);
 return VAR_9;
}
