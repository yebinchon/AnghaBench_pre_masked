
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int git_mwindow_file ;
struct TYPE_6__ {scalar_t__ length; } ;
struct TYPE_5__ {TYPE_3__ windowfiles; } ;
typedef TYPE_1__ git_mwindow_ctl ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (TYPE_3__*,int,int *) ;
 int FUNC_4 (TYPE_3__*,int *) ;
 TYPE_1__ VAR_2 ;

int FUNC_5(git_mwindow_file *VAR_3)
{
 git_mwindow_ctl *VAR_4 = &VAR_2;
 int VAR_5;

 if (FUNC_1(&VAR_1)) {
  FUNC_0(VAR_0, "unable to lock mwindow mutex");
  return -1;
 }

 if (VAR_4->windowfiles.length == 0 &&
     FUNC_3(&VAR_4->windowfiles, 8, ((void*)0)) < 0) {
  FUNC_2(&VAR_1);
  return -1;
 }

 VAR_5 = FUNC_4(&VAR_4->windowfiles, VAR_3);
 FUNC_2(&VAR_1);

 return VAR_5;
}
