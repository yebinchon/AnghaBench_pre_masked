
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int64_t ;
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
 int64_t VAR_1;

 FUNC_2(FUNC_5(&VAR_0, FUNC_1("config/config5")));

 FUNC_2(FUNC_4(&VAR_1, VAR_0, "number.simple"));
 FUNC_0(VAR_1 == 1);

 FUNC_2(FUNC_4(&VAR_1, VAR_0, "number.k"));
 FUNC_0(VAR_1 == 1 * 1024);

 FUNC_2(FUNC_4(&VAR_1, VAR_0, "number.kk"));
 FUNC_0(VAR_1 == 1 * 1024);

 FUNC_2(FUNC_4(&VAR_1, VAR_0, "number.m"));
 FUNC_0(VAR_1 == 1 * 1024 * 1024);

 FUNC_2(FUNC_4(&VAR_1, VAR_0, "number.mm"));
 FUNC_0(VAR_1 == 1 * 1024 * 1024);

 FUNC_2(FUNC_4(&VAR_1, VAR_0, "number.g"));
 FUNC_0(VAR_1 == 1 * 1024 * 1024 * 1024);

 FUNC_2(FUNC_4(&VAR_1, VAR_0, "number.gg"));
 FUNC_0(VAR_1 == 1 * 1024 * 1024 * 1024);

 FUNC_3(VAR_0);
}
