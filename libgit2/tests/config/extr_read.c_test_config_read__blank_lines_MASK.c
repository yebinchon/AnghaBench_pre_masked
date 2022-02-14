
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_config ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int*,int *,char*) ;
 int FUNC_5 (int **,int ) ;

void FUNC_6(void)
{
 git_config *VAR_0;
 int VAR_1;

 FUNC_2(FUNC_5(&VAR_0, FUNC_1("config/config6")));

 FUNC_2(FUNC_4(&VAR_1, VAR_0, "valid.subsection.something"));
 FUNC_0(VAR_1 == 1);

 FUNC_2(FUNC_4(&VAR_1, VAR_0, "something.else.something"));
 FUNC_0(VAR_1 == 0);

 FUNC_3(VAR_0);
}
