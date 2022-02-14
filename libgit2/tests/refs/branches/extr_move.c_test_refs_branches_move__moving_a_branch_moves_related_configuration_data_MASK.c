
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_reference ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int **,int ,char*,int ) ;
 int FUNC_3 (int **,int *,char*,int ) ;
 int FUNC_4 (int *) ;
 int VAR_1 ;

void FUNC_5(void)
{
 git_reference *VAR_2;
 git_reference *VAR_3;

 FUNC_1(FUNC_2(&VAR_2, VAR_1, "track-local", VAR_0));

 FUNC_0(VAR_1, "branch.track-local.remote", 1);
 FUNC_0(VAR_1, "branch.track-local.merge", 1);
 FUNC_0(VAR_1, "branch.moved.remote", 0);
 FUNC_0(VAR_1, "branch.moved.merge", 0);

 FUNC_1(FUNC_3(&VAR_3, VAR_2, "moved", 0));
 FUNC_4(VAR_2);

 FUNC_0(VAR_1, "branch.track-local.remote", 0);
 FUNC_0(VAR_1, "branch.track-local.merge", 0);
 FUNC_0(VAR_1, "branch.moved.remote", 1);
 FUNC_0(VAR_1, "branch.moved.merge", 1);

 FUNC_4(VAR_3);
}
