
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32_t ;
typedef int git_config ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (char const*,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,char*) ;
 int FUNC_5 (int **,char const*) ;
 int FUNC_6 (int *,char*,int) ;

void FUNC_7(void)
{
 int32_t VAR_0;
 git_config *VAR_1;
 const char *VAR_2 = "config-ext-change";

 FUNC_1(VAR_2, "[old]\nvalue = 5\n");

 FUNC_2(FUNC_5(&VAR_1, VAR_2));

 FUNC_2(FUNC_4(&VAR_0, VAR_1, "old.value"));


 FUNC_1(VAR_2, "[old]\nvalue = 6\n");

 FUNC_2(FUNC_6(VAR_1, "new.value", 7));

 FUNC_2(FUNC_4(&VAR_0, VAR_1, "old.value"));
 FUNC_0(6, VAR_0);

 FUNC_3(VAR_1);
}
