
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;
typedef int git_index ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (int *,int *,int *,int,char*) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int **,int *) ;
 int FUNC_9 (int *,int ,int ,int *,int ) ;
 int FUNC_10 (int **,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

void FUNC_11(void)
{
 static git_index *VAR_8;
 static git_repository *VAR_9;

 FUNC_2(FUNC_9(&VAR_7, VAR_4, VAR_5, ((void*)0), VAR_1));
 FUNC_0(VAR_4, "modified", VAR_2);


 FUNC_3("submodules/testrepo/README", "heyheyhey");
 FUNC_0(VAR_4, "testrepo", VAR_3);


 FUNC_2(FUNC_10(&VAR_9, VAR_6));
 FUNC_2(FUNC_8(&VAR_8, VAR_9));
 FUNC_2(FUNC_5(VAR_8, "README"));


 FUNC_4(((void*)0), VAR_9, ((void*)0), 1372350000, "Modify it");
 FUNC_0(VAR_4, "testrepo", VAR_3);

 FUNC_1(FUNC_9(&VAR_7, VAR_4, VAR_5, ((void*)0), VAR_1), VAR_0);

 FUNC_6(VAR_8);
 FUNC_7(VAR_9);
}
