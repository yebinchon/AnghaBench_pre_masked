
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_tree ;
typedef int git_diff ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int ,int *) ;
 int FUNC_4 (int **,int ,int *,int *,int *) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int ,char const*) ;

void FUNC_7(void)
{
 const char *VAR_3 = "26a125e";
 const char *VAR_4 = "735b6a2";
 git_tree *VAR_5, *VAR_6;
 git_diff *VAR_7;

 VAR_2 = FUNC_1("status");

 VAR_5 = FUNC_6(VAR_2, VAR_3);
 VAR_6 = FUNC_6(VAR_2, VAR_4);

 FUNC_0(FUNC_4(&VAR_7, VAR_2, VAR_5, VAR_6, ((void*)0)));

 FUNC_0(FUNC_3(
  VAR_7, VAR_0, VAR_1, ((void*)0)));

 FUNC_2(VAR_7);

 FUNC_5(VAR_6);
 FUNC_5(VAR_5);
}
