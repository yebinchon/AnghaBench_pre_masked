
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {unsigned short out_degree; int uninteresting; struct TYPE_5__** parents; } ;
typedef TYPE_1__ git_commit_list_node ;
typedef int git_commit_list ;


 int FUNC_0 (TYPE_1__*,int **) ;
 TYPE_1__* FUNC_1 (int **) ;

__attribute__((used)) static void FUNC_2(git_commit_list_node *VAR_0)
{
 unsigned short VAR_1;
 git_commit_list *VAR_2 = ((void*)0);

 for (VAR_1 = 0; VAR_1 < VAR_0->out_degree; VAR_1++)
  FUNC_0(VAR_0->parents[VAR_1], &VAR_2);


 while (VAR_2) {
  VAR_0 = FUNC_1(&VAR_2);

  while (VAR_0) {
   if (VAR_0->uninteresting)
    break;

   VAR_0->uninteresting = 1;





   if (!VAR_0->parents)
    break;

   for (VAR_1 = 0; VAR_1 < VAR_0->out_degree; VAR_1++)
    FUNC_0(VAR_0->parents[VAR_1], &VAR_2);
   VAR_0 = VAR_0->parents[0];
  }
 }
}
