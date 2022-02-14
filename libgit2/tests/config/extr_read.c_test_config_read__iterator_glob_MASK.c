
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_config ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **,int ) ;

void FUNC_5(void)
{
 git_config *VAR_0;

 FUNC_2(FUNC_4(&VAR_0, FUNC_1("config/config9")));

 FUNC_0(VAR_0, "core.*", 3);
 FUNC_0(VAR_0, "remote\\.ab.*", 2);
 FUNC_0(VAR_0, ".*url$", 2);
 FUNC_0(VAR_0, ".*dummy.*", 2);
 FUNC_0(VAR_0, ".*nomatch.*", 0);

 FUNC_3(VAR_0);
}
