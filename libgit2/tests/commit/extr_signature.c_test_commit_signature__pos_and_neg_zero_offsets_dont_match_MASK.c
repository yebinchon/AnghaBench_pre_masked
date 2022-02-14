
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_signature ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **,char*) ;

void FUNC_5(void)
{
 git_signature *VAR_0;
 git_signature *VAR_1;

 FUNC_1(FUNC_4(&VAR_0, "Test User <test@test.tt> 1461698487 -0000"));
 FUNC_1(FUNC_4(&VAR_1, "Test User <test@test.tt> 1461698487 +0000"));

 FUNC_0(!FUNC_2(VAR_0, VAR_1));

 FUNC_3((git_signature *)VAR_0);
 FUNC_3((git_signature *)VAR_1);
}
