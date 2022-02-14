
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mddev {scalar_t__ thread; int sb_flags; int pers; } ;
struct md_rdev {scalar_t__ raid_disk; int bdev; int flags; } ;
typedef int dev_t ;
struct TYPE_2__ {int (* remove_disk ) (struct mddev*,struct md_rdev*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int *) ;
 struct md_rdev* FUNC_2 (struct mddev*,int ) ;
 TYPE_1__* VAR_6 ;
 int FUNC_3 (struct md_rdev*) ;
 int FUNC_4 (struct mddev*) ;
 int FUNC_5 (struct mddev*,int) ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (struct mddev*) ;
 int FUNC_8 (struct mddev*) ;
 int FUNC_9 (char*,int ,int ) ;
 int FUNC_10 (struct mddev*,struct md_rdev*) ;
 int FUNC_11 (int ,int *) ;
 int FUNC_12 (struct mddev*,struct md_rdev*) ;

__attribute__((used)) static int FUNC_13(struct mddev *VAR_7, dev_t VAR_8)
{
 char VAR_9[VAR_0];
 struct md_rdev *VAR_10;

 if (!VAR_7->pers)
  return -VAR_3;

 VAR_10 = FUNC_2(VAR_7, VAR_8);
 if (!VAR_10)
  return -VAR_4;

 if (VAR_10->raid_disk < 0)
  goto kick_rdev;

 FUNC_1(VAR_1, &VAR_10->flags);
 FUNC_10(VAR_7, VAR_10);

 if (VAR_10->raid_disk >= 0)
  goto busy;

kick_rdev:
 if (FUNC_7(VAR_7))
  VAR_6->remove_disk(VAR_7, VAR_10);

 FUNC_3(VAR_10);
 FUNC_11(VAR_5, &VAR_7->sb_flags);
 if (VAR_7->thread)
  FUNC_6(VAR_7->thread);
 else
  FUNC_5(VAR_7, 1);
 FUNC_4(VAR_7);

 return 0;
busy:
 FUNC_9("md: cannot remove active disk %s from %s ...\n",
   FUNC_0(VAR_10->bdev,VAR_9), FUNC_8(VAR_7));
 return -VAR_2;
}
