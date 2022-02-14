
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_reference ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int **,int ,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int ,char*,char*,int *,int *) ;

void FUNC_8(void)
{
 git_reference *VAR_2;

 FUNC_1(FUNC_6(VAR_1, "HEAD"));
 FUNC_1(FUNC_7(VAR_1, "HEAD", "refs/heads/foo", ((void*)0), ((void*)0)));
 FUNC_1(FUNC_5(VAR_1));

 FUNC_1(FUNC_3(&VAR_2, VAR_0, "HEAD"));

 FUNC_0("refs/heads/foo", FUNC_4(VAR_2));
 FUNC_2(VAR_2);
}
