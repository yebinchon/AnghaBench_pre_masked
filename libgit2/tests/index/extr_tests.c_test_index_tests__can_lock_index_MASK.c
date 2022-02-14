
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;
typedef int git_indexwriter ;
typedef int git_index ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int * FUNC_3 (char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int **,int *) ;

void FUNC_10(void)
{
 git_repository *VAR_2;
 git_index *VAR_3;
 git_indexwriter VAR_4 = VAR_1,
  VAR_5 = VAR_1;

 VAR_2 = FUNC_3("testrepo.git");

 FUNC_1(FUNC_9(&VAR_3, VAR_2));
 FUNC_1(FUNC_8(&VAR_4, VAR_3));

 FUNC_0(VAR_0, FUNC_8(&VAR_5, VAR_3));
 FUNC_0(VAR_0, FUNC_5(VAR_3));

 FUNC_1(FUNC_7(&VAR_4));

 FUNC_1(FUNC_5(VAR_3));

 FUNC_6(&VAR_4);
 FUNC_6(&VAR_5);
 FUNC_4(VAR_3);
 FUNC_2();
}
