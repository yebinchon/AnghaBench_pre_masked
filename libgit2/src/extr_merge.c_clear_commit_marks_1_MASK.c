
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int flags; unsigned int out_degree; struct TYPE_4__** parents; } ;
typedef TYPE_1__ git_commit_list_node ;
typedef int git_commit_list ;


 int * FUNC_0 (TYPE_1__*,int **) ;

__attribute__((used)) static int FUNC_1(git_commit_list **VAR_0,
  git_commit_list_node *VAR_1, unsigned int VAR_2)
{
 while (VAR_1) {
  unsigned int VAR_3;

  if (!(VAR_2 & VAR_1->flags))
   return 0;

  VAR_1->flags &= ~VAR_2;

  for (VAR_3 = 1; VAR_3 < VAR_1->out_degree; VAR_3++) {
   git_commit_list_node *VAR_4 = VAR_1->parents[VAR_3];
   if (FUNC_0(VAR_4, VAR_0) == ((void*)0))
    return -1;
  }

  VAR_1 = VAR_1->out_degree ? VAR_1->parents[0] : ((void*)0);
 }

 return 0;
}
