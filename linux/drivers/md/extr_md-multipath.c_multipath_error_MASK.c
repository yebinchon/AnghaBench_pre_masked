
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpconf {int raid_disks; int device_lock; } ;
struct mddev {int degraded; int sb_flags; struct mpconf* private; } ;
struct md_rdev {int bdev; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 scalar_t__ FUNC_6 (int ,int *) ;

__attribute__((used)) static void FUNC_7 (struct mddev *VAR_4, struct md_rdev *VAR_5)
{
 struct mpconf *VAR_6 = VAR_4->private;
 char VAR_7[VAR_0];

 if (VAR_6->raid_disks - VAR_4->degraded <= 1) {





  FUNC_2("multipath: only one IO path left and IO error.\n");

  return;
 }



 if (FUNC_6(VAR_2, &VAR_5->flags)) {
  unsigned long VAR_8;
  FUNC_4(&VAR_6->device_lock, VAR_8);
  VAR_4->degraded++;
  FUNC_5(&VAR_6->device_lock, VAR_8);
 }
 FUNC_3(VAR_1, &VAR_5->flags);
 FUNC_3(VAR_3, &VAR_4->sb_flags);
 FUNC_1("multipath: IO failure on %s, disabling IO path.\n"
        "multipath: Operation continuing on %d IO paths.\n",
        FUNC_0(VAR_5->bdev, VAR_7),
        VAR_6->raid_disks - VAR_4->degraded);
}
