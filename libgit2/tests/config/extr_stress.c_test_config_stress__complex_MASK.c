
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_config ;


 int FUNC_0 (int *,char*,char*) ;
 int FUNC_1 (char const*,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **,char const*) ;

void FUNC_5(void)
{
 git_config *VAR_0;
 const char *VAR_1 = "./config-immediate-multiline";

 FUNC_1(VAR_1, "[imm]\n multi = \"\\\nfoo\"");
 FUNC_2(FUNC_4(&VAR_0, VAR_1));
 FUNC_0(VAR_0, "imm.multi", "foo");

 FUNC_3(VAR_0);
}
