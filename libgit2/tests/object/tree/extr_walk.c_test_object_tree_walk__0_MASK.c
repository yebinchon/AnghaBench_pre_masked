
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_tree ;
typedef int git_oid ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **,int ,int *) ;
 int FUNC_5 (int *,int ,int ,int*) ;
 int VAR_3 ;
 int VAR_4 ;

void FUNC_6(void)
{
 git_oid VAR_5;
 git_tree *VAR_6;
 int VAR_7;

 FUNC_2(&VAR_5, VAR_3);

 FUNC_1(FUNC_4(&VAR_6, VAR_2, &VAR_5));

 VAR_7 = 0;
 FUNC_1(FUNC_5(VAR_6, VAR_1, VAR_4, &VAR_7));
 FUNC_0(3, VAR_7);

 VAR_7 = 0;
 FUNC_1(FUNC_5(VAR_6, VAR_0, VAR_4, &VAR_7));
 FUNC_0(3, VAR_7);

 FUNC_3(VAR_6);
}
