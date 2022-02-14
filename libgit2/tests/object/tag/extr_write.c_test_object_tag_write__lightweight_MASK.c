
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_reference ;
typedef int git_oid ;
typedef int git_object ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int **,int ,int *,int ) ;
 scalar_t__ FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int **,int ,char*) ;
 int * FUNC_8 (int *) ;
 int FUNC_9 (int *,int ,char*,int *,int ) ;
 int FUNC_10 (int ,char*) ;
 int VAR_2 ;

void FUNC_11(void)
{

 git_oid VAR_3, VAR_4;
 git_reference *VAR_5;
 git_object *VAR_6;

 FUNC_5(&VAR_3, VAR_2);
 FUNC_1(FUNC_3(&VAR_6, VAR_1, &VAR_3, VAR_0));

 FUNC_1(FUNC_9(
                                          &VAR_4,
                                          VAR_1,
                                          "light-tag",
                                          VAR_6,
                                          0));

 FUNC_2(VAR_6);

 FUNC_0(FUNC_4(&VAR_4, &VAR_3) == 0);

 FUNC_1(FUNC_7(&VAR_5, VAR_1, "refs/tags/light-tag"));
 FUNC_0(FUNC_4(FUNC_8(VAR_5), &VAR_3) == 0);

 FUNC_1(FUNC_10(VAR_1, "light-tag"));

 FUNC_6(VAR_5);
}
