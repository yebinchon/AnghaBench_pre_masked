
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_config ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **,int ) ;
 int FUNC_5 (int *,char*,char*) ;
 int FUNC_6 (char*) ;

void FUNC_7(void)
{
 git_config *VAR_1;

 FUNC_1(FUNC_6("git-test-config"));
 FUNC_2(FUNC_4(&VAR_1, VAR_0));

 FUNC_2(FUNC_5(VAR_1, "some.sec\\tion.other", "foo"));
 FUNC_3(VAR_1);

 FUNC_2(FUNC_4(&VAR_1, VAR_0));

 FUNC_0(VAR_1, "some.sec\\tion.other", "foo");

 FUNC_3(VAR_1);
}
