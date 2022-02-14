
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_tree ;
typedef int git_signature ;
typedef int git_reference ;
typedef int git_oid ;
typedef int git_object ;


 char* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (size_t,size_t) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int *,int ,char*,int *,int *,int *,char const*,int *,int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **,int *,int ) ;
 int FUNC_5 (int **,int ,char*,char*,int,char const*) ;
 int FUNC_6 (int **,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int **,char*,char*) ;
 int FUNC_9 (int *) ;
 size_t FUNC_10 (int ,char*) ;

void FUNC_11(void)
{
 git_signature *VAR_3;
 git_oid VAR_4;
 git_tree *VAR_5;
 git_reference *VAR_6, *VAR_7;
 const char *VAR_8;
 size_t VAR_9, VAR_10;

 VAR_9 = FUNC_10(VAR_2, VAR_0);

 FUNC_1(FUNC_8(&VAR_3, "me", "foo@example.com"));

 FUNC_1(FUNC_6(&VAR_6, VAR_2));
 FUNC_1(FUNC_4((git_object **) &VAR_5, VAR_6, VAR_1));

 VAR_10 = FUNC_10(VAR_2, "refs/heads/master");

 VAR_8 = "message 1";
 FUNC_1(FUNC_5(&VAR_7, VAR_2, "refs/heads/master", "refs/heads/foo", 1, VAR_8));

 FUNC_0(0, FUNC_10(VAR_2, "refs/heads/foo"));
 FUNC_0(VAR_9, FUNC_10(VAR_2, VAR_0));
 FUNC_0(VAR_10, FUNC_10(VAR_2, "refs/heads/master"));

 VAR_8 = "message 2";
 FUNC_1(FUNC_2(&VAR_4, VAR_2, "HEAD", VAR_3, VAR_3, ((void*)0), VAR_8, VAR_5, 0, ((void*)0)));

 FUNC_0(1, FUNC_10(VAR_2, "refs/heads/foo"));
 FUNC_0(VAR_9 + 1, FUNC_10(VAR_2, VAR_0));
 FUNC_0(VAR_10, FUNC_10(VAR_2, "refs/heads/master"));

 FUNC_7(VAR_3);
 FUNC_3(VAR_6);
 FUNC_3(VAR_7);
 FUNC_9(VAR_5);
}
