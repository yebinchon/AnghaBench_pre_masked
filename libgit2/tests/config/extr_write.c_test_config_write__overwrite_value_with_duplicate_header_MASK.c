
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int value; } ;
typedef TYPE_1__ git_config_entry ;
typedef int git_config ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char const*,char const*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__**,int *,char const*) ;
 int FUNC_6 (int **,char const*) ;
 int FUNC_7 (int *,char const*,char*) ;

void FUNC_8(void)
{
 const char *VAR_0 = "config-duplicate-header";
 const char *VAR_1 = "remote.origin.url";
 git_config *VAR_2;
 git_config_entry *VAR_3;


 const char *VAR_4 =
  "[remote \"origin\"]\n" "[branch \"master\"]\n" "	remote = \"origin\"\n" "[remote \"origin\"]\n" "	url = \"foo\"\n";






 FUNC_1(VAR_0, VAR_4);
 FUNC_2(FUNC_6(&VAR_2, VAR_0));
 FUNC_2(FUNC_5(&VAR_3, VAR_2, VAR_1));


 FUNC_2(FUNC_7(VAR_2, VAR_1, "newurl"));


 FUNC_3(VAR_3);
 FUNC_4(VAR_2);
 FUNC_2(FUNC_6(&VAR_2, VAR_0));
 FUNC_2(FUNC_5(&VAR_3, VAR_2, VAR_1));

 FUNC_0("newurl", VAR_3->value);


 FUNC_3(VAR_3);
 FUNC_4(VAR_2);
}
