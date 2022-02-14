
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_reference ;
typedef int git_refdb ;
typedef int git_oid ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,int ,char const*,int *,int ,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int **,int ,char const*) ;
 int FUNC_9 (int **,int ) ;
 int FUNC_10 (int *) ;

void FUNC_11(void)
{

 git_reference *VAR_2;
 git_refdb *VAR_3;
 git_oid VAR_4;
 const char *VAR_5 = "refs/heads/new_ref";

 FUNC_2(&VAR_4, VAR_0);


 FUNC_1(FUNC_5(&VAR_2, VAR_1, VAR_5, &VAR_4, 0, ((void*)0)));
 FUNC_7(VAR_2);


 FUNC_1(FUNC_8(&VAR_2, VAR_1, VAR_5));


 FUNC_0(FUNC_10(VAR_2) == 0);


 FUNC_1(FUNC_9(&VAR_3, VAR_1));
 FUNC_1(FUNC_3(VAR_3));


 FUNC_7(VAR_2);
 FUNC_1(FUNC_8(&VAR_2, VAR_1, VAR_5));


 FUNC_0(FUNC_10(VAR_2) == 1);


 FUNC_1(FUNC_6(VAR_2));
 FUNC_7(VAR_2);
 FUNC_4(VAR_3);
}
