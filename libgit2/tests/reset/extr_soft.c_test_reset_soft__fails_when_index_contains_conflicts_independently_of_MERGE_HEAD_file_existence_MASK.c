
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_reference ;
typedef int git_index ;
typedef int git_buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,char*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int *,int ) ;
 int FUNC_11 (int **,int ) ;
 int FUNC_12 (int **,int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ,int ,int ,int *) ;
 int FUNC_15 (int ) ;
 int VAR_4 ;
 int VAR_5 ;

void FUNC_16(void)
{
 git_index *VAR_6;
 git_reference *VAR_7;
 git_buf VAR_8 = VAR_0;

 FUNC_2();

 VAR_4 = FUNC_3("mergedrepo");

 FUNC_1(FUNC_6(&VAR_8, FUNC_13(VAR_4), "MERGE_HEAD"));
 FUNC_1(FUNC_15(FUNC_4(&VAR_8)));
 FUNC_5(&VAR_8);

 FUNC_1(FUNC_12(&VAR_6, VAR_4));
 FUNC_0(1, FUNC_8(VAR_6));
 FUNC_7(VAR_6);

 FUNC_1(FUNC_11(&VAR_7, VAR_4));
 FUNC_1(FUNC_10(&VAR_5, VAR_7, VAR_2));
 FUNC_9(VAR_7);

 FUNC_0(VAR_1, FUNC_14(VAR_4, VAR_5, VAR_3, ((void*)0)));
}
