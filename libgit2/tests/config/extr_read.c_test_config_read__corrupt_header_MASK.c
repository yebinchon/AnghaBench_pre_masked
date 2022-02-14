
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_config ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (int *,int *) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **,char*) ;

void FUNC_5(void)
{
 git_config *VAR_1;

 FUNC_2(&VAR_0, ((void*)0));
 FUNC_1("./testconfig", "[sneaky ] \"quoted closing quote mark\\\"");
 FUNC_0(FUNC_4(&VAR_1, "./testconfig"));

 FUNC_3(VAR_1);
}
