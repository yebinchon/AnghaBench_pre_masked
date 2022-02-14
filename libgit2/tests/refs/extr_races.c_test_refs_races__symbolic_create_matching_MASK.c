
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_reference ;
typedef int git_oid ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **,int ,char*) ;
 int FUNC_5 (int **,int ,char*,int *,int,int *,int *) ;
 int FUNC_6 (int **,int *,int *,int *) ;
 int VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;

void FUNC_7(void)
{
 git_reference *VAR_6, *VAR_7, *VAR_8;
 git_oid VAR_9, VAR_10;

 FUNC_2(&VAR_9, VAR_1);
 FUNC_2(&VAR_10, VAR_3);

 FUNC_0(VAR_0, FUNC_5(&VAR_6, VAR_2, "HEAD", VAR_4, 1, VAR_4, ((void*)0)));

 FUNC_1(FUNC_4(&VAR_6, VAR_2, "HEAD"));
 FUNC_1(FUNC_5(&VAR_7, VAR_2, "HEAD", VAR_4, 1, ((void*)0), VAR_5));
 FUNC_0(VAR_0, FUNC_6(&VAR_8, VAR_6, VAR_4, ((void*)0)));

 FUNC_3(VAR_6);
 FUNC_3(VAR_7);
 FUNC_3(VAR_8);
}
