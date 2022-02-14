
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char** member_0; int member_1; } ;
typedef TYPE_1__ git_strarray ;
typedef int git_remote ;
typedef int git_config ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,char*) ;
 int FUNC_2 (int **,int ,char*,int ) ;
 int FUNC_3 (int *,TYPE_1__*,int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,int ) ;
 int FUNC_6 (int ) ;

void FUNC_7(void)
{
 git_config *VAR_1;
 git_remote *VAR_2;
 char *VAR_3[] = {
  "refs/tags/*:refs/tags/*",
 };
 git_strarray VAR_4 = {
  VAR_3,
  1,
 };

 FUNC_0(FUNC_2(&VAR_2, VAR_0, "taggy", FUNC_6(VAR_0)));





 FUNC_0(FUNC_5(&VAR_1, VAR_0));
 FUNC_0(FUNC_1(VAR_1, "branch.master.remote", "taggy"));
 FUNC_0(FUNC_1(VAR_1, "branch.master.merge", "refs/heads/foo"));

 FUNC_0(FUNC_3(VAR_2, &VAR_4, ((void*)0), ((void*)0)));

 FUNC_4(VAR_2);
}
