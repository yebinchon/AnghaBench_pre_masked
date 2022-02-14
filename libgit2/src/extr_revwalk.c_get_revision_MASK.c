
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int limited; } ;
typedef TYPE_1__ git_revwalk ;
typedef int git_commit_list_node ;
typedef int git_commit_list ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int *,int **) ;
 int * FUNC_1 (int **) ;
 int FUNC_2 () ;

__attribute__((used)) static int FUNC_3(git_commit_list_node **VAR_1, git_revwalk *VAR_2, git_commit_list **VAR_3)
{
 int VAR_4;
 git_commit_list_node *VAR_5;

 VAR_5 = FUNC_1(VAR_3);
 if (!VAR_5) {
  FUNC_2();
  return VAR_0;
 }





 if (!VAR_2->limited) {
  if ((VAR_4 = FUNC_0(VAR_2, VAR_5, VAR_3)) < 0)
   return VAR_4;
 }

 *VAR_1 = VAR_5;
 return 0;
}
