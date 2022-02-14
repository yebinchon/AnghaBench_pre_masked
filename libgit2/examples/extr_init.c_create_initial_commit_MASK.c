
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_tree ;
typedef int git_signature ;
typedef int git_repository ;
typedef int git_oid ;
typedef int git_index ;


 int FUNC_0 (char*,char*) ;
 scalar_t__ FUNC_1 (int *,int *,char*,int *,int *,int *,char*,int *,int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (int **,int *) ;
 scalar_t__ FUNC_5 (int **,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int **,int *,int *) ;

__attribute__((used)) static void FUNC_9(git_repository *VAR_0)
{
 git_signature *VAR_1;
 git_index *VAR_2;
 git_oid VAR_3, VAR_4;
 git_tree *VAR_5;



 if (FUNC_5(&VAR_1, VAR_0) < 0)
  FUNC_0("Unable to create a commit signature.",
        "Perhaps 'user.name' and 'user.email' are not set");



 if (FUNC_4(&VAR_2, VAR_0) < 0)
  FUNC_0("Could not open repository index", ((void*)0));







 if (FUNC_3(&VAR_3, VAR_2) < 0)
  FUNC_0("Unable to write initial tree from index", ((void*)0));

 FUNC_2(VAR_2);

 if (FUNC_8(&VAR_5, VAR_0, &VAR_3) < 0)
  FUNC_0("Could not look up initial tree", ((void*)0));
 if (FUNC_1(
   &VAR_4, VAR_0, "HEAD", VAR_1, VAR_1,
   ((void*)0), "Initial commit", VAR_5, 0) < 0)
  FUNC_0("Could not create the initial commit", ((void*)0));



 FUNC_7(VAR_5);
 FUNC_6(VAR_1);
}
