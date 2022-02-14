
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags; int progress_cb; } ;
typedef TYPE_1__ git_diff_options ;
typedef int git_diff ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (char*) ;
 int VAR_3 ;
 int FUNC_2 (int **,int ,int *,TYPE_1__*) ;
 int VAR_4 ;

void FUNC_3(void)
{
 git_diff_options VAR_5 = VAR_2;
 git_diff *VAR_6 = ((void*)0);

 VAR_3 = FUNC_1("status");

 VAR_5.flags |= VAR_0 | VAR_1;
 VAR_5.progress_cb = VAR_4;

 FUNC_0(
  FUNC_2(&VAR_6, VAR_3, ((void*)0), &VAR_5), -42);
}
