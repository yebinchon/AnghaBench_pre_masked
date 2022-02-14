
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_tree ;
typedef int git_diff ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int ,int*) ;
 int FUNC_5 (int **,int ,int *,int *,int *) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int ,char const*) ;

void FUNC_8(void)
{
 const char *VAR_3 = "26a125e";
 const char *VAR_4 = "735b6a2";
 git_tree *VAR_5, *VAR_6;
 git_diff *VAR_7;
 int VAR_8;

 VAR_2 = FUNC_2("status");

 VAR_5 = FUNC_7(VAR_2, VAR_3);
 VAR_6 = FUNC_7(VAR_2, VAR_4);

 FUNC_1(FUNC_5(&VAR_7, VAR_2, VAR_5, VAR_6, ((void*)0)));

 VAR_8 = -2323;

 FUNC_0(FUNC_4(
  VAR_7, VAR_0, VAR_1, &VAR_8),
  VAR_8);

 VAR_8 = 45;

 FUNC_0(FUNC_4(
  VAR_7, VAR_0, VAR_1, &VAR_8),
  VAR_8);

 FUNC_3(VAR_7);

 FUNC_6(VAR_6);
 FUNC_6(VAR_5);
}
