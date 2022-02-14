
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;
typedef int git_index ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (int *,int *,int *,int,char*) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int **,int *) ;
 int FUNC_8 (int *,int ,int ,int *,int ) ;
 int FUNC_9 (int **,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

void FUNC_10(void)
{
 static git_index *VAR_7;
 static git_repository *VAR_8;

 FUNC_0(VAR_3, "modified", VAR_2);


 FUNC_2("submodules/testrepo/README", "heyheyhey");
 FUNC_0(VAR_3, "testrepo", VAR_2);


 FUNC_1(FUNC_9(&VAR_8, VAR_5));
 FUNC_1(FUNC_7(&VAR_7, VAR_8));
 FUNC_1(FUNC_4(VAR_7, "README"));


 FUNC_3(((void*)0), VAR_8, ((void*)0), 1372350000, "Modify it");
 FUNC_0(VAR_3, "testrepo", VAR_2);

 FUNC_1(FUNC_8(&VAR_6, VAR_3, VAR_4, ((void*)0), VAR_0));

 FUNC_0(VAR_3, "testrepo", VAR_2);
 FUNC_0(VAR_3, "modified", VAR_1);

 FUNC_5(VAR_7);
 FUNC_6(VAR_8);
}
