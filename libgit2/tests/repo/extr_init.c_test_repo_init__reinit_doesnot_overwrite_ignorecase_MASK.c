
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_config ;


 int * VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int*,int *,char*) ;
 int FUNC_5 (int *,char*,int) ;
 int FUNC_6 (int **,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int **,char*,int) ;

void FUNC_9(void)
{
 git_config *VAR_2;
 int VAR_3;


 FUNC_2(&VAR_1, "not.overwrite.git");
 FUNC_1(FUNC_8(&VAR_0, "not.overwrite.git", 1));


 FUNC_6(&VAR_2, VAR_0);
 FUNC_5(VAR_2, "core.ignorecase", 42);
 FUNC_3(VAR_2);
 FUNC_7(VAR_0);
 VAR_0 = ((void*)0);


 FUNC_1(FUNC_8(&VAR_0, "not.overwrite.git", 1));
 FUNC_6(&VAR_2, VAR_0);


 FUNC_1(FUNC_4(&VAR_3, VAR_2, "core.ignorecase"));
 FUNC_0(42, VAR_3);

 FUNC_3(VAR_2);
}
