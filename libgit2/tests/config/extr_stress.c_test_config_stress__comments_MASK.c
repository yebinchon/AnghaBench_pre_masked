
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_config ;


 int FUNC_0 (int *,char*,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **,int ) ;

void FUNC_5(void)
{
 git_config *VAR_0;

 FUNC_2(FUNC_4(&VAR_0, FUNC_1("config/config12")));

 FUNC_0(VAR_0, "some.section.test2", "hello");
 FUNC_0(VAR_0, "some.section.test3", "welcome");
 FUNC_0(VAR_0, "some.section.other", "hello! \" ; ; ; ");
 FUNC_0(VAR_0, "some.section.other2", "cool! \" # # # ");
 FUNC_0(VAR_0, "some.section.multi", "hi, this is a ; multiline comment # with ;\n special chars and other stuff !@#");
 FUNC_0(VAR_0, "some.section.multi2", "good, this is a ; multiline comment # with ;\n special chars and other stuff !@#");
 FUNC_0(VAR_0, "some.section.back", "this is \ba phrase");

 FUNC_3(VAR_0);
}
