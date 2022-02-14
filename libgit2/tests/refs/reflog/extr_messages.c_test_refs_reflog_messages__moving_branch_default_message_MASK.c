
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_reference ;
typedef int git_oid ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,char*,char*,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int **,int *,char*,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,int ,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

void FUNC_8(void)
{
 git_reference *VAR_2;
 git_reference *VAR_3;
 git_oid VAR_4;

 FUNC_0(FUNC_5(&VAR_2, VAR_1, "refs/heads/master"));
 FUNC_3(&VAR_4, FUNC_7(VAR_2));
 FUNC_0(FUNC_2(&VAR_3, VAR_2, "master2", 0));

 FUNC_1(VAR_1, FUNC_6(VAR_3), 0,
  "a65fedf39aefe402d3bb6e24df4d4f5fe4547750",
  "a65fedf39aefe402d3bb6e24df4d4f5fe4547750",
  VAR_0,
  "branch: renamed refs/heads/master to refs/heads/master2");

 FUNC_4(VAR_2);
 FUNC_4(VAR_3);
}
