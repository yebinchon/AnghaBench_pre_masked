
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_reference ;
typedef int git_oid ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **,int ,char*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,char*) ;
 int FUNC_11 (int ,char*,char*,int *,int *) ;
 int FUNC_12 (int ,char*,int *,int *,int *) ;

void FUNC_13(void)
{
 git_reference *VAR_2;
 git_oid VAR_3;

 FUNC_4(&VAR_3, "a65fedf39aefe402d3bb6e24df4d4f5fe4547750");

 FUNC_2(FUNC_10(VAR_1, "refs/heads/master"));
 FUNC_2(FUNC_10(VAR_1, "HEAD"));
 FUNC_2(FUNC_11(VAR_1, "refs/heads/master", "refs/heads/foo", ((void*)0), ((void*)0)));
 FUNC_2(FUNC_12(VAR_1, "HEAD", &VAR_3, ((void*)0), ((void*)0)));
 FUNC_2(FUNC_9(VAR_1));

 FUNC_2(FUNC_6(&VAR_2, VAR_0, "refs/heads/master"));
 FUNC_1("refs/heads/foo", FUNC_7(VAR_2));
 FUNC_5(VAR_2);

 FUNC_2(FUNC_6(&VAR_2, VAR_0, "HEAD"));
 FUNC_0(!FUNC_3(&VAR_3, FUNC_8(VAR_2)));
 FUNC_5(VAR_2);
}
