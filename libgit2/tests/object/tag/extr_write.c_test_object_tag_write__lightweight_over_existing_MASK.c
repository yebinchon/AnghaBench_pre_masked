
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_oid ;
typedef int git_object ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **,int ,int *,int ) ;
 scalar_t__ FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ,char*,int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;

void FUNC_8(void)
{

 git_oid VAR_5, VAR_6, VAR_7;
 git_object *VAR_8;

 FUNC_6(&VAR_5, VAR_4);
 FUNC_2(FUNC_4(&VAR_8, VAR_2, &VAR_5, VAR_1));

 FUNC_1(VAR_0, FUNC_7(
                                          &VAR_6,
                                          VAR_2,
                                          "e90810b",
                                          VAR_8,
                                          0));

 FUNC_6(&VAR_7, VAR_3);
 FUNC_0(FUNC_5(&VAR_6, &VAR_7) == 0);

 FUNC_3(VAR_8);
}
