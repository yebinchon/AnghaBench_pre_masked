
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_reference ;
typedef int git_oid ;
typedef int git_buf ;


 int VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,char*) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int **,int ,char*,int *,int ,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ) ;

void FUNC_11(void)
{
 git_reference *VAR_4;
 git_buf VAR_5 = VAR_0;
 git_oid VAR_6;


 FUNC_5(&VAR_6, VAR_2);
 FUNC_1(FUNC_7(&VAR_4, VAR_3, "refs/heads/new-dir/new-head", &VAR_6, 0, ((void*)0)));

 FUNC_4(&VAR_5, FUNC_10(VAR_3), VAR_1);
 FUNC_4(&VAR_5, FUNC_2(&VAR_5), "refs/heads/new-dir/new-head");

 FUNC_0(1, FUNC_6(FUNC_2(&VAR_5)));

 FUNC_1(FUNC_8(VAR_4));
 FUNC_9(VAR_4);


 FUNC_5(&VAR_6, VAR_2);
 FUNC_1(FUNC_7(&VAR_4, VAR_3, "refs/heads/new-dir", &VAR_6, 0, ((void*)0)));
 FUNC_9(VAR_4);

 FUNC_3(&VAR_5);
}
