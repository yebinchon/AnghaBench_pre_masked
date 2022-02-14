
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_buf ;
typedef int git_annotated_commit ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int **,int ,char*) ;
 int FUNC_3 (int *) ;
 char const* FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,char*,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int *,int ,int *) ;
 int FUNC_11 (int ,int *,int ,int *) ;
 int FUNC_12 (int **,int ,char*) ;
 int FUNC_13 (int ,char*,int,char*,char const*) ;
 int VAR_2 ;
 int * VAR_3 ;

void FUNC_14(void)
{
 git_buf VAR_4 = VAR_0;
 git_annotated_commit *VAR_5;
 const char *VAR_6 = "commit: Updating test data so we can test inter-hunk-context";

 FUNC_13(VAR_2, "HEAD", 9, "yoram.harmelin@gmail.com", VAR_6);
 FUNC_13(VAR_2, "refs/heads/master", 9, "yoram.harmelin@gmail.com", VAR_6);


 FUNC_0(FUNC_12(&VAR_3, VAR_2, "HEAD^{commit}"));
 FUNC_0(FUNC_10(VAR_2, VAR_3, VAR_1, ((void*)0)));
 FUNC_13(VAR_2, "HEAD", 9, "yoram.harmelin@gmail.com", VAR_6);
 FUNC_13(VAR_2, "refs/heads/master", 9, "yoram.harmelin@gmail.com", VAR_6);

 FUNC_7(VAR_3);
 VAR_3 = ((void*)0);


 FUNC_0(FUNC_12(&VAR_3, VAR_2, "HEAD~^{commit}"));
 FUNC_3(&VAR_4);
 FUNC_0(FUNC_6(&VAR_4, "reset: moving to %s", FUNC_9(FUNC_8(VAR_3))));
 FUNC_0(FUNC_10(VAR_2, VAR_3, VAR_1, ((void*)0)));
 FUNC_13(VAR_2, "HEAD", 10, ((void*)0), FUNC_4(&VAR_4));
 FUNC_13(VAR_2, "refs/heads/master", 10, ((void*)0), FUNC_4(&VAR_4));
 FUNC_5(&VAR_4);


 VAR_6 = "reset: moving to HEAD~^{commit}";
 FUNC_0(FUNC_2(&VAR_5, VAR_2, "HEAD~^{commit}"));
 FUNC_0(FUNC_11(VAR_2, VAR_5, VAR_1, ((void*)0)));
 FUNC_13(VAR_2, "HEAD", 11, ((void*)0), VAR_6);
 FUNC_13(VAR_2, "refs/heads/master", 11, ((void*)0), VAR_6);
 FUNC_1(VAR_5);
}
