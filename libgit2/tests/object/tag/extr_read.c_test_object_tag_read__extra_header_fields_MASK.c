
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_tag ;
typedef int git_oid ;
typedef int git_odb ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int *,int *,int ,int ,int ) ;
 int FUNC_3 (int **,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,int ,int *) ;
 int FUNC_6 (int *) ;
 int VAR_2 ;
 int FUNC_7 (int ) ;

void FUNC_8(void)
{
 git_tag *VAR_3;
 git_odb *VAR_4;
 git_oid VAR_5;

 FUNC_1(FUNC_3(&VAR_4, VAR_1));

 FUNC_1(FUNC_2(&VAR_5, VAR_4, VAR_2, FUNC_7(VAR_2), VAR_0));
 FUNC_1(FUNC_5(&VAR_3, VAR_1, &VAR_5));

 FUNC_0("v1_0_1 release\n", FUNC_6(VAR_3));

 FUNC_4(VAR_3);
}
