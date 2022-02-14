
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_signature ;
typedef int git_reference ;
typedef int git_oid ;
typedef int git_object ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int **,int ,int *,int ) ;
 scalar_t__ FUNC_4 (int ,int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int **,int ,char*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int **,int ,int ,int,int) ;
 int FUNC_12 (int *,int ,char*,int *,int *,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

void FUNC_13(void)
{

 git_oid VAR_6, VAR_7, VAR_8;
 git_signature *VAR_9;
 git_reference *VAR_10;
 git_object *VAR_11;

 FUNC_6(&VAR_6, VAR_2);
 FUNC_1(FUNC_3(&VAR_11, VAR_1, &VAR_6, VAR_0));

 FUNC_1(FUNC_8(&VAR_10, VAR_1, "refs/tags/e90810b"));
 FUNC_5(&VAR_8, FUNC_9(VAR_10));
 FUNC_7(VAR_10);


 FUNC_1(FUNC_11(&VAR_9, VAR_5, VAR_3, 123456789, 60));

 FUNC_1(FUNC_12(
                              &VAR_7,
                              VAR_1,
                              "e90810b",
                              VAR_11,
                              VAR_9,
                              VAR_4,
                              1));

 FUNC_2(VAR_11);
 FUNC_10(VAR_9);

 FUNC_1(FUNC_8(&VAR_10, VAR_1, "refs/tags/e90810b"));
 FUNC_0(FUNC_4(FUNC_9(VAR_10), &VAR_7) == 0);
 FUNC_0(FUNC_4(FUNC_9(VAR_10), &VAR_8) != 0);

 FUNC_7(VAR_10);
}
