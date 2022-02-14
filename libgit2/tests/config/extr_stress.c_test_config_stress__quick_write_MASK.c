
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32_t ;
typedef int git_config ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int*,int *,char const*) ;
 int FUNC_5 (int **,char const*) ;
 int FUNC_6 (int *,char const*,int) ;

void FUNC_7(void)
{
 git_config *VAR_0, *VAR_1;
 const char *VAR_2 = "./config-quick-write";
 const char *VAR_3 = "quick.write";
 int32_t VAR_4;


 FUNC_1(FUNC_5(&VAR_0, VAR_2));
 FUNC_1(FUNC_5(&VAR_1, VAR_2));


 for (VAR_4 = 0; VAR_4 < 10; VAR_4++) {
  int32_t VAR_5;
  FUNC_1(FUNC_6(VAR_0, VAR_3, VAR_4));
  FUNC_2(1);
  FUNC_1(FUNC_4(&VAR_5, VAR_1, VAR_3));
  FUNC_0(VAR_4, VAR_5);
 }

 FUNC_3(VAR_1);
 FUNC_3(VAR_0);
}
