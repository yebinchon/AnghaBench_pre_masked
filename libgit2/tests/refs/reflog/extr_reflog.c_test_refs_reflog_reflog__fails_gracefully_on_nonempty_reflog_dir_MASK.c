
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_reference ;
typedef int git_oid ;
typedef int git_buf ;


 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,char*) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int **,int ,char*,int *,int ,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (char*) ;

void FUNC_13(void)
{
 git_reference *VAR_5;
 git_buf VAR_6 = VAR_0;
 git_oid VAR_7;


 FUNC_7(&VAR_7, VAR_3);
 FUNC_2(FUNC_9(&VAR_5, VAR_4, "refs/heads/new-dir/new-head", &VAR_7, 0, ((void*)0)));
 FUNC_10(VAR_5);

 FUNC_6(&VAR_6, FUNC_11(VAR_4), VAR_2);
 FUNC_6(&VAR_6, FUNC_4(&VAR_6), "refs/heads/new-dir/new-head");

 FUNC_0(1, FUNC_8(FUNC_4(&VAR_6)));


 FUNC_3(FUNC_12("testrepo.git/refs/heads/new-dir/new-head"));


 FUNC_7(&VAR_7, VAR_3);
 FUNC_1(VAR_1, FUNC_9(&VAR_5, VAR_4, "refs/heads/new-dir", &VAR_7, 0, ((void*)0)));
 FUNC_10(VAR_5);

 FUNC_5(&VAR_6);
}
