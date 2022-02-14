
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct multipath_info {struct md_rdev* rdev; } ;
struct mpconf {struct multipath_info* multipaths; } ;
struct mddev {struct mpconf* private; } ;
struct md_rdev {int raid_disk; int nr_pending; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct mddev*) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (struct mpconf*) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int ,int *) ;

__attribute__((used)) static int FUNC_6(struct mddev *VAR_3, struct md_rdev *VAR_4)
{
 struct mpconf *VAR_5 = VAR_3->private;
 int VAR_6 = 0;
 int VAR_7 = VAR_4->raid_disk;
 struct multipath_info *VAR_8 = VAR_5->multipaths + VAR_7;

 FUNC_3(VAR_5);

 if (VAR_4 == VAR_8->rdev) {
  if (FUNC_5(VAR_1, &VAR_4->flags) ||
      FUNC_0(&VAR_4->nr_pending)) {
   FUNC_2("hot-remove-disk, slot %d is identified but is still operational!\n", VAR_7);
   VAR_6 = -VAR_0;
   goto abort;
  }
  VAR_8->rdev = ((void*)0);
  if (!FUNC_5(VAR_2, &VAR_4->flags)) {
   FUNC_4();
   if (FUNC_0(&VAR_4->nr_pending)) {

    VAR_6 = -VAR_0;
    VAR_8->rdev = VAR_4;
    goto abort;
   }
  }
  VAR_6 = FUNC_1(VAR_3);
 }
abort:

 FUNC_3(VAR_5);
 return VAR_6;
}
