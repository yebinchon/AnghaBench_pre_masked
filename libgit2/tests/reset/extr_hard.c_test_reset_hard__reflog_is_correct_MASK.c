
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
 char const* FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,char*,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ,int ,int *) ;
 int FUNC_10 (int ,int *,int ,int *) ;
 int FUNC_11 (int *,int ,char*) ;
 int FUNC_12 (int ,char*,int,char*,char const*) ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_13(void)
{
 git_buf VAR_4 = VAR_0;
 git_annotated_commit *VAR_5;
 const char *VAR_6 = "commit: Add a file which name should appear before the "
  "\"subdir/\" folder while being dealt with by the treewalker";

 FUNC_12(VAR_2, "HEAD", 3, "emeric.fermas@gmail.com", VAR_6);
 FUNC_12(VAR_2, "refs/heads/master", 3, "emeric.fermas@gmail.com", VAR_6);


 FUNC_0(FUNC_11(&VAR_3, VAR_2, "HEAD^{commit}"));
 FUNC_0(FUNC_9(VAR_2, VAR_3, VAR_1, ((void*)0)));
 FUNC_12(VAR_2, "HEAD", 3, "emeric.fermas@gmail.com", VAR_6);
 FUNC_12(VAR_2, "refs/heads/master", 3, "emeric.fermas@gmail.com", VAR_6);

 FUNC_6(VAR_3);


 FUNC_0(FUNC_11(&VAR_3, VAR_2, "HEAD~^{commit}"));
 FUNC_0(FUNC_5(&VAR_4, "reset: moving to %s", FUNC_8(FUNC_7(VAR_3))));
 FUNC_0(FUNC_9(VAR_2, VAR_3, VAR_1, ((void*)0)));
 FUNC_12(VAR_2, "HEAD", 4, ((void*)0), FUNC_3(&VAR_4));
 FUNC_12(VAR_2, "refs/heads/master", 4, ((void*)0), FUNC_3(&VAR_4));

 FUNC_4(&VAR_4);


 VAR_6 = "reset: moving to HEAD~^{commit}";
 FUNC_0(FUNC_2(&VAR_5, VAR_2, "HEAD~^{commit}"));
 FUNC_0(FUNC_10(VAR_2, VAR_5, VAR_1, ((void*)0)));
 FUNC_12(VAR_2, "HEAD", 5, ((void*)0), VAR_6);
 FUNC_12(VAR_2, "refs/heads/master", 5, ((void*)0), VAR_6);

 FUNC_1(VAR_5);

}
