
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int git_pqueue ;
struct TYPE_6__ {int flags; int out_degree; struct TYPE_6__** parents; } ;
typedef TYPE_1__ git_commit_list_node ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int ,int,int ) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(git_commit_list_node *VAR_4, git_commit_list_node *VAR_5,
 size_t *VAR_6, size_t *VAR_7)
{
 git_commit_list_node *VAR_8;
 git_pqueue VAR_9;
 int VAR_10 = 0, VAR_11;
 *VAR_6 = 0;
 *VAR_7 = 0;

 if (FUNC_1(&VAR_9, 0, 2, VAR_3) < 0)
  return -1;

 if ((VAR_10 = FUNC_2(&VAR_9, VAR_4)) < 0 ||
  (VAR_10 = FUNC_2(&VAR_9, VAR_5)) < 0)
  goto done;

 while ((VAR_8 = FUNC_3(&VAR_9)) != ((void*)0)) {
  if (VAR_8->flags & VAR_2 ||
   (VAR_8->flags & (VAR_0 | VAR_1)) == (VAR_0 | VAR_1))
   continue;
  else if (VAR_8->flags & VAR_0)
   (*VAR_6)++;
  else if (VAR_8->flags & VAR_1)
   (*VAR_7)++;

  for (VAR_11 = 0; VAR_11 < VAR_8->out_degree; VAR_11++) {
   git_commit_list_node *VAR_12 = VAR_8->parents[VAR_11];
   if ((VAR_10 = FUNC_2(&VAR_9, VAR_12)) < 0)
    goto done;
  }
  VAR_8->flags |= VAR_2;
 }

done:
 FUNC_0(&VAR_9);
 return VAR_10;
}
