
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_reflog_entry ;
typedef int git_reflog ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (char*,int *,int ) ;
 int FUNC_2 (int const*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ) ;
 int * FUNC_5 (int *) ;
 int * FUNC_6 (int *,int ) ;
 int FUNC_7 (int const*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int **,int ,char*) ;
 int FUNC_10 (int *,int ,int ,char const*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

void FUNC_11(void)
{
 const char *VAR_5 = "This\n\nis a multiline message\n";
 const git_reflog_entry *VAR_6;
 git_reflog *VAR_7;

 FUNC_1("refs/stash@{0}", ((void*)0), VAR_0);

 FUNC_4(FUNC_10(&VAR_4, VAR_2, VAR_3, VAR_5, VAR_1));

 FUNC_4(FUNC_9(&VAR_7, VAR_2, "refs/stash"));
 FUNC_2(VAR_6 = FUNC_6(VAR_7, 0));
 FUNC_3(FUNC_7(VAR_6), "On master: This  is a multiline message");

 FUNC_1("refs/stash@{0}", FUNC_5(&VAR_4), VAR_0);
 FUNC_0("refs/stash@{0}", VAR_5);

 FUNC_8(VAR_7);
}
