
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_reference ;
typedef int git_oid ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int **,int ,int ,int *,int,int *) ;
 int FUNC_3 (int **,int ,char*,int ,int,int *) ;

void FUNC_4(void)
{
 int VAR_4;
 git_oid VAR_5;
 git_reference *VAR_6;


 FUNC_1(&VAR_5, VAR_2);
 VAR_4 = FUNC_2(&VAR_6, VAR_3, VAR_1, &VAR_5, 0, ((void*)0));
 FUNC_0(VAR_4 == VAR_0);

 VAR_4 = FUNC_3(&VAR_6, VAR_3, "HEAD", VAR_1, 0, ((void*)0));
 FUNC_0(VAR_4 == VAR_0);
}
