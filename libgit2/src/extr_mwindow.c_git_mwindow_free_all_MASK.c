
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_mwindow_file ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(git_mwindow_file *VAR_2)
{
 if (FUNC_1(&VAR_1)) {
  FUNC_0(VAR_0, "unable to lock mwindow mutex");
  return;
 }

 FUNC_3(VAR_2);

 FUNC_2(&VAR_1);
}
