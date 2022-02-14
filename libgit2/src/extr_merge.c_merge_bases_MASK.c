
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int length; void** contents; } ;
typedef TYPE_1__ git_vector ;
typedef int git_revwalk ;
typedef int git_repository ;
typedef int git_oid ;
typedef int git_commit_list_node ;
typedef int git_commit_list ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int **,int *,int *,TYPE_1__*) ;
 int * FUNC_2 (int *,int const*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int **,int *) ;
 int FUNC_5 (TYPE_1__*,int,int) ;

__attribute__((used)) static int FUNC_6(git_commit_list **VAR_2, git_revwalk **VAR_3, git_repository *VAR_4, const git_oid *VAR_5, const git_oid *VAR_6)
{
 git_revwalk *VAR_7;
 git_vector VAR_8;
 git_commit_list *VAR_9 = ((void*)0);
 git_commit_list_node *VAR_10;
 void *VAR_11[1];

 if (FUNC_4(&VAR_7, VAR_4) < 0)
  return -1;

 VAR_10 = FUNC_2(VAR_7, VAR_6);
 if (VAR_10 == ((void*)0))
  goto on_error;


 FUNC_5(&VAR_8, 0x0, sizeof(git_vector));
 VAR_11[0] = VAR_10;
 VAR_8.length = 1;
 VAR_8.contents = VAR_11;

 VAR_10 = FUNC_2(VAR_7, VAR_5);
 if (VAR_10 == ((void*)0))
  goto on_error;

 if (FUNC_1(&VAR_9, VAR_7, VAR_10, &VAR_8) < 0)
  goto on_error;

 if (!VAR_9) {
  FUNC_3(VAR_7);
  FUNC_0(VAR_1, "no merge base found");
  return VAR_0;
 }

 *VAR_2 = VAR_9;
 *VAR_3 = VAR_7;

 return 0;

on_error:
 FUNC_3(VAR_7);
 return -1;

}
