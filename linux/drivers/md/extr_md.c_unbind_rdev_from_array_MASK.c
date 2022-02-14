
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ count; } ;
struct md_rdev {int del_work; int kobj; TYPE_1__ badblocks; int * sysfs_state; TYPE_2__* mddev; int bdev; int same_set; } ;
struct TYPE_4__ {int gendisk; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (TYPE_2__*,struct md_rdev*) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 () ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,char*) ;

__attribute__((used)) static void FUNC_11(struct md_rdev *VAR_3)
{
 char VAR_4[VAR_0];

 FUNC_1(VAR_3->bdev, VAR_3->mddev->gendisk);
 FUNC_4(&VAR_3->same_set);
 FUNC_6("md: unbind<%s>\n", FUNC_2(VAR_3->bdev,VAR_4));
 FUNC_5(VAR_3->mddev, VAR_3);
 VAR_3->mddev = ((void*)0);
 FUNC_10(&VAR_3->kobj, "block");
 FUNC_9(VAR_3->sysfs_state);
 VAR_3->sysfs_state = ((void*)0);
 VAR_3->badblocks.count = 0;




 FUNC_8();
 FUNC_0(&VAR_3->del_work, VAR_1);
 FUNC_3(&VAR_3->kobj);
 FUNC_7(VAR_2, &VAR_3->del_work);
}
