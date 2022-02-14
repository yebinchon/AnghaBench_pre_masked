
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct expectations {char* member_0; int member_1; } ;
typedef int git_branch_iterator ;


 int VAR_0 ;
 int FUNC_0 (struct expectations*,char*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct expectations*,int *) ;
 int VAR_1 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,int ,char*,char*,int ,int *) ;
 int VAR_2 ;

void FUNC_8(void)
{
 git_branch_iterator *VAR_3;
 struct expectations VAR_4[] = {
  { "nulltoken/HEAD", 0 },
  { "nulltoken/master", 0 },
  { ((void*)0), 0 }
 };

 FUNC_6(VAR_1);
 FUNC_2(FUNC_7(&VAR_1, VAR_2, "refs/remotes/nulltoken/HEAD", "refs/remotes/nulltoken/master", 0, ((void*)0)));

 FUNC_1(VAR_0, 3);

 FUNC_2(FUNC_5(&VAR_3, VAR_2, VAR_0));
 FUNC_3(VAR_4, VAR_3);
 FUNC_4(VAR_3);

 FUNC_0(VAR_4, "nulltoken/HEAD");
 FUNC_0(VAR_4, "nulltoken/master");
}
