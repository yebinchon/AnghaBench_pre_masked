
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;
typedef int git_buf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,unsigned int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int * FUNC_4 (char*) ;
 int FUNC_5 (int *,char*,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ,char*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int **,char*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (unsigned int*,int *,char*) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int *,char*) ;

__attribute__((used)) static void FUNC_16(
 bool VAR_2,
 int VAR_3,
 int VAR_4)
{
 unsigned int VAR_5;
 git_buf VAR_6 = VAR_0, VAR_7 = VAR_0;
 git_repository *VAR_8, *VAR_9;

 VAR_8 = FUNC_4("empty_standard_repo");
 FUNC_3(FUNC_11(VAR_8), "dummy-marker.txt");

 FUNC_5(VAR_8, "core.ignorecase", VAR_2);

 FUNC_2(FUNC_8(&VAR_6,
  FUNC_12(VAR_8), "plop"));

 FUNC_1(FUNC_6(&VAR_6), "");

 FUNC_15(VAR_8, "plop");

 FUNC_2(FUNC_10(&VAR_9, "./empty_standard_repo"));

 FUNC_2(FUNC_13(&VAR_5, VAR_9, "plop"));
 FUNC_0(VAR_1, VAR_5);

 FUNC_2(FUNC_8(&VAR_7,
  FUNC_12(VAR_8), "Plop"));

 FUNC_2(FUNC_14(FUNC_6(&VAR_6), FUNC_6(&VAR_7)));

 FUNC_2(FUNC_13(&VAR_5, VAR_9, "plop"));
 FUNC_0(VAR_3, VAR_5);

 FUNC_2(FUNC_13(&VAR_5, VAR_9, "Plop"));
 FUNC_0(VAR_4, VAR_5);

 FUNC_9(VAR_9);
 FUNC_7(&VAR_6);
 FUNC_7(&VAR_7);
}
