
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_config_entry ;
typedef int git_config ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (char const*,char const*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,int *,char const*) ;
 int FUNC_6 (int *,char const*,int *,int ,int*) ;
 int FUNC_7 (int **,char const*) ;
 int FUNC_8 (int *,char const*,char*,char*) ;
 int VAR_0 ;

void FUNC_9(void)
{
 const char *VAR_1 = "config-duplicate-header";
 const char *VAR_2 = "remote.origin.url";
 git_config *VAR_3;
 git_config_entry *VAR_4;
 int VAR_5 = 0;


 const char *VAR_6 =
  "[remote \"origin\"]\n" "	url = \"bar\"\n" "[branch \"master\"]\n" "	remote = \"origin\"\n" "[remote \"origin\"]\n" "	url = \"foo\"\n";







 FUNC_1(VAR_1, VAR_6);
 FUNC_2(FUNC_7(&VAR_3, VAR_1));
 FUNC_2(FUNC_5(&VAR_4, VAR_3, VAR_2));


 FUNC_2(FUNC_8(VAR_3, VAR_2, ".*", "newurl"));
 FUNC_3(VAR_4);
 FUNC_4(VAR_3);


 FUNC_2(FUNC_7(&VAR_3, VAR_1));
 FUNC_2(FUNC_6(VAR_3, VAR_2, ((void*)0), VAR_0, &VAR_5));
 FUNC_0(2, VAR_5);


 FUNC_4(VAR_3);
}
