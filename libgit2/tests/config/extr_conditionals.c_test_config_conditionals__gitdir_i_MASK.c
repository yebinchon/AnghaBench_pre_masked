
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_buf ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*) ;

void FUNC_3(void)
{
 git_buf VAR_1 = VAR_0;

 FUNC_0("gitdir/i", FUNC_2(&VAR_1, "empty_standard_repo/"), 1);
 FUNC_0("gitdir/i", FUNC_2(&VAR_1, "EMPTY_STANDARD_REPO/"), 1);

 FUNC_1(&VAR_1);
}
