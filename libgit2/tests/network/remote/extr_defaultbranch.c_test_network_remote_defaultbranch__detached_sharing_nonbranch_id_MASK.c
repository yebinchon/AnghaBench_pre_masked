
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;
typedef int git_reference ;
typedef int git_oid ;
typedef int git_buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int **,int ,char*,int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int **,int ,char*,int *,int,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ,char*) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (int ,int ,int *,int *,int *) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ) ;

void FUNC_15(void)
{
 git_oid VAR_5, VAR_6;
 git_reference *VAR_7;
 git_buf VAR_8 = VAR_0;
 git_repository *VAR_9;

 FUNC_2(FUNC_7(&VAR_5, VAR_4, "HEAD"));
 FUNC_2(FUNC_11(VAR_4));
 FUNC_2(FUNC_8(VAR_4, "refs/heads/master"));
 FUNC_2(FUNC_8(VAR_4, "refs/heads/not-good"));
 FUNC_2(FUNC_5(&VAR_7, VAR_4, "refs/foo/bar", &VAR_5, 1, ((void*)0)));
 FUNC_6(VAR_7);

 FUNC_2(FUNC_9(VAR_3, VAR_1, ((void*)0), ((void*)0), ((void*)0)));
 FUNC_1(VAR_2, FUNC_10(&VAR_8, VAR_3));

 FUNC_2(FUNC_3(&VAR_9, FUNC_14(VAR_4), "./local-detached", ((void*)0)));

 FUNC_0(FUNC_13(VAR_9));
 FUNC_2(FUNC_7(&VAR_6, VAR_4, "HEAD"));
 FUNC_0(FUNC_4(&VAR_5, &VAR_6));

 FUNC_12(VAR_9);
}
