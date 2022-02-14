
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char** member_0; int member_1; } ;
typedef TYPE_1__ git_strarray ;
typedef int git_reference ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int **,int ,char*) ;
 int FUNC_5 (int ,TYPE_1__*,int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;

void FUNC_6(void)
{
 char *VAR_2[] = {
  "master",
  "hard_tag",
 };
 git_strarray VAR_3 = {
  VAR_2,
  2,
 };

 git_reference *VAR_4;

 FUNC_3(FUNC_0("testrepo.git"));

 FUNC_2(FUNC_5(VAR_0, &VAR_3, ((void*)0), ((void*)0)));

 FUNC_1(FUNC_4(&VAR_4, VAR_1, "refs/remotes/origin/master"));
 FUNC_1(FUNC_4(&VAR_4, VAR_1, "refs/tags/hard_tag"));
}
