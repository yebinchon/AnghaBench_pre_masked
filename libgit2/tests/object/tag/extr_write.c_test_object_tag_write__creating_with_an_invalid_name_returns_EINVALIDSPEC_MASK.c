
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_signature ;
typedef int git_oid ;
typedef int git_object ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int **,int ,int *,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **,int ,int ,int,int) ;
 int FUNC_7 (int *,int ,char*,int *,int *,int ,int ) ;
 int FUNC_8 (int *,int ,char*,int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

void FUNC_9(void)
{
 git_oid VAR_7, VAR_8;
 git_signature *VAR_9;
 git_object *VAR_10;

 FUNC_4(&VAR_7, VAR_3);
 FUNC_1(FUNC_3(&VAR_10, VAR_2, &VAR_7, VAR_1));

 FUNC_1(FUNC_6(&VAR_9, VAR_6, VAR_4, 123456789, 60));

 FUNC_0(VAR_0,
  FUNC_7(&VAR_8, VAR_2,
    "Inv@{id", VAR_10, VAR_9, VAR_5, 0)
 );

 FUNC_0(VAR_0,
  FUNC_8(&VAR_8, VAR_2,
    "Inv@{id", VAR_10, 0)
 );

 FUNC_2(VAR_10);
 FUNC_5(VAR_9);
}
