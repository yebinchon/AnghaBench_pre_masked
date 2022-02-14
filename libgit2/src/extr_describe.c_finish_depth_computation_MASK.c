
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct possible_tag {int flag_within; int depth; } ;
typedef int git_revwalk ;
typedef int git_pqueue ;
struct TYPE_6__ {int flags; int out_degree; struct TYPE_6__** parents; } ;
typedef TYPE_1__ git_commit_list_node ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int *,size_t) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int *) ;
 size_t FUNC_4 (int *) ;

__attribute__((used)) static unsigned long FUNC_5(
 git_pqueue *VAR_1,
 git_revwalk *VAR_2,
 struct possible_tag *VAR_3)
{
 unsigned long VAR_4 = 0;
 int VAR_5, VAR_6;

 while (FUNC_4(VAR_1) > 0) {
  git_commit_list_node *VAR_7 = FUNC_3(VAR_1);
  VAR_4++;
  if (VAR_7->flags & VAR_3->flag_within) {
   size_t VAR_8 = 0;
   while (FUNC_4(VAR_1) > VAR_8) {
    git_commit_list_node *VAR_9 = FUNC_1(VAR_1, VAR_8);
    if (!(VAR_9->flags & VAR_3->flag_within))
     break;
    VAR_8++;
   }
   if (VAR_8 > FUNC_4(VAR_1))
    break;
  } else
   VAR_3->depth++;
  for (VAR_6 = 0; VAR_6 < VAR_7->out_degree; VAR_6++) {
   git_commit_list_node *VAR_10 = VAR_7->parents[VAR_6];
   if ((VAR_5 = FUNC_0(VAR_2, VAR_10)) < 0)
    return VAR_5;
   if (!(VAR_10->flags & VAR_0))
    if ((VAR_5 = FUNC_2(VAR_1, VAR_10)) < 0)
     return VAR_5;
   VAR_10->flags |= VAR_7->flags;
  }
 }
 return VAR_4;
}
