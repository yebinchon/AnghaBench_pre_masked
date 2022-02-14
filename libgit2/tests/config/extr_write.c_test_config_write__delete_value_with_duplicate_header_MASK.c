
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_config_entry ;
typedef int git_config ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char const*,char const*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char const*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **,int *,char const*) ;
 int FUNC_7 (int **,char const*) ;

void FUNC_8(void)
{
 const char *VAR_0 = "config-duplicate-header";
 const char *VAR_1 = "remote.origin.url";
 git_config *VAR_2;
 git_config_entry *VAR_3;


 const char *VAR_4 =
  "[remote \"origin\"]\n" "[branch \"master\"]\n" "	remote = \"origin\"\n" "[remote \"origin\"]\n" "	url = \"foo\"\n";






 FUNC_1(VAR_0, VAR_4);
 FUNC_2(FUNC_7(&VAR_2, VAR_0));
 FUNC_2(FUNC_6(&VAR_3, VAR_2, VAR_1));


 FUNC_2(FUNC_3(VAR_2, VAR_1));


 FUNC_4(VAR_3);
 FUNC_5(VAR_2);
 FUNC_2(FUNC_7(&VAR_2, VAR_0));
 FUNC_0(FUNC_6(&VAR_3, VAR_2, VAR_1));


 FUNC_4(VAR_3);
 FUNC_5(VAR_2);
}
