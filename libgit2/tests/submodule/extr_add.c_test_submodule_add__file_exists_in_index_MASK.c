
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_submodule ;
typedef int git_index ;
typedef int git_buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int VAR_3 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **,int ) ;
 int FUNC_5 (int **,int ,char*,char*,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ,char*,int ) ;
 int VAR_4 ;

void FUNC_8(void)
{
 git_index *VAR_5;
 git_submodule *VAR_6;
 git_buf VAR_7 = VAR_0;

 VAR_3 = FUNC_2("testrepo");

 FUNC_1(FUNC_4(&VAR_5, VAR_3));

 FUNC_7(VAR_5, VAR_4, "subdirectory", VAR_2);

 FUNC_0(FUNC_5(&VAR_6, VAR_3, "./", "subdirectory", 1), VAR_1);

 FUNC_6(VAR_6);
 FUNC_3(&VAR_7);
}
