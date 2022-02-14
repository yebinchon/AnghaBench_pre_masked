
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct raid10_info {scalar_t__ recovery_disabled; struct md_rdev* replacement; struct md_rdev* rdev; } ;
struct TYPE_2__ {int raid_disks; } ;
struct r10conf {TYPE_1__ geo; struct raid10_info* mirrors; } ;
struct mddev {scalar_t__ recovery_disabled; struct r10conf* private; } ;
struct md_rdev {int raid_disk; int flags; int nr_pending; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 scalar_t__ FUNC_2 (struct r10conf*,int) ;
 int FUNC_3 (struct mddev*) ;
 int FUNC_4 (struct r10conf*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (int ,int *) ;

__attribute__((used)) static int FUNC_8(struct mddev *VAR_6, struct md_rdev *VAR_7)
{
 struct r10conf *VAR_8 = VAR_6->private;
 int VAR_9 = 0;
 int VAR_10 = VAR_7->raid_disk;
 struct md_rdev **VAR_11;
 struct raid10_info *VAR_12 = VAR_8->mirrors + VAR_10;

 FUNC_4(VAR_8);
 if (VAR_7 == VAR_12->rdev)
  VAR_11 = &VAR_12->rdev;
 else if (VAR_7 == VAR_12->replacement)
  VAR_11 = &VAR_12->replacement;
 else
  return 0;

 if (FUNC_7(VAR_2, &VAR_7->flags) ||
     FUNC_0(&VAR_7->nr_pending)) {
  VAR_9 = -VAR_0;
  goto abort;
 }



 if (!FUNC_7(VAR_1, &VAR_7->flags) &&
     VAR_6->recovery_disabled != VAR_12->recovery_disabled &&
     (!VAR_12->replacement || VAR_12->replacement == VAR_7) &&
     VAR_10 < VAR_8->geo.raid_disks &&
     FUNC_2(VAR_8, -1)) {
  VAR_9 = -VAR_0;
  goto abort;
 }
 *VAR_11 = ((void*)0);
 if (!FUNC_7(VAR_3, &VAR_7->flags)) {
  FUNC_6();
  if (FUNC_0(&VAR_7->nr_pending)) {

   VAR_9 = -VAR_0;
   *VAR_11 = VAR_7;
   goto abort;
  }
 }
 if (VAR_12->replacement) {

  VAR_12->rdev = VAR_12->replacement;
  FUNC_1(VAR_4, &VAR_12->replacement->flags);
  FUNC_5();


  VAR_12->replacement = ((void*)0);
 }

 FUNC_1(VAR_5, &VAR_7->flags);
 VAR_9 = FUNC_3(VAR_6);

abort:

 FUNC_4(VAR_8);
 return VAR_9;
}
