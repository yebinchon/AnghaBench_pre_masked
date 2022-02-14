
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_annotated_commit ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int **,int ,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ,int *) ;
 int FUNC_5 (int ,int *,int ,int *) ;
 int FUNC_6 (int *,int ,char*) ;
 int FUNC_7 (int ,char*,int,char*,char const*) ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_8(void)
{
 git_annotated_commit *VAR_3;
 const char *VAR_4 = "checkout: moving from br2 to master";
 const char *VAR_5 = "commit: checking in";

 FUNC_7(VAR_1, "HEAD", 7, "yoram.harmelin@gmail.com", VAR_4);
 FUNC_7(VAR_1, "refs/heads/master", 2, "yoram.harmelin@gmail.com", VAR_5);


 FUNC_0(FUNC_6(&VAR_2, VAR_1, "HEAD^{commit}"));
 FUNC_0(FUNC_4(VAR_1, VAR_2, VAR_0, ((void*)0)));
 FUNC_7(VAR_1, "HEAD", 7, "yoram.harmelin@gmail.com", VAR_4);
 FUNC_7(VAR_1, "refs/heads/master", 2, "yoram.harmelin@gmail.com", VAR_5);
 FUNC_3(VAR_2);


 VAR_4 = "reset: moving to be3563ae3f795b2b4353bcce3a527ad0a4f7f644";
 FUNC_0(FUNC_6(&VAR_2, VAR_1, "HEAD~^{commit}"));
 FUNC_0(FUNC_4(VAR_1, VAR_2, VAR_0, ((void*)0)));
 FUNC_7(VAR_1, "HEAD", 8, "yoram.harmelin@gmail.com", VAR_4);
 FUNC_7(VAR_1, "refs/heads/master", 3, ((void*)0), VAR_4);


 VAR_4 = "reset: moving to HEAD~^{commit}";
 FUNC_0(FUNC_2(&VAR_3, VAR_1, "HEAD~^{commit}"));
 FUNC_0(FUNC_5(VAR_1, VAR_3, VAR_0, ((void*)0)));
 FUNC_7(VAR_1, "HEAD", 9, "yoram.harmelin@gmail.com", VAR_4);
 FUNC_7(VAR_1, "refs/heads/master", 4, ((void*)0), VAR_4);

 FUNC_1(VAR_3);
}
