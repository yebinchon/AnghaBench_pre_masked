
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_reference ;
typedef int git_oid ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,int ,int ) ;
 int FUNC_6 (int **,int *,int *,int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_9(void)
{
 git_reference *VAR_4, *VAR_5, *VAR_6;
 git_oid VAR_7;

 FUNC_2(FUNC_5(&VAR_4, VAR_1, VAR_2));
 FUNC_0(FUNC_8(VAR_4) == VAR_0);
 FUNC_3(&VAR_7, FUNC_7(VAR_4));
 FUNC_4(VAR_4);

 FUNC_2(FUNC_5(&VAR_5, VAR_1, VAR_3));
 FUNC_0(FUNC_8(VAR_5) == VAR_0);

 FUNC_2(FUNC_6(&VAR_6, VAR_5, &VAR_7, ((void*)0)));

 FUNC_4(VAR_5);
 FUNC_4(VAR_6);

 FUNC_2(FUNC_5(&VAR_5, VAR_1, VAR_3));
 FUNC_0(FUNC_8(VAR_5) == VAR_0);
 FUNC_1(&VAR_7, FUNC_7(VAR_5));
 FUNC_4(VAR_5);
}
