
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_config ;


 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,char*,int ,char**) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,char*) ;
 int FUNC_6 (int *,char*,char*) ;
 int FUNC_7 (int **,int *) ;

void FUNC_8(void)
{
 git_config *VAR_1, *VAR_2;
 char *VAR_3 = ((void*)0);

 FUNC_1(FUNC_5(&VAR_1, "./cfg"));

 FUNC_1(FUNC_6(VAR_1, "key.value", "1"));
 FUNC_1(FUNC_7(&VAR_2, VAR_1));
 FUNC_1(FUNC_3(VAR_2, "key.value", VAR_0, &VAR_3));

 FUNC_0(VAR_3, "1");

 FUNC_4(VAR_2);
 FUNC_4(VAR_1);
 FUNC_2(VAR_3);
}
