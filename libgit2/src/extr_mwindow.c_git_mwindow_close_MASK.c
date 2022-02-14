
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int inuse_cnt; } ;
typedef TYPE_1__ git_mwindow ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(git_mwindow **VAR_2)
{
 git_mwindow *VAR_3 = *VAR_2;
 if (VAR_3) {
  if (FUNC_1(&VAR_1)) {
   FUNC_0(VAR_0, "unable to lock mwindow mutex");
   return;
  }

  VAR_3->inuse_cnt--;
  FUNC_2(&VAR_1);
  *VAR_2 = ((void*)0);
 }
}
