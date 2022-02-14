
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct opts {scalar_t__ argc; } ;
typedef int git_signature ;
typedef int git_repository ;
typedef int git_oid ;
typedef int git_commit ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int **,int *,int *) ;
 char* FUNC_3 (int *) ;
 int FUNC_4 (int **,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *,int *,int *,int ) ;
 int FUNC_7 (char*,char*) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static int FUNC_9(git_repository *VAR_1, struct opts *VAR_2)
{
 git_signature *VAR_3;
 git_commit *VAR_4;
 git_oid VAR_5;

 if (VAR_2->argc)
  FUNC_8("push does not accept any parameters");

 FUNC_0(FUNC_4(&VAR_3, VAR_1),
    "Unable to get signature", ((void*)0));
 FUNC_0(FUNC_6(&VAR_5, VAR_1, VAR_3, ((void*)0), VAR_0),
    "Unable to save stash", ((void*)0));
 FUNC_0(FUNC_2(&VAR_4, VAR_1, &VAR_5),
    "Unable to lookup stash commit", ((void*)0));

 FUNC_7("Saved working directory %s\n", FUNC_3(VAR_4));

 FUNC_5(VAR_3);
 FUNC_1(VAR_4);

 return 0;
}
