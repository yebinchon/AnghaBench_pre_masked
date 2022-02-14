
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_config ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int*,int *,char*) ;
 int FUNC_9 (int*,int *,char*) ;
 int FUNC_10 (int *,int *,char*) ;
 int FUNC_11 (int **,int ) ;

void FUNC_12(void)
{
 git_config *VAR_1;
 int VAR_2;

 FUNC_4(FUNC_11(&VAR_1, FUNC_2("config/config4")));

 FUNC_3(FUNC_9(&VAR_2, VAR_1, "some.section.variable"));

 FUNC_4(FUNC_10(&VAR_0, VAR_1, "some.section.variable"));
 FUNC_1("", FUNC_6(&VAR_0));
 FUNC_5(&VAR_0);

 FUNC_4(FUNC_8(&VAR_2, VAR_1, "some.section.variable"));
 FUNC_0(VAR_2 == 1);

 FUNC_4(FUNC_10(&VAR_0, VAR_1, "some.section.variableeq"));
 FUNC_1("", FUNC_6(&VAR_0));

 FUNC_4(FUNC_8(&VAR_2, VAR_1, "some.section.variableeq"));
 FUNC_0(VAR_2 == 0);

 FUNC_7(VAR_1);
}
