
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mddev {scalar_t__ ctime; int del_work; int all_mddevs; int hold_active; int disks; int raid_disks; int active; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct mddev *VAR_3)
{
 if (!FUNC_1(&VAR_3->active, &VAR_0))
  return;
 if (!VAR_3->raid_disks && FUNC_3(&VAR_3->disks) &&
     VAR_3->ctime == 0 && !VAR_3->hold_active) {


  FUNC_2(&VAR_3->all_mddevs);






  FUNC_0(&VAR_3->del_work, VAR_2);
  FUNC_4(VAR_1, &VAR_3->del_work);
 }
 FUNC_5(&VAR_0);
}
