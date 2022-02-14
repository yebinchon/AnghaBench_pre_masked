
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_reference ;
typedef int git_object ;
typedef int git_index ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (int ,int *,int *) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int **,int *,int ) ;
 int FUNC_13 (int **,int ) ;
 int FUNC_14 (int **,int ) ;
 int FUNC_15 (int ,int *,int ,int *) ;
 int FUNC_16 (char*,int) ;

void FUNC_17(void)
{
 git_index *VAR_4;
 git_reference *VAR_5;
 git_object *VAR_6;

 if (!FUNC_3())
  FUNC_5();

 FUNC_0(VAR_3, "master");
 FUNC_2(FUNC_14(&VAR_4, VAR_3));
 FUNC_2(FUNC_13(&VAR_5, VAR_3));
 FUNC_2(FUNC_12(&VAR_6, VAR_5, VAR_0));

 FUNC_2(FUNC_15(VAR_3, VAR_6, VAR_1, ((void*)0)));
 FUNC_1(VAR_3, 0);


 FUNC_4(FUNC_16("testrepo/README", 0755));

 FUNC_1(VAR_3, 1);
 FUNC_2(FUNC_6(VAR_3, VAR_6, &VAR_2));
 FUNC_1(VAR_3, 0);


 FUNC_4(FUNC_16("testrepo/README", 0755));
 FUNC_4(FUNC_7(VAR_4, "README"));

 FUNC_2(FUNC_9(VAR_4));
 FUNC_1(VAR_3, 1);

 FUNC_2(FUNC_6(VAR_3, VAR_6, &VAR_2));
 FUNC_2(FUNC_9(VAR_4));

 FUNC_1(VAR_3, 0);

 FUNC_10(VAR_6);
 FUNC_11(VAR_5);
 FUNC_8(VAR_4);
}
